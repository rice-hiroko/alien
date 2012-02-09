
// Listas SPA y ENG, con las equivalencias informATE/Inform y otras palabras muy usadas.
// Tips: Los elementos mas comunes(como if, print, else, etc) van primero, asi el tiempo de 
//  busqueda es minimo.
// Para el pasaje inform-->informATE tener en cuenta las ReleaseNote: se usa discriminacion por posicionado
//   en la lista ('noun' y esas cosas).


// LA LISTA MATRIZ ESTA EN 'Lista identificadores.xls'

char *listaSPA [] = {"self",
"if",
"print",
"with",
"else",
"descripcion",
"has",
"jugador",
"localizacion",
"general",
"hasnt",
"move",
"to",
"nombre",
"_nombre_",
"rtrue",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"G_FEMENINO",
"in",
"Object",
"Limbo",
"give",
"Dar",
"antes",
"G_PLURAL",
"otro",
"class",
"noun",
"uno",
"ofclass",
"femenino",
"femenina",
"return",
"G_MASCULINO",
"al_n",
"adjetivos",
"visitado",
"visitada",
"describir",
"oculto",
"oculta",
"JugadorA",
"al_s",
"nombre_m",
"Examinar",
"Include",
"style",
"al_e",
"parent",
"al_o",
"nombre_f",
"escenario",
"Constant",
"masculino",
"luz",
"Verb",
"genero",
"style",
"nombreplural",
"banderafin",
"private",
"abierto",
"abierta",
"nombre_corto",
"_El",
"el",
"nombre_mp",
"_el",
"reaccionar_antes",
"held",
"notin",
"bold",
"rfalse",
"roman",
"despues",
"Extend",
"nombre_fp",
"abajo",
"abrible",
"Abrir",
"AbrirSub",
"accion",
"accion_invertida",
"accion_parser",
"accion_que_seria",
"accion_recibir",
"Acciones",
"accionm",
"ActivarAcciones",
"ActivarAccionesSub",
"ActivarComandos",
"ActivarComandosSub",
"ActivarNotificacion",
"ActivarNotificacionSub",
"ActivarRelojes",
"ActivarRelojesSub",
"ActivarRutinas",
"ActivarRutinasSub",
"ActivarTranscripcion",
"ActivarTranscripcionSub",
"ActivarTraza",
"ActivarTrazaSub",
"actor",
"ActualizarEstatus",
"ActualizarPronombre",
"adentro",
"afuera",
"Agitar",
"AgitarSub",
"AjustarLuz",
"al_ne",
"al_no",
"al_se",
"al_so",
"AlAlcance",
"Alcance",
"AlcanceSub",
"amodo_noposeido",
"AnalizarToken",
"ancho_elemento",
"AniadirMulti",
"anidacion_menu",
"ANIMA_PE",
"animado",
"AnotarLlegada",
"AnotarObjetosObtenidos",
"AntepasadoComun",
"AntesDelParsing",
"ANULAR1__WD",
"ANULAR2__WD",
"ANULAR3__WD",
"Anuncio",
"APAGADO_BIT",
"Apagar",
"ApagarSub",
"ArrancarDaemon",
"ArrancarReloj",
"arriba",
"articulo",
"articulos",
"Atacar",
"AtacarSub",
"Atar",
"AtarSub",
"ATASCADO_PE",
"ausente",
"aviso_avanzar",
"bandera_debug",
"bandera_demasiados",
"bandera_deshacer",
"bandera_guapo",
"bandera_imprime_jugador",
"bandera_paa",
"bandera_puesto_en",
"banderaluz",
"banderamulti",
"banderas_dicc_nombre",
"banderaux",
"BANDERAUX_BIT",
"Beber",
"BeberSub",
"Besar",
"BesarSub",
"BorrarDescriptores",
"BREVE_BIT",
"brujula",
"BucleAlcance",
"buffer",
"buffer2",
"buffer3",
"BuscarEn",
"BuscarEnAlcance",
"BuscarEnDiccionario",
"BuscarEnSub",
"cada_turno",
"CadenaDePreposiciones",
"CambiarDefecto",
"CambiarJugador",
"CambiosOffSub",
"CambiosOnSub",
"CaminarAOscuras",
"Cantar",
"CantarSub",
"cantidad",
"capacidad",
"caso_nombre_corto",
"CasosLenguaje",
"CDefArt",
"Cerrar",
"CerrarSub",
"cerrojo",
"cerrojoechado",
"child",
"children",
"codigo_razon",
"CODIGO_REPARSE",
"Coger",
"CogerSub",
"Columpiar",
"ColumpiarSub",
"coma",
"Comer",
"ComerSub",
"comestible",
"CompararSinSigno",
"Comprar",
"ComprarSub",
"con_llave",
"conmutable",
"Conseguido",
"Consultar",
"consultar_desde",
"consultar_num_palabras",
"ConsultarSub",
"contadorp",
"contadorp2",
"ContieneIndirectamente",
"CopiarBuffer",
"Cortar",
"CortarSub",
"Crear__IN",
"Crear__IR",
"Curiosidades",
"CURIOSIDADES__WD",
"daemon",
"DarSub",
"dat1",
"dat2",
"DE1__WD",
"DE2__WD",
"DE3__WD",
"DE4__WD",
"DeboBajarRecursivo",
"DEBUG",
"DecirQueHaySobre",
"deducedesde",
"DefArt",
"DEFINIDO_BIT",
"DEFINIDO_PK",
"Dejar",
"DejarSalir",
"DejarSalirSub",
"DejarSub",
"DentroDelAlcance",
"DentroDelAlcance_O",
"DepurarAccion",
"DepurarAtributo",
"DepurarLineaGramatica",
"DepurarParametro",
"DepurarToken",
"DesactivarAcciones",
"DesactivarAccionesSub",
"DesactivarComandos",
"DesactivarComandosSub",
"DesactivarNotificacion",
"DesactivarNotificacionSub",
"DesactivarRelojes",
"DesactivarRelojesSub",
"DesactivarRutinas",
"DesactivarRutinasSub",
"DesactivarTranscripcion",
"DesactivarTranscripcionSub",
"DesactivarTraza",
"DesactivarTrazaSub",
"descripcion_dentro",
"Descriptores",
"DesempaquetarLineaGramatica",
"DespertarOtro",
"DespertarOtroSub",
"Despertarse",
"DespertarseSub",
"DESPUES1__WD",
"DESPUES2__WD",
"DESPUES3__WD",
"Desvestir",
"DesvestirSub",
"DibujarLineaEstado",
"DirDicc__Num",
"direcc_puerta",
"DireccionBrujula",
"DireccionDePalabra",
"DoMenu",
"DominioNombre",
"Dormir",
"DormirSub",
"EcharCerrojo",
"EcharCerrojoSub",
"eepa_desde",
"eepa_guardado",
"EfectuarAccionesAlcance",
"EjecutarRutinas",
"EjecutarVida",
"ELCUAL__TX",
"ElegirObjetos",
"elemento_menu",
"ElementoCualquiera",
"ElMismo",
"ElMismoSub",
"elsiguiente",
"Empujar",
"EmpujarDir",
"EmpujarDirSub",
"EmpujarSub",
"encajado_desde",
"encajan_clases",
"encajan_puntos",
"Encender",
"EncenderSub",
"encendido",
"encendida",
"ENCENDIDO_BIT",
"EnglishNumber",
"enlazlpa",
"enlazlv",
"entrable",
"Entrar",
"EntrarSub",
"Eparser",
"Eparserm",
"error_alcance",
"ErrorDeEjecucion",
"ErrorParser",
"ESASC__TX",
"ESCENARIO_PE",
"EscribeAntesElemento",
"EscribeListaR",
"EscribeTrasElemento",
"EscribirListaDesde",
"Escuchar",
"EscucharSub",
"ESO__TX",
"ESO_BIT",
"Espanol",
"ESPANOL_BIT",
"Esperar",
"EsperarSub",
"esta_en",
"estadio_alcance",
"estatico",
"estatica",
"estilo_ac",
"estilo_inventario",
"etapa_inventario",
"ExaminarSub",
"Excavar",
"ExcavarSub",
"EXCEPTO_PE",
"false",
"Fijar",
"FijarPronombre",
"FijarSub",
"FiltrarMulti",
"filtro_token",
"FiltroUsuario",
"Finalizar",
"FinalizarSub",
"Frotar",
"FrotarSub",
"Gesticular",
"GesticularSub",
"Girar",
"GirarSub",
"gramatica",
"Gramatica",
"gramatica_normal_tras",
"Grammar__Version",
"hablable",
"Hablar",
"HablarSub",
"HacerEncaje",
"HalladoPlural",
"HalladoPluralSub",
"HASTAQUI_PE",
"HAY__TX",
"HAY_BIT",
"HAY_CURIOSIDADES",
"HAY_TAREAS",
"HAY2__TX",
"HayLuz",
"HAYP__TX",
"HAYP2__TX",
"HAYPOCOS_PE",
"herobj",
"himobj",
"Historia",
"NO_PUNTUACION",
"HORA__TX",
"hora_freq",
"hora_incr",
"Identicos",
"IdiomaAInformes",
"IdiomaArticulos",
"IdiomaContraccion",
"IdiomaContracciones",
"IdiomaDescriptores",
"IdiomaDirecciones",
"IdiomaEsVerbo",
"IdiomaGeneroAnimado",
"IdiomaGeneroInanimado",
"IdiomaGNAsAArticulos",
"IdiomaHoraDelDia",
"IdiomaImprimir-Comando",
"IdiomaImprimirNombreCorto",
"IdiomaNumero",
"IdiomaPronames",
"IdiomaVerbo",
"ImpNumAlin",
"Imprimir__Espacios",
"ImprimirComando",
"ImprimirOEjecutar",
"ImprimirRango",
"ImprimirTareas",
"ImprimirVerbo",
"indef_casos",
"indef_esperado",
"indef_numero_en",
"indef_posibambig",
"indef_propietario",
"indef_suponer_p",
"indef_tipo",
"IndefArt",
"indentacion_eld",
"INDENTAR_BIT",
"indirect",
"INFIX",
"infixe",
"INFOPARCIAL_BIT",
"INFOTOTAL_BIT",
"inicial",
"Inicializar",
"IntentarCogerObjeto",
"IntentarEncajarObjeto",
"IntentarNumero",
"InterpretarNombre",
"InterpretarNumero",
"InterpretarToken",
"interprete_estandar",
"Inv",
"InvAlto",
"InvAltoSub",
"InvAncho",
"InvAnchoSub",
"InvSub",
"Ir",
"IrAmbiguo",
"IrAmbiguoSub",
"IrDonde",
"IrDondeSub",
"IrSub",
"itobj",
"JUGADAS__TX",
"jugar",
"just_undone",
"KKFINAL_PE",
"la_hora",
"Lanzar",
"LanzarSub",
"laoscuridad",
"lastdesc",
"LeerComandos",
"LeerComandosSub",
"LibreriaInform",
"linea_tdatos",
"linea_tipot",
"linea_token",
"lineaEstado1",
"lineaEstado2",
"lista_encajan",
"ListaMiscelanea",
"ListaMiscelaneaSub",
"listando_junto",
"listar_juntos",
"ListarIguales",
"listarse",
"Llenar",
"LlenarSub",
"LLEVAR_MAX",
"Local",
"localizacion_actor",
"localizacion_real",
"long_de_noun",
"long_encajado",
"LongitudDePalabra",
"los_relojes",
"LoSiento",
"LoSientoSub",
"LowKey_Menu",
"Lugares",
"Lugares1Sub",
"LugaresSub",
"LugarNuevo",
"M___L",
"M__L",
"Main",
"mant_np",
"MasAlla",
"MAX_RELOJES",
"mejor_etype",
"MejorIntuicion",
"MensajeMuerte",
"MensajesLibreria",
"meta",
"metaclass",
"Meter",
"Meterse",
"MeterseSub",
"MeterSub",
"MI_BIT",
"Mirar",
"MirarDebajo",
"MirarDebajoSub",
"MirarSub",
"Miscelanea",
"MiscelaneaSub",
"ml_n",
"ml_o",
"MLIdioma",
"MMULTI_PE",
"modo_indef",
"modo_mantenido",
"modo_multi",
"modo_noposeido",
"modo_notificar",
"modo_transcripcion",
"ModoM1",
"ModoM1Sub",
"ModoM2",
"ModoM2Sub",
"ModoM3",
"ModoM3Sub",
"modomirar",
"Mostrar",
"MostrarObjeto",
"MostrarObjetoSub",
"MostrarSub",
"MostrarVerbo",
"MostrarVerboSub",
"MoverJugador",
"MoverObjetosFlotantes",
"MoverPalabra",
"movido",
"movida",
"multi_contexto",
"multi_esperado",
"multi_hallado",
"MULTI_PE",
"MUYPOCO_PE",
"NADA__TX",
"NADA_PE",
"Nadar",
"NadarSub",
"neutro",
"NivelTraza",
"NivelTrazaSub",
"No",
"no_deducir",
"no_interpretar",
"NO_LUGARES",
"no_poseido",
"no_puedes_ir",
"NO1__WD",
"NO2__WD",
"NO3__WD",
"NoComprendido",
"NoComprendidoSub",
"NoLoVeo",
"nombre_corto_indef",
"nombre_elemento",
"NOPUEDESIR__TX",
"NoSoportaAlJugador",
"NoSub",
"nothing",
"NOTIENES_PE",
"NotificarLaPuntuacion",
"NOVEO_PE",
"np",
"nsns",
"NUEVALINEA_BIT",
"NULL",
"Num__DirDicc",
"num_palabras",
"numero",
"numero_de_clases",
"numero_de_encajados",
"numero_especial",
"numero_especial1",
"numero_especial2",
"numero_interpretado",
"NUMERO_PE",
"NUMERO_TAREAS",
"NumSerieLib",
"O__TX",
"obj_abajo",
"obj_adentro",
"obj_afuera",
"obj_arriba",
"obj_e",
"obj_n",
"obj_ne",
"obj_no",
"obj_o",
"obj_s",
"obj_se",
"obj_so",
"objeto__pronombre",
"objeto_multiple",
"objeto_pronombre",
"objeto_raiz",
"OBJETO_SACO",
"ObjetoEnAlcancePorAlgo",
"ObjetoEsIntocable",
"Objetos",
"Objetos1Sub",
"ObjetosSub",
"objjugador",
"ObtenerGenero",
"ObtenerGNADeObjeto",
"OCULTAR_BIT",
"old_herobj",
"old_himobj",
"old_itobj",
"Oler",
"OlerSub",
"OOPS1__WD",
"OOPS2__WD",
"OOPS3__WD",
"Orden",
"OrdenarJuntos",
"OrdenarLista",
"ordenes",
"OrdenSub",
"OSCURIDAD__TX",
"OTRAVEZ1__WD",
"OTRAVEZ2__WD",
"OTRAVEZ3__WD",
"OTRO_BIT",
"OTRO1__WD",
"OTRO2__WD",
"OTRO3__WD",
"paa_tfl",
"palabra__pronombre",
"palabra_coma",
"palabra_especial",
"palabra_pronombre",
"palabra_verbo",
"palabra_verbonum",
"PalabraEnPropiedad",
"PalabraNumero",
"PalabraSustantivo",
"parametros",
"parametros_deseados",
"PararDaemon",
"PararReloj",
"parse",
"parse_nombre",
"parse2",
"Parser__parse",
"parser_dos",
"parser_inflexion",
"parser_trace",
"parser_uno",
"ParserInform",
"PasaElTiempo",
"patron",
"PATRON_NULO",
"patron2",
"Pedir",
"PedirSub",
"Pensar",
"PensarSub",
"permitir_plurales",
"PermitirEmpujarDir",
"plural",
"PLURAL_BIT",
"PonerA",
"PonerAlAlcance",
"PonerArticuloDelante",
"PonerASub",
"PonerLaHora",
"PonerSobre",
"PonerSobreSub",
"POSESIVO_PK",
"Predecible",
"PredecibleSub",
"PREGUNTAAMBITO_PE",
"Preguntar",
"PreguntarSub",
"prenda",
"prepdeducida",
"PREVIOYO__TX",
"Print__PName",
"Print_ScL",
"PrintShortName",
"Probar",
"ProbarSub",
"Prompt",
"PromptSub",
"PRONOM_PE",
"Pronombres",
"PRONOMBRES_AMANO",
"PronombresSub",
"propio",
"proxmejor_etype",
"PruebaDeAlcance",
"PSN__",
"puerta",
"puerta_a",
"puesto",
"puesta",
"punt_anterior",
"puntos_cosas",
"PUNTOS_LUGAR",
"PUNTOS_OBJETO",
"puntos_sitios",
"Puntuacion",
"puntuacion",
"PUNTUACION__TX",
"PUNTUACION_MAX",
"puntuacion_tareas",
"PUNTUACION1__WD",
"PUNTUACION2__WD",
"PuntuacionListaEncajes",
"PuntuacionLlegada",
"PuntuacionSub",
"PuntuacionTotal",
"PuntuacionTotalSub",
"QKEY1__KY",
"QKEY1__TX",
"QKEY2__KY",
"QKEY2__TX",
"Quemar",
"QuemarSub",
"QUIEN__TX",
"QuitarCerrojo",
"QuitarCerrojoSub",
"R_Process",
"random",
"razon_alcance",
"RAZON_BUCLEALCANCE",
"RAZON_CADA_TURNO",
"RAZON_HABLAR",
"RAZON_PARSING",
"RAZON_REACCIONAR_ANTES",
"RAZON_REACCIONAR_DESPUES",
"RAZON_TESTALCANCE",
"reaccionar_despues",
"Recibir",
"RecibirLanzamiento",
"RecibirLanzamientoSub",
"RecibirSub",
"recipiente",
"RECUPERAR__WD",
"RECURSIVO_BIT",
"regla_coger_todo",
"Reiniciar",
"REINICIAR__WD",
"ReiniciarPalabrasVagas",
"ReiniciarSub",
"Release",
"relojes_activos",
"Responder",
"ResponderSub",
"Restaurar",
"RestaurarSub",
"resultados_guardados",
"Retorcer",
"RetorcerSub",
"RevisarMulti",
"RevisionLib",
"Rezar",
"RezarSub",
"RKEY__TX",
"RPG_CRIATURA",
"RPG_FALLO",
"RPG_MULTI",
"RPG_MULTIDENTRO",
"RPG_MULTIEXCEPTO",
"RPG_MULTIPOSEIDO",
"RPG_NOMBRE",
"RPG_NUMERO",
"RPG_POSEIDO",
"RPG_PREPOSICION",
"RPG_REPARSE",
"RutinaMirar",
"RutinaPostJuego",
"RutinaPreJuego",
"RutinasAntes",
"RutinasDespues",
"Sacar",
"SacarSub",
"Salir",
"Salirse",
"SalirseSub",
"SalirSub",
"Saltar",
"SaltarSobre",
"SaltarSobreSub",
"SaltarSub",
"Salvar",
"SalvarSub",
"SALVO1__WD",
"SALVO2__WD",
"SALVO3__WD",
"secuencia_fin_turno",
"SeRefiere",
"Serial",
"SeVeATraves",
"Si",
"si_abierto",
"si_abierta",
"si_apagado",
"si_apagada",
"si_cerrado",
"si_cerrada",
"si_encendido",
"si_encendida",
"SI1__WD",
"SI2__WD",
"SI3__WD",
"sibling",
"SIEMPRE_BIT",
"SiguienteElemento",
"SiguientePalabra",
"SiguientePalabraParar",
"SIN_DIRECCIONES",
"SINARTICULO_BIT",
"SiONo",
"SiSub",
"Soplar",
"SoplarSub",
"soporte",
"Soso",
"SosoSub",
"STRICT_MODE",
"suma_al_alcance",
"SumarAlAlcance",
"SustraerMulti",
"Tacos",
"TacosSub",
"TAMANIO_LISTA_ENCAJAN",
"tamanio_listando",
"tarea_hecha",
"tate_callao",
"tdatos_encontrado",
"techo_de_visibilidad",
"TECLAANT__TX",
"TECLAANT1__KY",
"TECLAANT2__KY",
"Teclado",
"TECLASIG__TX",
"TECLASIG1__KY",
"TECLASIG2__KY",
"TERMINAR1__WD",
"TERMINAR2__WD",
"TestCriatura",
"tiempo_agotado",
"tiempo_restante",
"TieneFuenteDeLuz",
"tipoerror",
"Tirar",
"TirarSub",
"Titular",
"Tocar",
"TocarSub",
"TODO1__WD",
"TODO2__WD",
"TODO3__WD",
"TODO4__WD",
"TODO5__WD",
"token_alcance",
"TOKEN_CRIATURA",
"TOKEN_ESPECIAL",
"TOKEN_FINAL",
"TOKEN_MULTI",
"TOKEN_MULTIDENTRO",
"TOKEN_MULTIEXCEPTO",
"TOKEN_MULTIPOSEIDO",
"TOKEN_NOMBRE",
"TOKEN_NUMERO",
"TOKEN_POSEIDO",
"TOKEN_TEMA",
"Tokenise__",
"TopeAlcanzable",
"Transferir",
"TransferirSub",
"transparente",
"TrasElPrompt",
"TrazarAccion",
"Trepar",
"TreparSub",
"true",
"TT_ALCANCE",
"TT_ELEMENTAL",
"TT_FILTRO_ATRIB",
"TT_FILTRO_RUTINA",
"TT_ILEGAL",
"TT_PREPOSICION",
"TT_RPG",
"ttipo_encontrado",
"TUMISMO__TX",
"turnos",
"ultimadesc",
"un",
"UnaDireccion",
"Vaciar",
"VaciarEn",
"VaciarEnSub",
"VaciarSub",
"valepuntos",
"valor_lj",
"ValorDelPronombre",
"ValorOEjecutar",
"VERBO_PE",
"VerboDesconocido",
"Verificar",
"VerificarSub",
"VersionIdioma",
"Vestir",
"VestirSub",
"vida",
"x_cuenta_ambito",
"XArbol",
"XArbolSub",
"xcommsdir",
"XCompruebaMover",
"XIrA",
"XIrASub",
"XMover",
"XMoverSub",
"XObj",
"XRobar",
"XRobarSub",
"Y__TX",
"Y1__WD",
"Y2__WD",
"Y3__WD",
"YANOPRON_PE",
"YO1__WD",
"YO2__WD",
"YO3__WD",
"ZRegion",
"DEATH_MENTION_ANULAR",
""};

char *listaENG [] ={"self",
"if",
"print",
"with",
"else",
"description",
"has",
"player",
"location",
"general",
"hasnt",
"move",
"to",
"name",
"name",
"rtrue",
"0",
"1",
"2",
"3",
"4",
"5",
"6",
"7",
"8",
"9",
"G_FEMENINO",
"in",
"Object",
"Limbo",
"give",
"Give",
"before",
"G_PLURAL",
"second",
"class",
"noun",
"noun",
"ofclass",
"female",
"female",
"return",
"G_MASCULINO",
"n_to",
"adjectives",
"visited",
"visited",
"describe",
"concealed",
"concealed",
"PlayerTo",
"s_to",
"name_m",
"Examine",
"Include",
"style",
"e_to",
"parent",
"w_to",
"name_f",
"scenery",
"Constant",
"male",
"light",
"Verb",
"gender",
"style",
"pluralname",
"deadflag",
"private",
"open",
"open",
"short_name",
"The",
"the",
"name_mp",
"the",
"react_before",
"held",
"notin",
"bold",
"rfalse",
"roman",
"after",
"Extend",
"name_fp",
"d_to",
"openable",
"Open",
"OpenSub",
"action",
"action_reversed",
"parser_action",
"action_to_be",
"receive_action",
"Verblib",
"verblibm",
"ActionsOn",
"ActionsOnSub",
"CommandsOn",
"CommandsOnSub",
"NotifyOn",
"NotifyOnSub",
"TimersOn",
"TimersOnSub",
"RoutinesOn",
"RoutinesOnSub",
"ScriptOn",
"ScriptOnSub",
"TraceOn",
"TraceOnSub",
"actor",
"DisplayStatus",
"PronounNotice",
"in_to",
"out_to",
"Wave",
"WaveSub",
"AdjustLight",
"ne_to",
"nw_to",
"se_to",
"sw_to",
"InScope",
"Scope",
"ScopeSub",
"onotheld_mode",
"AnalyseToken",
"item_width",
"MultiAdd",
"menu_nesting",
"ANIMA_PE",
"animate",
"NoteArrival",
"NoteObjectAcquisitions",
"CommonAncestor",
"BeforeParsing",
"UNDO1__WD",
"UNDO2__WD",
"UNDO3__WD",
"Banner",
"UNLIT_BIT",
"SwitchOff",
"SwitchOffSub",
"StartDaemon",
"StartTimer",
"u_to",
"article",
"articles",
"Attack",
"AttackSub",
"Tie",
"TieSub",
"STUCK_PE",
"absent",
"advance_warning",
"debug_flag",
"toomany_flag",
"undo_flag",
"pretty_flag",
"print_player_flag",
"ats_flag",
"placed_in_flag",
"lightflag",
"multiflag",
"dict_flags_of_noun",
"workflag",
"WORKFLAG_BIT",
"Drink",
"DrinkSub",
"Kiss",
"KissSub",
"ResetDescriptors",
"TERSE_BIT",
"compass",
"LoopOverScope",
"buffer",
"buffer2",
"buffer3",
"Search",
"SearchScope",
"DictionaryLookup",
"SearchSub",
"each_turn",
"PrepositionChain",
"ChangeDefault",
"ChangePlayer",
"ChangesOffSub",
"ChangesOnSub",
"DarkToDark",
"Sing",
"SingSub",
"number",
"capacity",
"short_name_case",
"LanguageCases",
"CDefArt",
"Close",
"CloseSub",
"lockable",
"locked",
"child",
"children",
"reason_code",
"REPARSE_CODE",
"Take",
"TakeSub",
"Swing",
"SwingSub",
"comma",
"Eat",
"EatSub",
"edible",
"UnsignedCompare",
"Buy",
"BuySub",
"with_key",
"switchable",
"Achieved",
"Consult",
"consult_from",
"consult_words",
"ConsultSub",
"pcount",
"pcount2",
"IndirectlyContains",
"CopyBuffer",
"Cut",
"CutSub",
"Make__PN",
"Make__PR",
"Amusing",
"AMUSING__WD",
"daemon",
"GiveSub",
"inp1",
"inp2",
"OF1__WD",
"OF2__WD",
"OF3__WD",
"OF4__WD",
"WillRecurs",
"DEBUG",
"SayWhatsOn",
"inferfrom",
"DefArt",
"DEFART_BIT",
"DEFART_PK",
"Drop",
"LetGo",
"LetGoSub",
"DropSub",
"ScopeWithin",
"ScopeWithin_O",
"DebugAction",
"DebugAttribute",
"DebugGrammarLine",
"DebugParameter",
"DebugToken",
"ActionsOff",
"ActionsOffSub",
"CommandsOff",
"CommandsOffSub",
"NotifyOff",
"NotifyOffSub",
"TimersOff",
"TimersOffSub",
"RoutinesOff",
"RoutinesOffSub",
"ScriptOff",
"ScriptOffSub",
"TraceOff",
"TraceOffSub",
"inside_description",
"Descriptors",
"UnpackGrammarLine",
"WakeOther",
"WakeOtherSub",
"Wake",
"WakeSub",
"THEN1__WD",
"THEN2__WD",
"THEN3__WD",
"Disrobe",
"DisrobeSub",
"DrawStatusLine",
"Dword__No",
"door_dir",
"CompassDirection",
"WordAddress",
"DoMenu",
"NounDomain",
"Sleep",
"SleepSub",
"Lock",
"LockSub",
"oops_from",
"saved_oops",
"DoScopeAction",
"RunRoutines",
"RunLife",
"WHICH__TX",
"ChooseObjects",
"menu_item",
"RandomEntry",
"TheSame",
"TheSameSub",
"lookahead",
"Push",
"PushDir",
"PushDirSub",
"PushSub",
"match_from",
"match_classes",
"match_scores",
"SwitchOn",
"SwitchOnSub",
"on",
"on",
"LIT_BIT",
"EnglishNumber",
"linklpa",
"linklv",
"enterable",
"Enter",
"EnterSub",
"Parser",
"parserm",
"scope_error",
"RunTimeError",
"ParserError",
"THOSET__TX",
"SCENERY_PE",
"WriteBeforeEntry",
"WriteListR",
"WriteAfterEntry",
"WriteListFrom",
"Listen",
"ListenSub",
"THAT__TX",
"THAT_BIT",
"Spanish",
"ENGLISH_BIT",
"Wait",
"WaitSub",
"found_in",
"scope_stage",
"static",
"static",
"c_style",
"inventory_style",
"inventory_stage",
"ExamineSub",
"Dig",
"DigSub",
"EXCEPT_PE",
"false",
"Set",
"SetPronoun",
"SetSub",
"MultiFilter",
"token_filter",
"UserFilter",
"Quit",
"QuitSub",
"Rub",
"RubSub",
"WaveHands",
"WaveHandsSub",
"Turn",
"TurnSub",
"grammar",
"SpanishG",
"usual_grammar_after",
"Grammar__Version",
"talkable",
"Tell",
"TellSub",
"MakeMatch",
"PluralFound",
"PluralFoundSub",
"UPTO_PE",
"IS__TX",
"ISARE_BIT",
"AMUSING_PROVIDED",
"TASKS_PROVIDED",
"IS2__TX",
"OffersLight",
"ARE__TX",
"ARE2__TX",
"TOOFEW_PE",
"herobj",
"himobj",
"Story",
"NO_SCORE",
"TIME__TX",
"time_rate",
"time_step",
"Identical",
"LanguageToInformese",
"LanguageArticles",
"LanguageContraction",
"LanguageContractionForms",
"LanguageDescriptors",
"LanguageDirection",
"LanguageIsVerb",
"LanguageAnimateGender",
"LanguageInanimateGender",
"LanguageGNAsToArticles",
"LanguageTimeOfDay",
"LanguagePrintCommand",
"LanguagePrintShortName",
"LanguageNumber",
"LanguagePronouns",
"LanguageVerb",
"PANum",
"Print__Spaces",
"PrintCommand",
"PrintOrRun",
"PrintRank",
"PrintTaskName",
"PrintVerb",
"indef_cases",
"indef_wanted",
"indef_nspec_at",
"indef_possambig",
"indef_owner",
"indef_guess_p",
"indef_type",
"InDefArt",
"wlf_indent",
"INDENT_BIT",
"indirect",
"INFIX",
"infix",
"PARTINV_BIT",
"FULLINV_BIT",
"initial",
"Initialise",
"AttemptToTakeObject",
"TryGivenObject",
"TryNumber",
"ParseNoun",
"ParseNumber",
"ParseToken",
"standard_interpreter",
"Inv",
"InvTall",
"InvTallSub",
"InvWide",
"InvWideSub",
"InvSub",
"Go",
"VagueGo",
"VagueGoSub",
"Gonear",
"GonearSub",
"GoSub",
"itobj",
"MOVES__TX",
"play",
"just_undone",
"JUNKAFTER_PE",
"the_time",
"ThrowAt",
"ThrowAtSub",
"thedark",
"lastdesc",
"CommandsRead",
"CommandsReadSub",
"InformLibrary",
"line_tdata",
"line_ttype",
"line_token",
"sline1",
"sline2",
"match_list",
"ListMiscellany",
"ListMiscellanySub",
"listing_together",
"list_together",
"ListEqual",
"invent",
"Fill",
"FillSub",
"MAX_CARRIED",
"Locale",
"actors_location",
"real_location",
"length_of_noun",
"match_length",
"WordLength",
"the_timers",
"Sorry",
"SorrySub",
"LowKey_Menu",
"Places",
"Places1Sub",
"PlacesSub",
"NewRoom",
"L___M",
"L__M",
"Main",
"hb_wn",
"AfterLife",
"MAX_TIMERS",
"best_etype",
"BestGuess",
"DeathMessage",
"LibraryMessages",
"meta",
"metaclass",
"Insert",
"GoIn",
"GoInSub",
"InsertSub",
"MY_BIT",
"Look",
"LookUnder",
"LookUnderSub",
"LookSub",
"Miscellany",
"MiscellanySub",
"lm_n",
"lm_o",
"LanguageLM",
"MMULTI_PE",
"indef_mode",
"held_back_mode",
"multi_mode",
"notheld_mode",
"notify_mode",
"transcript_mode",
"LMode1",
"LMode1Sub",
"LMode2",
"LMode2Sub",
"LMode3",
"LMode3Sub",
"lookmode",
"Show",
"Showobj",
"ShowobjSub",
"ShowSub",
"Showverb",
"ShowverbSub",
"MovePlayer",
"MoveFloatingObjects",
"MoveWord",
"moved",
"moved",
"multi_context",
"multi_wanted",
"multi_had",
"MULTI_PE",
"TOOLIT_PE",
"NOTHING__TX",
"NOTHING_PE",
"Swim",
"SwimSub",
"neuter",
"Tracelevel",
"TracelevelSub",
"No",
"dont_infer",
"no_parse",
"NO_PLACES",
"not_holding",
"cant_go",
"NO1__WD",
"NO2__WD",
"NO3__WD",
"NotUnderstood",
"NotUnderstoodSub",
"CantSee",
"short_name_indef",
"item_name",
"CANTGO__TX",
"NotSupportingThePlayer",
"NoSub",
"nothing",
"NOTHELD_PE",
"NotifyTheScore",
"CANTSEE_PE",
"wn",
"nsns",
"NEWLINE_BIT",
"NULL",
"No__Dword",
"num_words",
"number",
"number_of_classes",
"number_matched",
"special_number",
"special_number1",
"special_number2",
"parsed_number",
"NUMBER_PE",
"NUMBER_TASKS",
"LibSerial",
"OR__TX",
"d_obj",
"in_obj",
"out_obj",
"u_obj",
"e_obj",
"n_obj",
"ne_obj",
"nw_obj",
"w_obj",
"s_obj",
"se_obj",
"sw_obj",
"pronoun__obj",
"multiple_object",
"pronoun_obj",
"top_object",
"SACK_OBJECT",
"ObjectScopedBySomething",
"ObjectIsUntouchable",
"Objects",
"Objects1Sub",
"ObjectsSub",
"selfobj",
"GetGender",
"GetGNAOfObject",
"CONCEAL_BIT",
"old_herobj",
"old_himobj",
"old_itobj",
"Smell",
"SmellSub",
"OOPS1__WD",
"OOPS2__WD",
"OOPS3__WD",
"Order",
"SortTogether",
"SortOutList",
"orders",
"OrderSub",
"DARKNESS__TX",
"AGAIN1__WD",
"AGAIN2__WD",
"AGAIN3__WD",
"OTHER_BIT",
"OTHER1__WD",
"OTHER2__WD",
"OTHER3__WD",
"ats_hls",
"pronoun__word",
"comma_word",
"special_word",
"pronoun_word",
"verb_word",
"verb_wordnum",
"WordInProperty",
"NumberWord",
"NounWord",
"parameters",
"params_wanted",
"StopDaemon",
"StopTimer",
"parse",
"parse_name",
"parse2",
"Parser__parse",
"parser_two",
"parser_inflection",
"parser_trace",
"parser_one",
"InformParser",
"TimePasses",
"pattern",
"PATTERN_NULL",
"pattern2",
"AskFor",
"AskForSub",
"Think",
"ThinkSub",
"allow_plurals",
"AllowPushDir",
"plural",
"PLURAL_BIT",
"SetTo",
"PlaceInScope",
"PrefaceByArticle",
"SetToSub",
"SetTime",
"PutOn",
"PutOnSub",
"POSSESS_PK",
"Predictable",
"PredictableSub",
"ASKSCOPE_PE",
"Ask",
"AskSub",
"clothing",
"inferword",
"FORMER__TX",
"Print__PName",
"Print_Scl",
"PrintShortName",
"Taste",
"TasteSub",
"Prompt",
"PromptSub",
"VAGUE_PE",
"Pronouns",
"MANUAL_PRONOUNS",
"PronounsSub",
"proper",
"nextbest_etype",
"TestScope",
"PSN__",
"door",
"door_to",
"worn",
"worn",
"last_score",
"things_score",
"ROOM_SCORE",
"OBJECT_SCORE",
"places_score",
"Score",
"score",
"SCORE__TX",
"MAX_SCORE",
"task_scores",
"FULLSCORE1__WD",
"FULLSCORE2__WD",
"ScoreMatchL",
"ScoreArrival",
"ScoreSub",
"FullScore",
"FullScoreSub",
"QKEY1__KY",
"QKEY1__TX",
"QKEY2__KY",
"QKEY2__TX",
"Burn",
"BurnSub",
"WHOM__TX",
"Unlock",
"UnlockSub",
"R_Process",
"random",
"scope_reason",
"LOOPOVERSCOPE_REASON",
"EACH_TURN_REASON",
"TALKING_REASON",
"PARSING_REASON",
"REACT_BEFORE_REASON",
"REACT_AFTER_REASON",
"TESTSCOPE_REASON",
"react_after",
"Receive",
"ThrownAt",
"ThrownAtSub",
"ReceiveSub",
"container",
"RESTORE__WD",
"RECURSE_BIT",
"take_all_rule",
"Restart",
"RESTART__WD",
"ResetVagueWords",
"RestartSub",
"Release",
"active_timers",
"Answer",
"AnswerSub",
"Restore",
"RestoreSub",
"kept_results",
"Squeeze",
"SqueezeSub",
"ReviseMulti",
"LibRelease",
"Pray",
"PraySub",
"RKEY__TX",
"GPR_CREATURE",
"GPR_FAIL",
"GPR_MULTI",
"GPR_MULTIINSIDE",
"GPR_MULTIEXCEPT",
"GPR_MULTIHELD",
"GPR_NOUN",
"GPR_NUMBER",
"GPR_HELD",
"GPR_PREPOSITION",
"GPR_REPARSE",
"LookRoutine",
"GamePostRoutine",
"GamePreRoutine",
"BeforeRoutines",
"AfterRoutines",
"Remove",
"RemoveSub",
"Exit",
"GetOff",
"GetOffSub",
"ExitSub",
"Jump",
"JumpOver",
"JumpOverSub",
"JumpSub",
"Save",
"SaveSub",
"BUT1__WD",
"BUT2__WD",
"BUT3__WD",
"end_turn_sequence",
"Refers",
"Serial",
"IsSeeThrough",
"Yes",
"when_open",
"when_open",
"when_off",
"when_off",
"when_closed",
"when_closed",
"when_on",
"when_on",
"YES1__WD",
"YES2__WD",
"YES3__WD",
"sibling",
"ALWAYS_BIT",
"NextEntry",
"NextWord",
"NextWordStopped",
"WITHOUT_DIRECTIONS",
"NOARTICLE_BIT",
"YesOrNo",
"YesSub",
"Blow",
"BlowSub",
"supporter",
"Mild",
"MildSub",
"STRICT_MODE",
"add_to_scope",
"AddToScope",
"MultiSub",
"Strong",
"StrongSub",
"MATCH_LIST_SIZE",
"listing_size",
"task_done",
"keep_silent",
"found_tdata",
"visibility_ceiling",
"PKEY__TX",
"PKEY1__KY",
"PKEY2__KY",
"Keyboard",
"NKEY__TX",
"NKEY1__KY",
"NKEY2__KY",
"QUIT1__WD",
"QUIT2__WD",
"CreatureTest",
"time_out",
"time_left",
"HasLightSource",
"etype",
"Pull",
"PullSub",
"Headline",
"Touch",
"TouchSub",
"ALL1__WD",
"ALL2__WD",
"ALL3__WD",
"ALL4__WD",
"ALL5__WD",
"scope_token",
"CREATURE_TOKEN",
"SPECIAL_TOKEN",
"ENDIT_TOKEN",
"MULTI_TOKEN",
"MULTIINSIDE_TOKEN",
"MULTIEXCEPT_TOKEN",
"MULTIHELD_TOKEN",
"NOUN_TOKEN",
"NUMBER_TOKEN",
"HELD_TOKEN",
"TOPIC_TOKEN",
"Tokenise__",
"ScopeCeiling",
"Transfer",
"TransferSub",
"transparent",
"AfterPrompt",
"TraceAction",
"Climb",
"ClimbSub",
"true",
"SCOPE_TT",
"ELEMENTARY_TT",
"ATTR_FILTER_TT",
"ROUTINE_FILTER_TT",
"ILLEGAL_TT",
"PREPOSITION_TT",
"GPR_TT",
"found_ttype",
"YOURSELF__TX",
"turns",
"lastdesc",
"a",
"ADirection",
"Empty",
"EmptyT",
"EmptyTSub",
"EmptySub",
"scored",
"lt_value",
"PronounValue",
"ValueOrRun",
"VERB_PE",
"UnknownVerb",
"Verify",
"VerifySub",
"LanguageVersion",
"Wear",
"WearSub",
"life",
"x_scope_count",
"XTree",
"XTreeSub",
"xcommsdir",
"XTestMove",
"Goto",
"GotoSub",
"XAbstract",
"XAbstractSub",
"XObj",
"XPurloin",
"XPurloinSub",
"AND__TX",
"AND1__WD",
"AND2__WD",
"AND3__WD",
"ITGONE_PE",
"ME1__WD",
"ME2__WD",
"ME3__WD",
"ZRegion",
"DEATH_MENTION_UNDO",
""};