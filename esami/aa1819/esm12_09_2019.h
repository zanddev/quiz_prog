	#ifdef ESAME__12_09_2019
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define POST_DECR(x) x--
			#define PRE_INCR(x) ++x
			
			int main() {
				int x = 0;
				
				printf("%d\n", PRE_INCR(x-1)  * PRE_INCR(x+1));
				printf("%d\n", POST_DECR(1-x) * POST_DECR(x+1));
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = -1, z = -2;
				
				++x && ++y;
				y-- && z--;
				printf("%d %d %d\n", x, y, z);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = -1, z = -2;
				
				if(++x && ++y)
				if(y-- && z--)
					printf("%d %d %d\n", x, y, z);
				else
					printf("%d %d %d\n", x+1, y+1, z);
				else
					printf("%d %d %d\n", x-1, y-1, z);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				double x = 0.0, y = -1.0;
				
				while((!y) > x)
					printf("%d %d\n",(int)++x,(int)++y);
				
				printf("%d %d\n",(int)++x,(int)++y);
				return 0;
			}
		#elif ES == 5
			#define exec

			int x(int x) {
				double x;
				return x;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			unsigned int f(unsigned int x) {
				if(x < 2)
					return x;
				else
					return f(f(x-1));
			}
			
			int main() {
				printf("%u\n", f(4));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			typedef struct {int x; int y;} x;
			
			int main() {
				x x = {1};
				
				printf("%d %d\n", x.x, x.y);
				
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char *S1    = "Stringa1";
				char  S2[8] = "Stringa2";
				
				printf("%d %d\n", sizeof(S1) == sizeof(char *),  (int)strlen(S1));
				printf("%d %d\n", sizeof(S2) == sizeof(char [8]),(int)strlen(S2));
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				char *S1    = "Stringa1";
				char  S2[8] = "Stringa2";
				
				printf("%s\n", S1+6);
				printf("%s\n", S2+6);
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int main() {
				char *S1     = "Stringa1";
				char  S2[8]  = "Stringa2";
				char **p     = &S1;
				char (*q)[8] = &S2;
				
				printf("%s\n", p[0]+6);
				printf("%s\n", q[0]+6);
				
				return 0;
			}
		#endif
	#endif
