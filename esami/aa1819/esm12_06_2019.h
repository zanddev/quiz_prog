	#ifdef ESAME__12_06_2019
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define WHILE(start,end) {int i = start; while(i <= end) i++;}
			
			int main() {
				WHILE(10, 20)
					printf("%d\n", i);
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1, y = 1;
				
				x = x/y ? y-- : y++;
				y = y/x ? x-- : x++;
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2, z = 3;
				
				if((++x && ++y && ++z) || (x-- && y-- && z--))
					printf("%d %d %d\n", ++x, ++y, ++z);
				else
					printf("%d %d %d\n", --x, --y, --z);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				double x = 0.0, y = -1.0, z = -2.0;
				
				while((!x) > z)
					printf("%d %d %d\n", (int)++x, (int)++y, (int)++z);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			void f(int x, int y) {
				printf("%d %d\n", x, y);
			}
			
			int main() {
				int x = -1, y = -1;
				
				f(x = x/y ? y-- : y++, y = y/x ? x-- : x++);
				
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x, int y, int z) {
				if(y <= 0) {
					return z;
				} else {
					return f(x,y/x,z+1);
				}
			}
			
			int main() {
				printf("%d\n", f(3,10,0));
				
				return 0;
			}
		#elif ES == 7
			#define exec

			struct {char a;} a = {'a'}, b = {'b'};
			
			int main() {
				struct {int a;} c;
				
				c = b = a;
				
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char *s  = "ciaone";
				printf("%c%c%c\n", *(s+5), *(s+3), *s);
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>
			#include <string.h>

			void print(char *s) {
				if(*s && *(s+1)) {
					print(s+2);
					printf("%c", *s);
				}
			}
			
			int main() {
				print("ciaone");
				printf("\n");
				
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char s[] = "ciaone";
				char (*p)[7] = &s;
				
				printf("%c\n", p[0][1]);
				printf("%c\n", p[0][3]);
				printf("%c\n", p[1][0]);
				
				return 0;
			}
		#endif
	#endif
