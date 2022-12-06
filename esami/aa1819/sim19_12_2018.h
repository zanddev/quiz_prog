	#ifdef SIMUL__19_12_2018
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y) (y = x*y/x) - 1
			
			int main() {
				int x = 0;
				int y = M(1+2, x);
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2, z = 3;
				
				x += y += z += 1;
				
				printf("%d %d %d\n", x, y, z);
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 0;
				
				if(sizeof(x) > sizeof(int) ? ++y : --x)
					printf("%d\n", y+x);
				else
					printf("%d\n", y-x);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 1;
				
				while(x ? x-- && ++y : ++x && y--)
					printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			unsigned char f(unsigned char x) {
				return (double)x+1;
			}
			
			int main() {
				printf("%d\n", f(255));
				return 0;
			}
		#elif ES == 6
			#define exec

			int f(int f) {
				if(f = 0)
					return f;
				else
					return f+f(f-1);
			}
		#elif ES == 7
			#define exec
			enum A {A};
			
			typedef enum A A;
		#elif ES == 8
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char s[] = "5char";
				
				printf("%d %d\n", sizeof(s)==5, (int)strlen(s));
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 1;
				int *p = &x;
				int *q = &y;
				
				*p = *q;
				
				printf("%d %d\n", p == q, *p == *q);
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			void f(int **p, int *q) {
				*p = q;
				**p = 0;
			}
				
			int main() {
				int x = 1, *p;
				
				f(&p, &x);
				printf("%d %d\n", x, *p);
				
				return 0;
			}
		#endif
	#endif
