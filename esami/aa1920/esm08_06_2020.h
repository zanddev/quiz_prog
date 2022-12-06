	#ifdef ESAME__08_06_2020
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x) x*x
			#define S(x) x+x
			
			int main() {
				printf("%d %d\n", M(S(1+1)), S(M(1+1)));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 0;
				
				x = x++;
				y = y+1;
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 0;
				
				++x && (++y || x++);
				--y && (--x || y--);
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i = 0, j = 0;
				
				for(; i < 1; j++)
					for(; j < 1; i++)
						printf("%d\n", i+j);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x == 0)
					return 1;
				else if(x < 0)
					return x*f(x+1);
			}
			
			int main() {
				printf("%d %d\n", f(-2), f(2));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>
			#define N 2

			int *f(int init) {
				int A[N], i;
				for(i = 0; i < N ; i++) A[i] = init;
				return A;
			}
			
			int main() {
				int *A, i;
				
				A = f(-1);
				for(i = 0; i < N ; i++) printf("%d", A[i]);
				printf("\n");
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			void f(char *c) {
				if(c && *c) {
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
				}
			}
			
			int main() {
				char *c = "ciao";
				f(&c); printf("\n");
				return 0;
			}
		#endif
	#endif
