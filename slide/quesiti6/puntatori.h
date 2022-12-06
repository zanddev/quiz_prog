	#ifdef SLIDE__PUNTATORI
		#ifndef slide
			#define slide
		#endif
		#if ES == 1
			#define exec

			double *p = 0;
			double *q = 'A';
			double *r = -1;
			double *s = 0.0;
		#elif ES == 2
			#define exec

			int main() {
				int x, *p = &x;
				int y, *q = &y;
				char a, *r = &a;
				char b, *s = &b;
				
				x = p-q;
				y = p+q;
				a = p-r;
				b = q+s;
				
				return 0;
			}
		#elif ES == 3
			#define exec

			int main() {
				int  x, *p = &x;
				char y, *q = &y;
				
				p++;
				q++;
				p = p + 1;
				q = q + 0.0;
				
				return 0;
			}
		#elif ES == 4
			#define exec

			int main() {
				int  x, *p = &x;
				char y, *q = &y;
				
				if(p < q)
					p = q;
				else if(p == 0)
					q = 0;
				else if(q == 0.0)
					p = 0;
				else
					p = p*q;
				
				return 0;
			}
		#elif ES == 5
			#define exec

			int main() {
				int x, *p = &x;
				int y, *q = &y;
				
				x = p/2;
				y = q+2;
				
				return 0;
			};
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int main() {
				int x = 2, y = 3;
				int *p = &x;
				
				*p += y;
				
				printf("%d %d\n",x,y);
				
				return 0;
			};
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				int x = 2, y = 3;
				int *p = &x;
				
				y += *p;
				
				printf("%d %d\n",x,y);
				
				return 0;
			};
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				int x = 2, y = 3;
				int *p = &x;
				int *q = &y;
				
				 p = q;
				*p = x;
				
				printf("%d %d\n",x,y);
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int x = 2, y = 3;
				int *p = &x;
				int *q = &y;
				
				*p = *q;
				
				printf("%d %d\n",x,y);
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int main() {
				int x = 2, y = 3;
				int *p = &x;
				int *q = &y;
				
				*p *= *q;
				
				printf("%d %d\n",x,y);
				
				return 0;
			}
		#elif ES == 11
			#define exec
			#include <stdio.h>

			int main() {
				int x = 2, y = 2;
				int *p = &x;
				int *q = &y;
				
				if(p == q)
					*p = *q = 0;
				else
					 p =  q = 0;
				printf("%d %d\n",x,y);
				return 0;
			}
		#elif ES == 12
			#define exec
			#include <stdio.h>	

			int main() {
				char c = 'c';
				int *p = (int *) &c;
				
				printf("%d\n", *p);
				
				return 0;
			}
		#elif ES == 13
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "ciao";
				char *p = s;

				while(*p)
					printf("%c", *p++);
				printf("\n");
				return 0;
			}
		#elif ES == 14
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "ciao";
				char *p = s+3;

				while(*p)
					printf("%c", *p--);
				printf("\n");
				return 0;
			}
		#elif ES == 15
			#define exec
			#include <stdio.h>

			int main() {
				int a[] = {10,20,30};
				int *p  = a;
				int *q  = a;
				
				printf("%d\n",++*p++);
				printf("%d\n",++(*(q++)));
				printf("%d\n",a[0]);
				return 0;
			}
		#elif ES == 16
			#define exec
			#include <stdio.h>

			int f(int *p) {
				(*p)--;
				return *p;
			}
			
			int main() {
				int x = 2, y = 3;
				
				y = f(&x);
				
				printf("%d %d\n",x,y);
				
				return 0;
			}
		#elif ES == 17
			#define exec
			#include <stdio.h>

			int f(int *p) {
				int x = *p;
				
				p = &x;
				(*p)--;
				return *p;
			}
			
			int main() {
				int x = 2, y = 3;
				
				y = f(&x);
				
				printf("%d %d\n",x,y);
				
				return 0;
			}
		#elif ES == 18
			#define exec
			#include <stdio.h>

			int *f(int *p) {
				*p = -1;
				return p;
			}
			
			int main() {
				int x = 2, y = 3;
				int *p = f(&x);
				
				y = *p;
				
				printf("%d %d\n",x,y);
				
				return 0;
			}
		#elif ES == 19
			#define exec
			#include <stdio.h>

			int *f(int *p) {
				int x = *p;
				 p = &x;
				*p = -1;
				return p;
			}
			
			int main() {
				int x = 2, y = 3;
				int *p = f(&x);
				
				y = *p;
				
				printf("%d %d\n",x,y);
				
				return 0;
			}
		#elif ES == 20
			#define exec
			#include <stdio.h>

			int f(int *p, int *q) {
				return *p * *q;
			}
			
			int main() {
				int x = 2, y = 3;
				
				y = f(&x,&y);
				
				printf("%d %d\n",x,y);
				
				return 0;
			}
		#endif
	#endif
