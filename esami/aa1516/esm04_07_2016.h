	#ifdef ESAME__04_07_2016
		#define exam
		#if ES == 1
			#define exec

			#define TRUE 1

			int x = TRUE = 0;
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				double y = 1.1;
				int    x = y;
				
				printf("%.1f\n", y=x);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				if(x = 1)
					x = -1;
				else
					x = 1;
				
				printf("%d\n", x);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i;

				for(i = 4; i; i -= 2)
					printf("%d\n", i);

				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			double f(int x);
			
			int main() {
				return f(1.1);
			}
			
			int f(int x) {
				return 2*x;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x, unsigned int y) {
				if(y == 0)
					return 1;
				else
					return x*f(x,y-1);
			}
			
			int main() {
				printf("%d\n", f(3,2));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>
			 
			enum {A = 0, B, C = -1, D};
			 
			int main() {
				printf("%d\n", A+B+C+D);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "ciao";
				
				if(sizeof(s) == 4)
					printf("1\n");
				else
					printf("0\n");
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int x;
				int *p = &x;
				int *q = &x;
				
				if(p == q)
					printf("1\n");
				else
					printf("0\n");
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int main() {
				int A[2][3] = {{1,2,3},{4,5,6}};
				int (*p)[2] = &A;
				
				printf("%d\n", p[1][0]);
				
				return 0;
			}
		#endif
	#endif
