	#ifdef ESAME__09_07_2018
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y) (x/y+x*y)
			
			int main() {
				printf("%d %d\n", M(3+0,2+0), M(0+3,0+2));
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				printf("%d\n", x++ || x-- || (~x >> 1) * (x -= 10));
				printf("%d\n", x-- && x++ && (~x >> 1) * (x -= 10));
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			enum     {X};
			#define   Y   1
			int Z = 2;
			
			int main() {
				switch(3) {
					case X:	printf("%d\n", X);
					case Y:	printf("%d\n", Y);
					case Z:	printf("%d\n", Z);
				};
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1;
				do {
					if(--x == 1)
						x -= 1;
				} while(x++);
				
				printf("%d\n", x);
				
				return 0;
			}
		#elif ES == 5
			#define exec

			int X(int x) {
				int X = x;
				return X(X+1);
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 2)        return f(x-1);
				else if(x <  -2) return f(x+1);
				else if(x ==  0) return 0;
				else             return 1+f(x-1);
			}
			
			int main() {
				printf("%d\n", f(2));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			enum {A = -2, B, C = 2, D};
			
			int main() {
				int A = 0, C = 1;
				printf("%d\n", A+B+C+D);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char A[3][3], B[6];
				printf("%lu %d\n", sizeof(A), sizeof(A) == sizeof(B));
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int A[] = {1,2,3,4};
				int *p = A;
				
				printf("%d %d\n", p[A[2]], A[p[1]]);
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1, y = -2, z = -3;
				int *A[3], **p = A;
				
				A[0] = &x;
				A[1] = &y;
				A[2] = &z;
				
				printf("%d %d %d\n", **p+1, p[1][0]+1, *p[2]+1);
				return 0;
			}
		#endif
	#endif
