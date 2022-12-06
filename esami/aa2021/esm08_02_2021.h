	#ifdef ESAME__08_02_2021
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x) x*x
			
			int main() {
				printf("%d %d\n", M(M(2+0)), M(M(2)));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				printf("%d %d\n", ++x, ++x);
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				double x = 1;
				
				printf("%d %d\n", sizeof(1)==sizeof(x),sizeof(1.0)==sizeof(double));
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 3;
				
				do {
					if(x-- > 2) --x;
					else        ++x;
				} while(x++);
				
				printf("%d\n", x);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x == 0)     return 1;
				else if(x > 0) return x*f(x-1);
				else           return x*f(x+1);
			}
			
			int main() {
				printf("%d %d\n", f(-3), f(3));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int main() {
				int A[3][3] = {{1,2},{4,5}};
				
				printf("%lu %lu\n",sizeof(A)/sizeof(int),sizeof(A[0])/sizeof(int));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				int A[3][3] = {{1,2},{4,5}};
			/*	int A[3][3] = {{1,2},{4,5,6}};
			*/	int (*p)[2] = A;
				int (*q)[3] = A;
				
				printf("%d %d\n", p[1][2], q[1][2]);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				int A[3][3] = {{1,2},{4,5}};
			/*	int A[3][3] = {{1,2},{4,5},{-1}};
			*/	int (*p)[3][2] = &A;
				int (*q)[3][3] = &A;
				
				printf("%d %d\n", p[0][2][0], (*q)[2][0]);
				return 0;
			}
		#endif
	#endif
