/* Modalita' ESAME / SLIDE
 * Scegliere la modalità portando a 1 il valore della relativa macro
*/
#define ESAME 1
#define SLIDE 0

/* NUM_ESAME: numero esame, considerato se in modalita' esame
 * NUM_SLIDE: numero slide quesiti, considerato se in modalita' slide
 * ES:    numero esercizio: in esame num effettivo dell'es, in slide num progressivo
 */
#define NUM_ESAME 43
#define NUM_SLIDE 6
#define ES 8

/* -------------------------------------------------------- */

#if   SLIDE == 1

	#if   NUM_SLIDE == 0
	#elif NUM_SLIDE == 1

	#elif NUM_SLIDE == 2
		#define SLIDE__ISTR_COND
		#define SLIDE__ISTR_ITER

	#elif NUM_SLIDE == 3
		#define SLIDE__FUNZ
		#define SLIDE__FUNZ_RIC

	#elif NUM_SLIDE == 4
		#define SLIDE__TYPE_ENUM
		#define SLIDE__TYPE_STRUCT
		#define SLIDE__TYPE_UNION
		#define SLIDE__TYPEDEF
		#define SLIDE__VISIB_IDENTF

	#elif NUM_SLIDE == 5
		#define SLIDE__ARRAY
		#define SLIDE__STRINGHE

	#elif NUM_SLIDE == 6
		#define SLIDE__PUNTATORI
		#define SLIDE__PUNT_ARRAY
		#define SLIDE__PUNT_PUNT
	#else
			#define NO_SLIDE
	#endif

/***************************************/
#elif ESAME == 1

	#if NUM_ESAME == 0

	#elif NUM_ESAME == 1
			#define ESAME__20_01_2016

	#elif NUM_ESAME == 2
			#define ESAME__01_02_2016

	#elif NUM_ESAME == 3
			#define ESAME__16_02_2016

	#elif NUM_ESAME == 4
			#define ESAME__07_06_2016

	#elif NUM_ESAME == 5
			#define ESAME__04_07_2016

	#elif NUM_ESAME == 6
			#define ESAME__06_09_2016

/***************************************/

	#elif NUM_ESAME == 7
			#define SIMUL__09_01_2017

	#elif NUM_ESAME == 8
			#define ESAME__18_01_2017a

	#elif NUM_ESAME == 9
			#define ESAME__18_01_2017b

	#elif NUM_ESAME == 10
			#define ESAME__01_02_2017

	#elif NUM_ESAME == 11
			#define ESAME__14_02_2017

	#elif NUM_ESAME == 12
			#define ESAME__12_06_2017

	#elif NUM_ESAME == 13
			#define ESAME__03_07_2017

	#elif NUM_ESAME == 14
			#define ESAME__04_09_2017

/***************************************/

	#elif NUM_ESAME == 15
			#define SIMUL__20_12_2017

	#elif NUM_ESAME == 16
			#define ESAME__17_01_2018a

	#elif NUM_ESAME == 17
			#define ESAME__17_01_2018b

	#elif NUM_ESAME == 18
			#define ESAME__02_02_2018a

	#elif NUM_ESAME == 19
			#define ESAME__02_02_2018b

	#elif NUM_ESAME == 20
			#define ESAME__12_02_2018

	#elif NUM_ESAME == 21
			#define ESAME__14_06_2018

	#elif NUM_ESAME == 22
			#define ESAME__09_07_2018

	#elif NUM_ESAME == 23
			#define ESAME__06_09_2018

/***************************************/

	#elif NUM_ESAME == 24
			#define SIMUL__19_12_2018

	#elif NUM_ESAME == 25
			#define ESAME__10_01_2019

	#elif NUM_ESAME == 26
			#define ESAME__29_01_2019

	#elif NUM_ESAME == 27
			#define ESAME__12_02_2019

	#elif NUM_ESAME == 28
			#define ESAME__12_06_2019

	#elif NUM_ESAME == 29
			#define ESAME__04_07_2019

	#elif NUM_ESAME == 30
			#define ESAME__12_09_2019

/***************************************/

	#elif NUM_ESAME == 31
			#define SIMUL__13_12_2019

	#elif NUM_ESAME == 32
			#define ESAME__14_01_2020

	#elif NUM_ESAME == 33
			#define ESAME__28_01_2020

	#elif NUM_ESAME == 34
			#define ESAME__19_02_2020

	#elif NUM_ESAME == 35
			#define ESAME__08_06_2020

	#elif NUM_ESAME == 36
			#define ESAME__06_07_2020

	#elif NUM_ESAME == 37
			#define ESAME__14_09_2020

/***************************************/

	#elif NUM_ESAME == 38
			#define SIMUL__18_12_2020

	#elif NUM_ESAME == 39
			#define ESAME__11_01_2021

	#elif NUM_ESAME == 40
			#define ESAME__25_01_2021

	#elif NUM_ESAME == 41
			#define ESAME__08_02_2021

	#elif NUM_ESAME == 42
			#define ESAME__14_06_2021

	#elif NUM_ESAME == 43
			#define ESAME__06_07_2021

	#else
			#define NO_ESAME
	#endif
#endif
