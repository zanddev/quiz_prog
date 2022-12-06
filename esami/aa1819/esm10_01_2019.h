	#ifdef ESAME__10_01_2019
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x) x*x
			#define N(x) M(x+2)
			
			int main() {
				printf("%d %d\n", N(0), N(1));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1, y = -2;
				
				x = x/y ? y-- : y++;
				y = y/x ? x-- : x++;
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1, y = -2;
				
				if(x = x/y ? y-- : y++)
				if(y = y/x ? x-- : x++)
					printf("%d %d\n", x, y);
				else
					printf("%d %d\n", x+1, y+1);
				else
					printf("%d %d\n", x-1, y-1);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1, y = -2;
				
				while(x = x/y ? y-- : y++) {
					y = y/x ? x-- : x++;
					printf("%d %d\n", x, y);
				}
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			void f(int x, int y) {
				printf("%d %d\n", x, y);
			}
			
			int main() {
				int x = -1, y = -2;
				
				f(x = x/y ? y-- : y++, y = y/x ? x-- : x++);
				
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			unsigned int f(unsigned int x) {
				if(x == 0)
					return x;
				if(x < 4)
					return x-1;
				else
					return f(f(x-1));
			}
			
			int main() {
				printf("%u\n", f(4));
				return 0;
			}
		#elif ES == 7
			#define exec
			enum A {A, B, C} x = A;
			enum   {D, E, F} y = A;
			enum             z = A;
		#elif ES == 8
			#define exec

			int main() {
				char *S1  = "Stringa1";
				char S2[] = "Stringa2";
				
				S1 = S2;
				S2 = S1;
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				char *S1   = "Stringa1";
				char  S2[] = "Stringa2";
				
				printf("%s\n", S1+6);
				printf("%s\n", S2+6);
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			void print(char **s) {
				if(**s && *(*s+1)) {
					char *p = *s+2;
					print(&p);
					printf("%c", **s);
				}
			}
			
			int main() {
				char *S1   = "Stringa1";
				char  S2[] = "Stringa2";
				char **p = &S1;
				char **q = &S2;
				
				printf("%s\n", p[0]+6);
				printf("%s\n", q[0]+6);
				
				return 0;
			}
		#endif
	#endif
