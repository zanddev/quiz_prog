	#ifdef ESAME__14_02_2017
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define VAR(i) int i;
			#define ASSIGN(x) i = x;
			
			int main() {
				VAR(x);
				VAR(y);
				ASSIGN(2);
				
				printf("%d %d\n", x, y);
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 0, z = 0;
				
				x += 1 + (y += 1 + (z += 1));
				printf("%d %d %d\n", x, y, z);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				if(!x || x++ + ++x)
					printf("%d\n",  x);
				else
					printf("%d\n", !x);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 3;
				while(x-- && ++x)
					printf("%d\n", x);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int main() {
				int    x = 1;
				int    y = 2;
				double z = 2;
				
				printf("%d %f\n", x/y, x/z);
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>
			#include <string.h>

			void f(char *p) {
				if(strlen(p) > 3) {
					char c = p[0];
					p[0]   = p[3];
					p[3]   = c;
					f(p+1);
				}
			}
			
			int main() {
				char s[] = "Ave,Eva";
				f(s);
				printf("%s\n", s);
				return 0;
			}
		#elif ES == 7
			#define exec
			struct S {int A; int B; int C;} x = {1,1,1};
			struct   {int A; int B; int C;} y = {1,1};
			struct                          z = {1};
		#elif ES == 8
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char s[] = "Ave,Eva";
				
				printf("%d %d\n", (int)sizeof(s), (int)strlen(s));
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "Ave,Eva";
				char *p = s, *q = s+8;
				
				printf("%d %c\n", (int)(q-p), *(p+4));
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			void f(int **p, int *q) {
				int *r = q;
				p   = &r;
				**p = 1;
			}
			
			int main() {
				int x = 0, *p;
				f(&p,&x);
			/*	p=&x;
			*/	printf("%d %d\n", x, *p);
				
				return 0;
			}
		#endif
	#endif
