	#ifdef ESAME__28_01_2020
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x) x/x
			
			int main() {
				printf("%d %d\n", M(M(2*2)), M(M(4)));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 0;
				printf("%d\n", x++ || y++ ? x++ : y++);
				printf("%d\n", --x && --y ? --x : --y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 0;
				if(x++ || y++ ? x++ : y++)
					if(--x && --y ? --x : --y)
						printf("%d %d\n", x, y);
					else
						printf("%d %d\n", x, y);
				else
					printf("%d %d\n", x, y);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 0;
				
				while(x++ || y++ ? x++ : y++)
					if(--x && --y ? --x : --y)
						printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(f(x-1) == 0)
					return x-1;
				else
					return f(x+1);
			}
			
			int main() {
				printf("%d\n", f(1));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				
				printf("%lu %lu\n", sizeof("ciao"), strlen("ciao"));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			void f(char *c) {
				if(c && *c) {
					printf("%c", *c);
					f(c+1);
					printf("%c", *c);
				}
			}
			
			int main() {
				f("ciao"); printf("\n");
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			void f(char **c) {
				if(c && *c && **c) {
					char *p = *c + 1;
					printf("%c", **c);
					f(&p);
					printf("%c", **c);
				}
			}
			
			int main() {
				char *c = "ciao";
				f(&c); printf("\n");
				return 0;
			}
		#endif
	#endif
