	#ifdef ESAME__29_01_2019
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define POST_DECR(x) x--
			#define PRE_INCR(x) ++x
			
			int main() {
				int x = 0, y = 0, z = 0;
				
				printf("%d\n", PRE_INCR(x-1)  * PRE_INCR(y+2));
				printf("%d\n", POST_DECR(2+y) * POST_DECR(z));
				
			/*	printf("%d %d %d\n", x, y, z);
			*/	return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1, y = 2, z = 0;
				
				printf("%d\n", ++x && ++y);
				printf("%d\n", y-- && z--);
				
			/*	printf("%d %d %d\n", x, y, z);
			*/	return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1, y = 2, z = 0;
				
				if((++x && ++y) || (y-- && z--))
					printf("%d %d %d\n", ++x, ++y, ++z);
				else
					printf("%d %d %d\n", --x, --y, --z);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1, y = 2, z = 0;
				
				while(!((++x && ++y) || (y-- && z--)));
				
				printf("%d %d %d\n", x, y, z);
				
				return 0;
			}
		#elif ES == 5
			#define exec

			int x(int x) {
				struct x {int x;} x;
				return x;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x, int y, int z) {
				if(y < 0) {
					return z;
				} else {
					return f(x,y-x,z+1);
				}
			}
			
			int main() {
				printf("%d\n", f(3,10,0));
				
				return 0;
			}
		#elif ES == 7
			#define exec

			typedef struct x {
				x *x;
			} x;
			
			struct y {
				struct y *y;
			} y;
			
			struct {
				struct z;
			} z;
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "String";
				printf("%c%c%c\n", *(s+5), *(s+3), *s);
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>
			#include <string.h>

			void print(char *s) {
				if(*s) {
					print(s+1);
					printf("%c", *s);
				}
			}
			
			int main() {
				print("String"); printf("\n");
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			void print(char **s) {
				if(**s) {
					char *p = *s+1;
					print(&p);
					printf("%c", **s);
				}
			}
			
			int main() {
				char *s = "String", *n = "\n";
				print(&s); print(&n);
				
				return 0;
			}
		#endif
	#endif
