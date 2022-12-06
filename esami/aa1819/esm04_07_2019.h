	#ifdef ESAME__04_07_2019
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>
			#include <math.h>

			#define SQUARE(x) x*x
			#define SQRT(x) sqrt(x)
			
			int main() {
				int x = 1, y = 4;
				printf("%d\n", SQUARE(x-1)  * SQUARE(y-2));
				printf("%d\n", (int)SQRT(y) * (int)SQRT(y+5));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2;
				
				x = x/y ? y-- : y++;
				y = y/x ? x-- : x++;
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				double x = 0.1, y = 1.1, z = 2.1;
				
				if(sizeof(char) > y)
					printf("%d %d %d\n",(int)++x,(int)++y,(int)++z);
				else
					printf("%d %d %d\n",(int)--x,(int)--y,(int)--z);
					
					
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = -1, z = -2;
				
				while(!((++x && ++y) || (y-- && z--))) x--;
				
				printf("%d %d %d\n", x, y, z);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			void f(int x, int y) {
				printf("%d %d\n", x, y);
			}
			
			int main() {
				int x = -1, y = -2;
				
				f(x = x/y ? y-- : y++, y = y/x ? x-- : x++);
				
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 1)
					return f(x-1)+f(x-2)+f(x-3);
				else
					return 1;
			}
			
			int main() {
				printf("%d\n", f(3));
				
				return 0;
			}
		#elif ES == 7
			#define exec

			typedef int y;
			
			struct x {
				x x;
			};
			
			struct y {
				y y;
			};
			
			struct z {
				struct z *z;
			};
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char *S1  = "String";
				char S2[] = S1;
				
				printf("%s %s\n", S1, S2);
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char s[]  = "String";
				
				printf("%c%c%c\n", s[s-s], *(s+2), 2[s+2]);
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			void print(char **s) {
				if(**s && *(*s+1)) {
					char *p = *s+2;
					print(&p);
					printf("%c", **s);
				}
			}
			
			int main() {
				char *s = "String";
				print(&s); printf("\n");
				
				return 0;
			}
		#endif
	#endif
