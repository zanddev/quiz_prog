	#ifdef ESAME__03_07_2017
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y,z) (x / y / z)

			int main() {
				printf("%d\n", M(1+2,1+2,1+2));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 1;
				
				printf("%d\n", !(x * y) && x++);
				printf("%d\n", !(x * y) || x++);
				printf("%d\n", x);

				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1;
				
				switch(x) {
					x = 2;
					case 0: printf("%d\n", x+0); break;
					case 1: printf("%d\n", x+1); break;
					case 2: printf("%d\n", x+2); break;
				}
								
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i;
				for(i = 4; i; i -= 2)
					printf("%d\n", i++);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			double f(char x) {
				return x-1;
			}
			
			int main() {
				printf("%d\n", (int)f(1.1));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 0)
					return f(x-1)+1;
				else if(x < 0)
					return f(x+1)-1;
				else
					return 0;
			}
			
			int main() {
				printf("%d\n", f(10));
				
				return 0;
			}
		#elif ES == 7
			#define exec
			typedef struct a {
				a *a;
				a *b;
			} a;
			
			typedef struct b {
				struct b *a;
				struct b *b;
			} b;
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "stringa";
				char *S  = "Stringa";
				
				s = S;
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int A[2][3] = {0,1,2,3,4,5};
				int (*p)[1] = A;
				int (*q)[4] = A;
				
				printf("%d %d\n", p[1][1], q[1][1]);
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int *f(int **p) {
				int *q = *p;
				**p = 1;
				return q;
			}

			int main() {
				int *p = f(&p);
				printf("%d\n", *p);

				return 0;
			}
		#endif
	#endif
