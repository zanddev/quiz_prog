	#ifdef ESAME__06_09_2016
		#define exam
		#if ES == 1
			#define exec

			#define M 1 = 0;
			
			int x = M;
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int    x = (double)(1.1 * 2);
				double y = (int)(1.1 * 2);
				
				
				printf("%d %f\n", x, y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				if(x == 0) {
					printf("0\n");
				} else {
					printf("1\n");
				} else if(x == 2) {
					printf("2\n");
				}
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i;
				
				while(i++ < 3)
					printf("%d\n", i);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			double f(int x);

			int main() {
				printf("%f\n", f(1.1));

				return 0;
			}

			double f(int x) {
				return 2*x;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x <= 0) return 1;
				else       return f(x)+f(x-1)+f(x-2);
			}
			
			int main() {
				printf("%d\n", f(10));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				enum {A, B, C, D} x = A, y = D-3;
				
				printf("%d\n", x == y);
				
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>
			
			int main() {
				int a[1], b[2], c[1][2];
				
				if(sizeof(a) + sizeof(b) == sizeof(c))
					printf("1\n");
				else
					printf("0\n");
			
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 1;
				int *p = &x;
				int *q = &y;

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
				int x = 1, y = 2;
				int *p = &x, **q = &p;
				
				**q = y;
				  y = x;
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#endif
	#endif
