	#ifdef ESAME__06_07_2020
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x) x*x
			#define S(x) x+x
			
			int main() {
				printf("%d %d\n", M(S(1+2)), S(M(3)));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 1;
				(x-- || y--) && (--x || --y);
				(x++ && y++) || (++x && ++y);
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 1;
				
				if((x-- || y--) && (-- x || --y))
					printf("%d %d\n", x+1 , y+1);
				else if((x++ && y++) || (++x && ++y))
					printf("%d %d\n", x+2 , y+2);
				else
					printf("%d %d\n", x+3 , y+3);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i = 0, j = 0;
				
				for(; i < 2; i++)
					for(; j < 2; j++)
						printf("%d %d\n", i, j);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x == 0)	   return x;
				else if(x < 0) return f(x+1);
				else		   return f(x-1);
			}
			
			int main() {
				printf("%d %d\n", f(100), f(-100));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char s[] = "ciao";
				printf("%lu %lu\n", sizeof(s), strlen(s));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "ciao";
				
				printf("%c%c%c\n", (s-s)[s], *(s+0), 0[s]);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "ciao";
				char (*a)[4] = &s;
				char (*b)[3] = &s;
				char (*c)[2] = &s;
				char (*d)[1] = &s;
				
				printf("%c%c%c%c\n", a[0][0], b[0][1], c[1][0], d[2][1]);
				return 0;
			}
		#endif
	#endif
