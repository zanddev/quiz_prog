	#ifdef ESAME__06_07_2021
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y) x*y
			
			int main() {
				int x = -1;
				printf("%d %d\n", M(x+x,x+x),M(x*x,x*x));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 1;
				
				(x++ || y--) && (--x && --y);
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x, y;
				
				switch(!x) {
					y = 0;
					case 0:  x = 0;
					case 1:  x = 1;
					case 2:  x = 2;
					default: break;
					x = 0;
				}
				printf("%d %d\n", x, y);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i = 2;
				
				while(i++)
					if(i-- && ++i) printf("%d\n", i--);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 0) {
					x = f(x-2);
					x = f(x-2);
				}
				return x;
			}
			
			int main() {
				printf("%d %d\n", f(2), f(4));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int main() {
				int A[4][4] = {{1,2},{3,4},{5,6}};
				
				printf("%lu %lu\n", sizeof(A)/sizeof(int), sizeof(A[0])/sizeof(int));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				char *s = "stringadiprova";
				
				while(*s) s++;
				
				printf("%c%c%c\n", s[-3], (-2)[s], *(s-1));
				
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char *s = "stringadiprova";
				char **p = &s;
				
				printf("%c%c%c\n", *(p[0]+1), *(*p+2), p[0][3]);
				
				return 0;
			}
		#endif
	#endif
