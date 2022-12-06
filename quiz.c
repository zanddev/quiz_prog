/*
    Quiz.c - every C quiz can be executed with this program
    Copyright (C) 2021 Davide (IMM) 2020

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "select.h"
#include "check.h"

/*******************************************************************/

#if !ERRORE
	#if ESAME == 1

		#include "esami/aa1516/esm20_01_2016.h"
		#include "esami/aa1516/esm01_02_2016.h"
		#include "esami/aa1516/esm16_02_2016.h"
		#include "esami/aa1516/esm07_06_2016.h"
		#include "esami/aa1516/esm04_07_2016.h"
		#include "esami/aa1516/esm06_09_2016.h"


		#include "esami/aa1617/sim09_01_2017.h"
		#include "esami/aa1617/esm18_01_2017a.h"
		#include "esami/aa1617/esm18_01_2017b.h"
		#include "esami/aa1617/esm01_02_2017.h"
		#include "esami/aa1617/esm14_02_2017.h"
		#include "esami/aa1617/esm12_06_2017.h"
		#include "esami/aa1617/esm03_07_2017.h"
		#include "esami/aa1617/esm04_09_2017.h"


		#include "esami/aa1718/sim20_12_2017.h"
		#include "esami/aa1718/esm17_01_2018a.h"
		#include "esami/aa1718/esm17_01_2018b.h"
		#include "esami/aa1718/esm02_02_2018a.h"
		#include "esami/aa1718/esm02_02_2018b.h"
		#include "esami/aa1718/esm12_02_2018.h"
		#include "esami/aa1718/esm14_06_2018.h"
		#include "esami/aa1718/esm09_07_2018.h"
		#include "esami/aa1718/esm06_09_2018.h"


		#include "esami/aa1819/sim19_12_2018.h"
		#include "esami/aa1819/esm10_01_2019.h"
		#include "esami/aa1819/esm29_01_2019.h"
		#include "esami/aa1819/esm12_02_2019.h"
		#include "esami/aa1819/esm12_06_2019.h"
		#include "esami/aa1819/esm04_07_2019.h"
		#include "esami/aa1819/esm12_09_2019.h"


		#include "esami/aa1920/sim13_12_2019.h"
		#include "esami/aa1920/esm14_01_2020.h"
		#include "esami/aa1920/esm28_01_2020.h"
		#include "esami/aa1920/esm19_02_2020.h"
		#include "esami/aa1920/esm08_06_2020.h"
		#include "esami/aa1920/esm06_07_2020.h"
		#include "esami/aa1920/esm14_09_2020.h"


		#include "esami/aa2021/sim18_12_2020.h"
		#include "esami/aa2021/esm11_01_2021.h"
		#include "esami/aa2021/esm25_01_2021.h"
		#include "esami/aa2021/esm08_02_2021.h"
		#include "esami/aa2021/esm14_06_2021.h"
		#include "esami/aa2021/esm06_07_2021.h"

	#elif SLIDE == 1

		#include "slide/quesiti2/istr_cond.h"
		#include "slide/quesiti2/istr_iter.h"

		#include "slide/quesiti3/funz.h"
		#include "slide/quesiti3/funz_ric.h"

		#include "slide/quesiti4/type_enum.h"
		#include "slide/quesiti4/type_struct.h"
		#include "slide/quesiti4/type_union.h"
		#include "slide/quesiti4/typedef.h"
		#include "slide/quesiti4/visib_identf.h"

			#include "slide/quesiti5/array.h"
			#include "slide/quesiti5/stringhe.h"

			#include "slide/quesiti6/puntatori.h"
			#include "slide/quesiti6/punt_array.h"
			#include "slide/quesiti6/punt_punt.h"

	#endif

	#ifndef exam
		#define NDEF_EXAM 1
	#else
		#define NDEF_EXAM 0
	#endif

	#ifndef slide
		#define NDEF_SLIDE 1
	#else
		#define NDEF_SLIDE 0
	#endif

	#if ((NDEF_EXAM + NDEF_SLIDE) != 1)
		#define ERRORE 1
	#else
		#ifndef exec
			#define ERRORE 2
		#endif
	#endif
#endif

#if ERRORE
		#include <stdio.h>

		int main() {
	#if   ERRORE == 1
			fprintf(stderr, "Error: exam or slide not found or out of range!\n");
	#elif ERRORE == 2
			fprintf(stderr, "Error: exercise out of range!\n");
	#elif ERRORE == 3
			fprintf(stderr, "Error: select exam or slide mode!\n");
	#elif ERRORE == 4
			fprintf(stderr, "Error: exam/slide not selected!\n");
	#elif ERRORE == 5
			fprintf(stderr, "Error: exercise not selected!\n");
	#endif
			return 0;
		}
#endif
