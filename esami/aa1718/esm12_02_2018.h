	#ifdef ESAME__12_02_2018
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y) (x/y+x*y)
			
			int main() {
				printf("%d %d\n", M(2+0,1+0), M(0+2,0+1));
		/*		printf("%d " , M(2+0,1+0));
				printf("%d\n", M(0+2,0+1));
		*/		return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 1;
				
				printf("%d\n", x++ || x-- || (~x >> 1) * (y -= 10));
				printf("%d\n", y-- && y++ && (~y >> 1) * (x -= 10));
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			enum     {X};
			#define   Y   1
			const int Z = 2;
			
			int main() {
				switch(3) {
					case X:	printf("%d\n", X);
					case Y:	printf("%d\n", Y);
					case Z:	printf("%d\n", Z);
					break;
				};
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i, j;
				for(i = j = 0; printf("%d\n", i+j), i + j + 2; i -= 2, j++);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				printf("%d %d %d\n", x, x++ -1, x++ -2);
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x < 0) {
					printf("%d\n", f(x+1));
					printf("%d\n", x++);
				}
				return ++x;
			}
			
			int main() {
				f(-2);
				return 0;
			}
		#elif ES == 7
			#define exec

			struct main {int main; };
			int    main;
			
			int main() {
				int main;
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				int a[] = {1,2,3,4}, i = 0, x = 1;
				
				while(i < sizeof(a)/sizeof(a[3])) x *= a[i++];
				printf("%d %d\n", i, x);
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int *f() {
				int x = 1;
				return &x;
			}
			
			int *g() {
				static int x = 1;
				return &x;
			}
			
			int main() {
				printf("%d %d\n", *f(), *g());
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>
			#include <stdlib.h>

			int *f(int **p) {
				int **q = p;
				*q = 0;
				return *q;
			}
			
			int *g(int **p) {
				int **q = p;
				*q = (int *)malloc(sizeof(int));
				**q = 0;
				return *q;
			}
			
			int main() {
				int *p;
				if((p = f(&p)) != NULL) printf("%d\n", *p);
				if((p = g(&p)) != NULL) printf("%d\n", *p);
				
				return 0;
			}
		#endif
	#endif
