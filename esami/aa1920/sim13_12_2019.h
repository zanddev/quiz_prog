	#ifdef SIMUL__13_12_2019
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1;
				printf("%d\n", x || !x + !x);
				printf("%d\n", x && !x + !x);
				printf("%d\n", (-x || -x) + (-x && -x));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 0;
				
				if(x > y ? y : x)
					printf("%d\n", y+x);
				else
					printf("%d\n", y-x);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int i = 0;
				
				for(; i+6; )
					printf("%d\n", i -= 2);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 0) return -x;
			}
			
			int main() {
				printf("%d\n", f(f(10)));
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			void f(int x) {
				if(x >= 0) {
					f(x-1);
					printf("%d\n", x);
					f(x-1);
				}
			}
			
			int main() {
				f(1);
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int main() {
				int i, A[][2] = {{1,2},{3,4}};
				
				for(i = 0; i<sizeof(A)/sizeof(A[1]) ;i++)
				printf("%d\n", A[i][i]);
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				int A[][2] = {{1,2},{3,4}};
				
				printf("%d\n", **(A+1));
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			void f(char **p, char *q) {
				p[0] = q;
			}
			
			int main() {
				char *p, *q = "Ciao";
				f(&p, q);
				printf("%c%c\n", p[1], p[2]);
				return 0;
			}
		#endif
	#endif
