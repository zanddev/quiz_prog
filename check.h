/* Controlla le macro ESAME e SLIDE */
#ifdef ESAME
	#define defESAME 1
#else
	#define defESAME 0
#endif

#ifdef SLIDE
	#define defSLIDE 1
#else
	#define defSLIDE 0
#endif

#if ((defESAME + defSLIDE) != 2)
	#define ERRORE 3
#elif ((ESAME + SLIDE) != 1)
	#define ERRORE 3
#else
	#if ESAME
		#ifndef NUM_ESAME
			#define ERRORE 4
		#endif
	#elif SLIDE
		#ifndef NUM_SLIDE
			#define ERRORE 4
		#endif
	#else
		#ifndef ES
			#define ERRORE 5
		#endif
	#endif
#endif

#undef defESAME
#undef defSLIDE

#if !ERRORE
	/* Controlla le macro NO_ESAME e NO_SLIDE */
	#if ESAME
		#ifdef NO_ESAME
			#define ERRORE 1
		#endif
	#elif SLIDE
		#ifdef NO_SLIDE
			#define ERRORE 1
		#endif
	#endif
#endif
