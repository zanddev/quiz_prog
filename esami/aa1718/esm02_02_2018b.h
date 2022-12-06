	#ifdef ESAME__02_02_2018b
		#define exam
		#if ES == 1
			#define exec

			#define x_MACRO(x,y) (y = x);
			#define 2_MACRO(x)   (x = 2);
			
			int main() {
				int x, y;
				
				2_MACRO(x)
				x_MACRO(y,x);
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				double x = 0, y = 0;
				
				printf("%d\n", !((int)x-- / 2) && y++);
				printf("%d\n", x++ || (y -= 2) || x++);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int MAX = 0;
				
				if(MAX != 0); {
					printf("%d\n", MAX+1);
					MAX = -1;
				}
				printf("%d\n", MAX+1);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i = 0;
				
				for(; i-3; i--)
					printf("%d\n", i += 2);
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int main() {
				double f(double);
				printf("%f\n", f('A'));
			}

			int f(int x) {}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x < 0) {
					printf("%d\n", x++);
					printf("%d\n", f(x));
				}
				return ++x;
			}
			
			int main() {
				f(-2);
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			enum X {X, Y, Z};
			int main() {
				typedef int X;
				double Y = (X)2.1;
				printf("%f\n", Y);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				int x = 20;
				printf("%d %d\n", sizeof(20.0) == sizeof(x), sizeof(20) == sizeof(x));
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int A[] = {1,2,3,4};
				int *p = A;
				
				printf("%d %d\n", (A[1])[p], (p[3])[A]);
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
				
				printf("%d %d %d\n", p[2][0], *p[1], p[0][0]);
				return 0;
			}
		#endif
	#endif
