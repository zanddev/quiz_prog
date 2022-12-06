	#ifdef ESAME__11_01_2021
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y) (x = y++)
			
			int main() {
				int x = 1, y = 1;
				
				M(y,x);
				M(x,x);
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 1, z = 1;
				
				x = (y = (z = z + 1) + 1) + (x = 1);
				printf("%d %d %d\n", x, y, z);
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x, y;
				switch(!x) {
					y = 2;
					case 0:  x = 0;
					case 1:  x = 1;
					default: break;
					x = 2;
				}
				printf("%d %d\n", x, y);
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i = 7;
				
				for(i--; i--; i--)
						printf("%d\n", i--);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 0) {
					x = f(x-2);
					x--;
					x = f(x+2);
				}
				return x;
			}
			
			int main() {
				printf("%d %d\n", f(1), f(3));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int main() {
				char s[6] = "ciaone";
				printf("%lu %lu\n", sizeof("ciaone"), sizeof(s));
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				char *s = "ciaone";
				
				while(*s) s++;
				
				printf("%c%c%c\n", s[-3], (-2)[s], *(s-1));
				
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char *s  = "ciaone";
				char **p = &s;
				
				printf("%c%c%c\n", *(p[0]+1), *(*p+2), p[0][3]);
				
				return 0;
			}
		#endif
	#endif
