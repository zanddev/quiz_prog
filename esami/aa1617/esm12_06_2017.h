	#ifdef ESAME__12_06_2017
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y,z) (x * y * z)
			
			int main() {
				printf("%d\n", M(1+2,1+2,1+2));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 0, z = 0;
				
				x += 2 + (y += 2 + (z += 2));
				printf("%d %d %d\n", x, y, z);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = -99;
				
				if((!(x+100)) == 0)
					printf("%d\n", !x);
				else
					printf("%d\n",  x);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i;
				for(i = 0, i < 10, i++)
					printf("%c\n", i);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int [4] f(int a[3]) {
				a[0] = a[1] = a[2] = 0;
				return a;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 0)
					return f(x-1);
				else
					return f(x+1);
			}
			
			int main() {
				printf("%d\n", f(10));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			enum E {A=-3, B, C, D};

			int main() {
				printf("%d\n", A+B+C+D);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char s[] = "stringa";
				
				printf("%d %d\n", (int)sizeof(s), (int)strlen(s));
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int A[2][3] = {0,1,2,3,4,5};
				int (*p)[2] = A;
				int (*q)[3] = A;
				
				printf("%d %d\n", p[1][1], q[1][1]);
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int *f(int x) {
				int y = x+1;
				int *p = &y;
				return p;
			}
			
			int main() {
				int *p = f(3);
				printf("%d\n", *p);
				
				return 0;
			}
		#endif
	#endif
