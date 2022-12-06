	#ifdef ESAME__06_09_2018
		#define exam
		#if ES == 1
			#define exec

			#define 5_ASSIGN(x) (x = 5);
			#define a_ASSIGN(x) (x = 'a');
			
			int main() {
				char x;
				int  y;
				
				5_ASSIGN(x)
				a_ASSIGN(y);
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				double x = -1, y = 0;
				
				printf("%d\n", !((int)x++/2 && y++));
				printf("%d\n", x++ || y || --x);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int MAX = 0;
				
				if(MAX = 1); {
					printf("%d\n", MAX);
					MAX = 1;
				}
				printf("%d\n", MAX+1);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i,j;
				for(i = j = 0; printf("%d\n",i+j), i + j + 1; i -= 1, j++);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			void f(int x, int y, int z) {
				printf("%d %d %d\n",x,y,z);
			}
			
			int main() {
				int x = 0;
				f(x,x++,x++);
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 0) {
					printf("%d\n", f(x-1));
					printf("%d\n", f(x-1));
				}
				return x;
			}
			
			int main() {
				printf("%d\n", f(1));
				return 0;
			}
		#elif ES == 7
			#define exec
			struct main {int main;};
			
			int main() {
				int main;
				return main();
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char x = 0;
				printf("%d %d\n", sizeof(0) == sizeof(x), sizeof(0.0) == sizeof(x));
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int A[2][2][2] = {{{1},{2}},{{3},{4}}};
				
				printf("%d %d\n", A[0][1][0], A[1][0][1]);
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>
			#include <stdlib.h>

			int *f(int **p) {
				*p = (int *)malloc(sizeof(int));
				*p = 0;
				return *p;
			}
			
			int *g(int **p) {
				*p = (int *)malloc(sizeof(int));
				**p = 0;
				return *p;
			}
			
			int main() {
				int *p;
				if((f(&p)) != NULL) printf("%d\n", *p);
				if((g(&p)) != NULL) printf("%d\n", *p);
				
				return 0;
			}
		#endif
	#endif
