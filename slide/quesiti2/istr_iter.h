	#ifdef SLIDE__ISTR_ITER
		#define slide
		/** for:
		  *  ES.  21-30 */
		#if ES == 21
			#define exec
			#include <stdio.h>
			
			int main() {
				int i, x = 65;
				
				for(i = 60, i <= x, i++) {
					printf("%d",x);
				}
				return 0;
			}
		#elif ES == 22
			#define exec
			#include <stdio.h>
			
			int main() {
				int x = 65;
				
				for(int i = 60; i <= x; i++) {
					printf("%d\n",x);
				}
				return 0;
			}
		#elif ES == 23
			#define exec
			#include <stdio.h>
			
			int main() {
				int i, x = 0;
				
				for(i = 10, i <= x, i++; ;) {
					printf("%d\n",x);
				}
				return 0;
			}
		#elif ES == 24
			#define exec
			#include <stdio.h>

			int main() {
				int i, x = 0;
				
				for(; i = -10, i <= x, i++ ;) {
					printf("%d\n",x);
				}
				return 0;
			}
		#elif ES == 25
			#define exec
			#include <stdio.h>

			int main() {
				int i, j;
				
				for(i = 0, j = 1; j > 0, i < 10; i++, j++)
					printf("Pippo\n");
				
				return 0;
			}
		#elif ES == 26
			#define exec
			#include <stdio.h>

			int main() {
				int i, j;
				
				for(i = 0, j = 1; i < 10, j > 0; i++, j++)
					printf("Pippo\n");
				return 0;
			}
		#elif ES == 27
			#define exec
			#include <stdio.h>

			int main() {
				int i;
				
				for(i = 8 ; i ; i -= 2)
					printf("Pippo\n");
				return 0;
			}
		#elif ES == 28
			#define exec
			#include <stdio.h>

			int main() {
				int i, x = 0;
				
				for(i = 0 ; i+x; i -= 2) x++;
				
				printf("%d\n",x);
				
				return 0;
			}
		#elif ES == 29
			#define exec
			#include <stdio.h>

			int main() {
				int i, x = 2;
				
				for(i = 0; i+x; i -= 2) x++;
				
				printf("%d\n",x);
				
				return 0;
			}
		#elif ES == 30
			#define exec
			#include <stdio.h>

			int main() {
				int i, x = -1;
				
				for(i = 0 ; x++ ? --i : ++i; );
				
				printf("%d\n",x);
				
				return 0;
			}
		/** while:
		  *  ES.  31-40 */
		#elif ES == 31
			#define exec
			#include <stdio.h>

			int main() {
				int i = 1;
				
				while i++ {
					return ++i;
				}
			}
		#elif ES == 32
			#define exec
			#include <stdio.h>

			int main() {
				double i =  1;
				
				while (i++) {
					printf("%d\n", i%2);
				};
				
				return 0;
			}
		#elif ES == 33
			#define exec
			#include <stdio.h>

			int main() {
				int i = 1;
				
				while(++i <= 5)
					printf("%d\n", i++);
				
				return 0;
			}
		#elif ES == 34
			#define exec
			#include <stdio.h>

			int main() {
				int i = 1;
				
				while(i++ <= 5)
					printf("%d\n", ++i);
				
				return 0;
			}
		#elif ES == 35
			#define exec
			#include <stdio.h>

			int main() {
				int i = 10;
				
				while (--i); {
					printf("%d\n", i % 2);
				};
				
				return 0;
			}
		#elif ES == 36
			#define exec
			#include <stdio.h>

			int main() {
				int i = 8;
				
				while(i) {
					printf("Pippo\n");
					i -= 2;
				}
				
				return 0;
			}
		#elif ES == 37
			#define exec
			#include <stdio.h>

			int main() {
				int i = 9;
				
				while(i) {
					printf("Pippo\n");
					i -= 2;
				}
				
				return 0;
			}
		#elif ES == 38
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1;
				
				while(x++);
				
				printf("%d\n",x);
				
				return 0;
			}
		#elif ES == 39
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1;
				
				while(x++ +1);
				
				printf("%d\n",x);
				
				return 0;
			}
		#elif ES == 40
			#define exec
			#include <stdio.h>

			int main() {
				int i = 0, x = -1;
				
				while(i ? ++x : --x) i -= 2;
				
				printf("%d %d\n",i,x);
				
				return 0;
			}
		/** do_while:
		  *  ES.  41-50 */
		#elif ES == 41
			#define exec
			#include <stdio.h>

			int main() {
				int i = -10;
				
				do {
					i++;
					printf("%d\n",i);
				}
				while(i < 0)
				
				return 0;
			}
		#elif ES == 42
			#define exec
			#include <stdio.h>

			int main() {
				int i = -10;
				
				do {
					i++;
					printf("%d\n",i);
				}
				while i<0;
				
				return 0;
			}
		#elif ES == 43
			#define exec
			#include <stdio.h>

			int main() {
				int x = 4;
				
				do {
					printf("Pippo\n");
				} while(x -= 1);
				
				return 0;
			}
		#elif ES == 44
			#define exec
			#include <stdio.h>

			int main() {
				int x = 4;
				
				do {
					x++;
					printf("Pippo\n");
				} while(x -= 2);
				
				return 0;
			}
		#elif ES == 45
			#define exec
			#include <stdio.h>

			int main() {
				int x = 6;
				
				do {
					printf("%d\n", x -= 2);
				} while(x);
				
				return 0;
			}
		#elif ES == 46
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				do {
					--x;
					printf("%d\n",x);
					x++;
				} while(x>=0);
				
				return 0;
			}
		#elif ES == 47
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				do {
					printf("%d\n",x++);
				} while(x < 5 > 0);
				
				return 0;
			}
		#elif ES == 48
			#define exec
			#include <stdio.h>

			int main() {
				int x = 2;
				
				do {
					printf("%d\n",x--);
				} while(x || x++);
				
				return 0;
			}
		#elif ES == 49
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1;
				
				do {
					printf("%d\n",x--);
				} while(x || ++x);
				
				return 0;
			}
		#elif ES == 50
			#define exec
			#include <stdio.h>

			int main() {
				int x = -1, y= -10;
				
				do {
					y++;
				} while(x ? (x = y+2) : (x = 0));
				
				printf("%d %d\n",x,y);
				
				return 0;
			}
		#endif
	#endif
