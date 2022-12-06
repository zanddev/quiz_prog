	#ifdef ESAME__04_09_2017
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define BEGIN {
			#define END }
			#define INT int
			#define	FOR(a, b) for(a=0; a <= b ; a++)
			#define	PRINT(a) printf("%d\n", a)

			INT main()
				BEGIN
				INT i;
				FOR(i, 10);
				BEGIN
					PRINT(i);
				END
			END
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1, y = 0, z = 1;
				printf("%d %d %d\n", !x, !y, !z);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x;
				
				printf("%d\n", !x);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i = 0;
				
				while(i <= 10)
					printf("%d\n", i++);
				
				do
					printf("%d\n", i);
				while(i++ <= 10)
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int main() {
				int a;
				printf("%d %d\n", a-a, a+a);
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 1 || x < -1)
					return 0;
				else
					return f(x+1)+f(x-1)+1;
			}
			
			int main() {
				printf("%d\n", f(0));
				
				return 0;
			}
		#elif ES == 7
			#define exec
			struct x {int x;} x = {0};
			struct y {int x;} y = x;
		#elif ES == 8
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char p[] = "ciao";
				int n = strlen(p);
				
				printf("%c %c\n", p[1], p[n-1]);
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>
			#include <string.h>

			char *f(char *p) {
				int n = strlen(p);
				*(p+n-1) = '\0';
				return p+1;
			}
			
			int main() {
				char p[] = "ciao";
				
				printf("%s\n", f(p));
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>
			#include <string.h>

			char *f(char (*p)[5]) {
				int n = strlen(*p);
				*(*p+n-1) = '\0';
				return *p+1;
			}
			
			int main() {
				char p[] = "ciao";
				
				printf("%s\n", f(&p));
				return 0;
			}
		#endif
	#endif
