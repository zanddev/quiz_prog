	#ifdef ESAME__14_09_2020
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x) x/x
			
			int main() {
				printf("%d %d\n", M(M(2+2)), M(M(4)));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 1;
				printf("%d\n", x++ && y++ ? x-- : y--);
				printf("%d\n", --x || --y ? ++x : ++y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 1;
				
				if(x++ && y++ ? x-- : y--)
					printf("%d %d\n", x+1 , y+1);
				else if((--x || --y) ? ++x : ++y)
					printf("%d %d\n", x+2 , y+2);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 1;
				
				while(x++ && y++ ? x-- : y--)
					if(--x || --y ? ++x : ++y)
						printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			double f(int x) {
				if(x == 0)
					return 1;
				else if(x < 0)
					return 0.5*f(x+1);
				else
					return 2*f(x-1);
			}
			
			int main() {
				printf("%.1f %.1f\n", f(-1), f(1));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int main() {
				char *s1   = "ciao";
				char s2[]  = "ciao";
				char s3[3] = "ciao";
				
				printf("%s\n", s1+3);
/*				printf("\'%c\'\n", s2[4]);
*/				printf("%s\n", s2+3);
				printf("%s\n", s3+3);
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "ciao";
				
				printf("%c%c%c\n", (s-s+1)[s+1], *(s+3), 4[s]);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "ciao";
				char (*a)[8] = &s;
				char (*b)[4] = &s;
				char (*c)[2] = &s;
				char (*d)[1] = &s;
				
				printf("%c%c%c%c\n", a[0][3], b[0][0], c[1][0], d[1][0]);
				return 0;
			}
		#endif
	#endif
