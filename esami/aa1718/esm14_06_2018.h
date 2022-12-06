	#ifdef ESAME__14_06_2018
		#define exam
		#if ES == 1
			#define exec

			#define M(x,y) (y = x);
			
			int main() {
				int x = 1, y;
				
				M(x,y);
				M(x,2);
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 2, y = 0;
				
				printf("%d\n", (--x * --y) && (--x / --y));
				printf("%d\n", (x++ / y++) || (x++ * y++));
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1;
				
				if(x = 1)
					printf("%d\n", !x + 1);
				else
					printf("%d\n", !x * 1);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i = 0;
				
				for(; i+4; i++)
					printf("%d\n", i -= 3);
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int main() {
				char f(char);
				printf("%f\n", f(1.1));
			}
			
			float f(float x) {}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 0) {
					printf("%d\n", x-=2);
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
			enum X {X,Y,Z};
			int main() {
				typedef char X;
				float Y = (X)1.2;
				printf("%.1f\n", Y);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				int a[] = {1,2,3,4}, i = 0, x = 0;
				while(i < sizeof(a)/sizeof(a[1])) x += a[i++];
				printf("%d %d\n", i, x);
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int *f() {
				static int x = 0;
				return &x;
			}
			
			int *g() {
				int x = 0;
				return &x;
			}
			
			int main() {
				printf("%d %d\n", *f(), *g());
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int main() {
				int  x = 1, y = 0;
				int  *p1 = &y,   *p2 = &y;
				int **q1 = &p1, **q2 = &p2;
				
				*q2 = &x;
				
				printf("%d %d\n", **q1, *p2);
				return 0;
			}
		#endif
	#endif
