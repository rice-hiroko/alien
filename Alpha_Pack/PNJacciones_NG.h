! Implementaci�n de las "acciones" para la librer�a PNJactor
! Versi�n 1.0

System_file;

Constant PNJ_YA_MOVIDO = 10;
Constant PNJ_SIN_SALIDA = 11;
Constant PNJ_PUERTA_BLOQUEADA = 12;
Constant PNJ_PUERTA_CERRADA = 13;

! Accion COGER
!
[ PNJCoger quien que
  aux1 aux2 r;

  if (PuedeTocar(quien, que, 1)) {
    aux1 = action; aux2 = noun;
    action = ##Take; actor = quien; noun = que;
    r = RutinasAntesPNJ();
      
    if (r == false) {
      move que to quien;
      if (RutinasDespuesPNJ() == false)
        ! Mensaje de �xito
        if (SeVen(quien, player))
          print_ret (The) actor, " recoge ", (the) noun, ".";

      action = aux1;
      noun = aux2;
      rtrue;
    }
      
    action = aux1;
    noun = aux2;
  }
  rfalse;
];

!
! Acci�n DEJAR
!
[ PNJDejar quien que
  aux1 aux2 r;

  if (PuedeTocar(quien, que)) {
    if (CommonAncestor(quien, que) == quien) {
      aux1 = action; aux2 = noun; noun = que;
      action = ##Drop; actor = quien;
      r = RutinasAntesPNJ();
          
      if (r == false) {
        move que to parent(quien);
          if (RutinasDespuesPNJ() == false)
            ! Mensaje de �xito
            if (SeVen(quien, player))
              print_ret (The) actor, " deja ", (the) noun, ".";

        action = aux1;
        noun = aux2;
        rtrue;
      }
          
      action = aux1;
      noun = aux2;
    }
  }
  rfalse;
];

!
! Acci�n INVENTARIO
!
[ PNJInvAncho quien;
  inventory_style = FULLINV_BIT + ENGLISH_BIT + RECURSE_BIT;
  PNJInv(quien);
];

[ PNJInvAlto quien;
  inventory_style = FULLINV_BIT + INDENT_BIT + NEWLINE_BIT + RECURSE_BIT;
  PNJInv(quien);
];

[ PNJInv quien x
	aux1 aux2 r;

  aux1 = action; aux2 = noun;               ! Guardar para restaurar al final
  action = ##Inv;
  actor = quien;
  r = RutinasAntesPNJ();                   ! Ejecutar las rutinas "antesPNJ", etc...
  
  if (r == false) {                        ! Solo si retorna false proseguimos
    r = RutinasDespuesPNJ();
    
    if (r == false)  {                     ! Solo si retorna false emitimos nuestro
      if (SeVen(quien, player) == false)  ! mensaje por defecto
        rtrue;
        
      if (child(quien) == 0) {
        print (El_) quien, " te muestra sus manos vac�as.^";
        rtrue;
      }
    
  	  if (inventory_style == 0)
	      return InvTallSub();

  	  print (El_) quien, "te dice -Llevo";

      if (inventory_style & NEWLINE_BIT ~= 0)
        print ":^";
      else
        print " ";

      WriteListFrom(child(quien), inventory_style, 1);
	  
      if (inventory_style & ENGLISH_BIT ~= 0) print ".^";
	  
      x = 0; ! To prevent a "not used" error

      ! Finalizada la acci�n, restauramos las variables y retornamos
      ! true, para indicar que se ha realizado con �xito
      action = aux1; noun = aux2;
      rtrue;
    }
  }
  
  ! Si la acci�n no pudo efectuarse, restaurar variables y retornar false
  action = aux1; noun = aux2;
  rfalse;
];

!
! Acci�n SOPLAR
!
[ PNJSoplar quien que ! Los par�metros de esta acci�n
   aux1 aux2 r;       ! Otras variables locales
 
  aux1 = action; aux2 = noun;    ! Guardar para restaurar al final

  ! 1 y 2) Comprobar que est� al alcance y que se puede tocar
  if (PuedeTocar(quien, que)) {
    ! 3) Restricciones adicionales para esta acci�n
    !    Por ejemplo, a lo mejor queremos permitir s�lo que se
    !    soplen objetos "soplables". O podr�amos obligar a que s�lo
    !    se puedan soplar los objetos de inventario...
    !    Si no se cumple la restricci�n podemos cargar un codigo de
    !    error apropiado en RazonErrorPNJ o bien emitir un mensaje
    !    (previa comprobacion de que SeVen(quien, jugador).
    !    Y seguidamente retornar false como indicador de que
    !    la acci�n ha fallado.

    ! En este caso, en la acci�n Soplar no vamos a imponer ninguna
    ! condici�n especial. Se puede Soplar cualquier objeto que se
    ! pueda tocar.
    ! 4) Preparar variables para ejecutar la acci�n ...

    action = ##Blow;        ! Soplar debe ser una accion
                              ! definida en la gram�tica, si no la
                              ! constante ##Soplar no estar� definida
    actor = quien; noun = que;

    ! 4) ... y comprobar si alg�n objeto captura esta acci�n para
    !    impedirla

    r = RutinasAntesPNJ();    ! Ejecutar las rutinas "antesPNJ", etc...

    if (r == false) {         ! Solo si retorna false proseguimos
      ! 5) Llevar a cabo la acci�n "Soplar", cambiando el estado
      !    de los objetos que lo requieran. Por ejemplo, podr�amos
      !    cambiar alg�n atributo o propiedad del objeto soplado.
      !
      !    En este ejemplo no haremos nada especial, pero otras
      !    acciones s� requieren c�digo aqu�. Por ejemplo Coger debe
      !    mover objetos al actor.

      ! 6) Una vez efectuada la acci�n, emitir un mensaje apropiado. Primero
      ! damos la oportunidad a los objetos de que lo emitan ellos mismos

      r = RutinasDespuesPNJ();
      
      if (r==false) {          ! Solo si retorna false emitimos nuestro mensaje por defecto
        ! 7) Emitir el mensaje de exito de esta acci�n
        if (SeVen(player, actor))  ! Si se ven, se imprime el mensaje
          print_ret (El_) actor, " sopla", (n) actor, " ", (the) noun, ".";
      }
      
      ! Finalizada la acci�n, restauramos las variables y retornamos
      ! true, para indicar que se ha realizado con �xito
      action = aux1; noun = aux2;
      rtrue;
    }
  }

  ! Si la acci�n no pudo efectuarse, restaurar variables y retornar false
  action = aux1; noun = aux2;
  rfalse;
];

!
! Acci�n IR
!
[ PNJIr amover direccion
  i j p mensaje aux1 aux2 aux3 r fin;
    
  mensaje = 2;
  p = parent(amover);
  i = ConduceA(direccion, p, CAMINO_CUALQUIERA);
  fin = false;

  if (i == 0) {
    RazonErrorPNJ = PNJ_SIN_SALIDA;
!    amover.pnj_bloqueado();
    #ifdef DEBUG;
    if (parser_trace > 1)
      print "[MoverPNJDir bloqueado: la direcci�n no lleva a ning�n sitio]^";
    #endif;
    rfalse;
  }
    
  j = p.(direccion.door_dir);

  if (ZRegion(j) == 2)
    j = j();

  if (j)
    if (j has door)	{
      ! pnj_abrir retorna: 2 para atravesar la puerta normalmente
      !                    1 para atravesar la puerta pero impedir
      !                    que se imprima el texto de
      !                    "marchar/llegar"
      !                    0 para impedir al PNJ que use esa puerta
      if (j provides pnj_abrir) {
        CapturarSalida();
        mensaje = j.pnj_abrir(amover);
        FinCapturarSalida();
        
        if (mensaje == false) {
          RazonErrorPNJ = PNJ_PUERTA_BLOQUEADA;
!          amover.pnj_bloqueado();
          #ifdef DEBUG;
          if (parser_trace > 1)
            print "[MoverPNJDir bloqueado: ", (the) j, "'s pnj_abrir retorn� falso]^";
          #endif;
          fin = true;
!          rfalse;
        }
      } else if (j hasnt open) {
        RazonErrorPNJ = PNJ_PUERTA_CERRADA;
!        amover.pnj_bloqueado();
        #ifdef DEBUG;
        if (parser_trace > 1)
          print "[MoverPNJDir bloqueado: ", (the) j, " est� cerrad", (o)j, " y no tiene pnj_abrir]^";
        #endif;
        fin = true;
!        rfalse;
      }
    }

  aux1 = action; aux2 = noun; aux3 = second;
  action = ##Go; actor = amover; noun = i; second = direccion;
  r = RutinasAntesPNJ();                  ! Rutinas antesPNJ del actor y la localidad de destino

  if (r) {
    RazonErrorPNJ = PNJ_IMPIDE_ANTES;
    action = aux1;
    noun = aux2;
    second = aux3;
    rfalse;    
  }

  if (r == false) {
    ! Rutinas antesPNJ de la localidad de origen
    if (p provides antesPNJ) {
  	  CapturarSalida();
	    r = PrintOrRun(p, antesPNJ);
	    FinCapturarSalida();
	  
  	  if (longitudcaptura > 0)
        if (SeVen(actor, player))
      		MostrarSalidaCapturada();
    		
	    if (r) {
	      RazonErrorPNJ = PNJ_IMPIDE_ANTES;
        action = aux1;
        noun = aux2;
        second = aux3;
	      rfalse;
	    }
    }
  }

  if (r == false) {
    if (fin) {
!  	  if (longitudcaptura > 0)
!        if (SeVen(actor, jugador))
!      		MostrarSalidaCapturada();
      rfalse;
    }
    
    MoverPNJ(amover, i, ##Go, direccion);
    noun = p;
    
    if (RutinasDespuesPNJ() == false) {
      ! Mensaje de �xito  
      if (p == location && mensaje == 2) {
        if (ZRegion(self.marcha) == 3)  ! Imprimir el texto
          print "^", (The) self, " ", (string) self.marcha, " ", (DirDada) direccion, ".^";
        else
          self.marcha(direccion);
      }
    
      if (parent(self) == location && mensaje == 2) {
        direccion = NULL;
    
        objectloop (i in compass)
          if (ConduceA(i, location, CAMINO_CUALQUIERA) == p)
            direccion = i;
	
       	if (ZRegion(self.llega) == 3) {
          print "^", (The) self, " ", (string) self.llega;
          if (direccion ~= NULL)
            print " desde ", (the) direccion;
          print ".^";
        } else
          self.llega(direccion);
      }
    }
      
    if (self provides accion_despues)
      self.accion_despues();

    action = aux1;
    noun = aux2;
    second = aux3;
    rtrue;
  }
    
  action = aux1;
  noun = aux2;
  second = aux3;
  rfalse;
];

