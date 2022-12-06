	#ifdef ESAME__02_02_2018a
		#define exam
		#if ES == 1
			#define exec

			#define 1_MACRO(x)   (x = 1);
			#define y_MACRO(x,y) (x = y);
			
			int main() {
				int x, y;
				
				1_MACRO(x)
				y_MACRO(y,x);
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				double x = 1, y = 1;
				
				printf("%d\n", !((int)x-- / 2) && y++);
				printf("%d\n", x++ || (y -= 2) || x++);
			/*	printf("%.1f %.1f\n", x, y);
			*/	return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int MAX = 1;
				
				if(MAX != 1); {
					printf("%d\n", MAX);
					MAX = 0;
				}
				printf("%d\n", MAX+1);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i = 0;
				
				for(; i+3; i++)
					printf("%d\n", i -= 2);
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int main() {
				int f(int);
				printf("%f\n", f(1.1));
			}

			double f(double x) {
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 0) {
					printf("%d\n", x--);
					printf("%d\n", f(x));
				}
				return --x;
			}
			
			int main() {
				f(2);
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			enum X {X, Y, Z};
			int main() {
				typedef int X;
				double Y = (X)1.2;
				printf("%f\n", Y);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				double x = 20;
				printf("%d %d\n", sizeof(20.0) == sizeof(x), sizeof(20) == sizeof(x));
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int A[] = {1,2,3,4};
				int *p = A;
				
				printf("%d %d\n", (A[3])[p], (p[1])[A]);
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2, z = 3;
				int *A[3], **p = A;
				
				A[0] = &x;
				A[1] = &y;
				A[2] = &z;
				
				printf("%d %d %d\n", **p, p[1][0], *p[2]);
				return 0;
			}
		#endif
	#endif
