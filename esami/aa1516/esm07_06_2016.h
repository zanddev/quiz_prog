	#ifdef ESAME__07_06_2016
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y) x/y

			int main() {
				printf("%d\n",M(1,1+9));
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x=0, y=0, z=0;
				
				x += y += z += 1;
				printf("%d %d %d\n", x, y, z);
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				if(++x == 0);
				else if(++x == 1) x = -1;
				
				printf("%d\n", x);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 2;

				while(x)
					printf("%d\n", x--);

				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int [3] func(void) {
				int x[2] = {0};
				return x;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 0)      return f(x-1);
				else if(x < 0) return f(x+1);
				else           return x;
			}
			
			int main() {
				printf("%d\n", f(100));
				return 0;
			}
		#elif ES == 7
			#define exec
			struct {
				int x = 1;
			};
			
			struct {
				int x = 1;
			};
		#elif ES == 8
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char *s = "ciao";
				int n = strlen(s);
				
				do
					printf("%d %c\n", n-(int)strlen(s), *s);
				while(*++s);
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>
			#include <stdlib.h>

			int *f(int x) {
				int q[1] = {x};
				return q;
			}
			
			int main() {
				printf("%d\n", *f(1));
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int main() {
				int x, *p = &x, **q = &p;
				
				printf("%d %d\n", *p, **q);
				return 0;
			}
		#endif
	#endif
