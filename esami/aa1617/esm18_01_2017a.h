	#ifdef ESAME__18_01_2017a
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define	FOR(i,n) for(i=0; i<n ; i++)
			
			int main() {
				int i;
				FOR(i,5);
					printf("%d\n", i);
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				printf("%d\n", x || (x-- * 2));
				printf("%d\n", x && --x);
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				if(1 && x) printf("1\n");
				else       printf("0\n");
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i = 0;
				
				for(; ++i; printf("%d\n", i)) i -= 3;				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int f(char x) {
				return (double)(x+1);
			}
			
			int main() {
				printf("%d\n", f(1.1));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x == 0)
					return 0;
				else
					return x * f(x-1);
			}
			
			int main() {
				printf("%d\n", f(100));
				return 0;
			}
		#elif ES == 7
			#define exec
			struct   {char x; char y;} a = {0,0};
			struct S {char a; char b;} b = a;
		#elif ES == 8
			#define exec

			int main() {
				int   A[2] = {1,2,3};
				int	  x = 100;
				char  y = 'a';
				float z = 0;
				
				A[x] = A[y] = A[z] = 0;
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main () {
				int A[][1] = {{1},{2},{3},{4},{5}};
				int (*p)[1] = A;
				int (*q)[3] = A;
				printf("%d %d\n", p[1][0], q[1][2]);
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			char *f(char (*p)[5]) {
				(*p)[1] = '\0';
			/*	p[0][1] = '\0';
			*/	return *p;
			}
			
			int main() {
				char p[] = "Ciao";
				printf("%s\n", f(&p));
				
				return 0;
			}
		#endif
	#endif
