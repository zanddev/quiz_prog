	#ifdef ESAME__01_02_2017
		#define exam
		#if ES == 1
			#define exec

			#define BEGIN {
			#define END }
			
			int main()
			BEGIN
				int 7hr33 = '\0'+3;
				int f0ur  = 'A'/16;
				int f1v3  = sizeof(char)*5;
			END
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 100, y = 0;
				printf("%d %d\n", !x, !y);
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x;
				
				if((!x) > 100) printf("1\n");
				else           printf("0\n");
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 3;
				
				while(x-- || ++x)
					printf("%d\n", x);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int main() {
				char a = '\0', b = 'b';
				printf("%d %d\n", a, b-b);
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>
			#include <string.h>

			void f(char *p, int n) {
				int k = strlen(p), i = 2*k-n-1, c;
				if(k > n/2) {
					f(p+1, n);
					c    = p[0];
					p[0] = p[i];
					p[i] = c;
				}
			}
			
			int main() {
				char s[] = "Ave,Eva";
				f(s, strlen(s));
				printf("%s\n", s);
				return 0;
			}
		#elif ES == 7
			#define exec
			enum E {A,B,C} x = -1;
			enum   {D,E,F} y = A;
			enum           z = 2;
		/*	enum           z;
			z = 2;
		*//*se separate le parti si compila */
		#elif ES == 8
			#define exec
			#include <stdio.h>
			#include <string.h>

			void f(char *p, int n) {
				while(strlen(p) > n/2) p++;
				
				printf("%d\n",(int)strlen(p));
			}
			
			int main() {
				char s[] = "Ave,Eva";
				f(s, strlen(s));
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			static int x = 1;
			
			int *f(int y) {
				static int x = 2;
				x += y;
				return &x;
			}
			
			int main() {
				int *p = f(x);				
				printf("%d %d\n", x, *p);
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int main() {
				char    a = 'a', b = 'b';
				char   *p = &a;
				char  **q = &p;
				char ***r = &q;
				
				**r = *q = &b;
				*p = 'c';
				printf("%c %c\n", a, b);
				return 0;
			}
		#endif
	#endif
