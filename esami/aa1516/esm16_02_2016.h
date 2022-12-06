	#ifdef ESAME__16_02_2016
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define DECL(y) int x,y;

			int main() {
				DECL(x)
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x=0, y=0, z=0;
				
				x += (y += (z = 0) + 1) + 1;
				printf("%d %d %d\n", x, y, z);
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				if(x=1) x++; else x--;
				printf("%d\n", x);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 0;

				while(x ? x-- && ++y : ++x && y--)
					printf("%d\n", y);

				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int func();
			
			int main() {
				printf("%d\n", func(1));
				return 0;
			}
			
			int func(double x) {
				return x+1.1;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(unsigned int x) {
				if(x == 0) return x;
				else       return x+f(x-1);
			}
			
			int main() {
				printf("%d\n", f(4));
				return 0;
			}
		#elif ES == 7
			#define exec
			struct {
				int x = 1;
			};
			
			struct {
				int x;
			};
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char *s = "ciao";
				
				while(*s) {
					printf("%c", *s);
					s++;
				}
				printf("\n");
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>
			#include <stdlib.h>

			int *f(void) {
				int *q = (int *)malloc(sizeof(int));
				q[0] = 1;
				return q;
			}
			
			int main() {
				printf("%d\n", *f());
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, *p = &x, **q = &p;
				
				printf("%d %d\n", p[0], *q[0]);
				return 0;
			}
		#endif
	#endif
