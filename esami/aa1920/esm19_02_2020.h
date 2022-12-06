	#ifdef ESAME__19_02_2020
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x) x-x
			
			int main() {
				printf("%d %d\n", M(M(1+2)), M(M(3)));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 1;
				(x++ || y-1) && (x++ || ~x || !x || --x);
				(y++ || x-1) && (y++ || ~y || !y || --y);
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 1;
				if((x++ || y-1) && (x++ || ~x || !x || --x))
					if((y++ || x-1) && (y++ || ~y || !y || --y))
						printf("%d %d\n", x, y);
					else
						printf("%d %d\n", x, y);
				else
					printf("%d %d\n", x, y);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 1;
				
				while((x++ || y-1) && (x++ || ~x || !x || --x))
					(y++ || x-1) && (y++ || ~y || !y || --y);
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x == 1 || x == -1)
					return -x;
				else if(x < 0)
					return f(-x-1);
				else
					return f(-x+1);
			}
			
			int main() {
				printf("%d %d\n", f(3), f(-3));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int main() {
				char *s1   = "string";
				char s2[]  = "string";
				char s3[6] = "string";
				
				printf("%s\n", s1+5);
				printf("%s\n", s2+5);
				printf("%s\n", s3+5);
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				char *s  = "string";
				
				printf("%c %c %c\n", s[s-s], *(s+2), 2[s+2]);
				
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
