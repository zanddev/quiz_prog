	#ifdef SLIDE__TYPE_ENUM
		#ifndef slide
			#define slide
		#endif
		#if ES == 1
			#define exec
			#define N 1

			enum {
				A = 1.0,
				B = N,
				C = 1+1,
				D = 0,
				E = -1,
				F = 0
			};
		#elif ES == 2
			#define exec

			enum E {A, B, C};
			
			enum   {B, C, D};
		#elif ES == 3
			#define exec
			#define B A

			enum {
				A,
				B,
				C
			};
			
			enum {
				D,
				E,
				F,
			};
		#elif ES == 4
			#define exec

			enum E {A, B, C,} x = A, y = A;
			
			enum z = A;
		#elif ES == 5
			#define exec

			enum {A, B, C,} x = A;
			enum {D  E  F } y = B;
		#elif ES == 6
			#define exec
			#include <stdio.h>

			enum {A=2, B, C=-1, D};
			
			int main() {
				printf("%d %d %d %d\n", A, B, C, D);
				
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			enum {A=2, B, C=-1, D} x = A+B+C+D, y = 2.2;
			
			int main() {
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			enum E {A, B} x;
			
			int main() {
				if(sizeof(x) == sizeof(enum E))
					printf("%d\n", B);
				else
					printf("%d\n", A);
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			enum E {A=-1, B, C=-1, D};
			
			int main() {
				enum E x = -1.1;
				
				x *= D+1;
				
				printf("%d\n", x);
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			enum E {A=-1, B, C=-1, D};
			
			int main() {
				enum E x = -1.1;
				
				x /= D;
				
				printf("%d\n", x);
				
				return 0;
			}
		#endif
	#endif
