	#ifdef SLIDE__ISTR_COND
		#define slide
		/** if_else:
		  *  ES.  1-10 */
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define MAX 1
			
			int main() {
				if(MAX == 1);
					MAX = 10;
				
				printf("%d\n",MAX);
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			#define MAX 1
			
			int main() {
				if(MAX==1);{
					printf("%d\n",MAX);
				} else {
					printf("%d\n",MAX+1);
				}
				return 0;
			}
		#elif ES == 3
			#define exec

			int main() {
				int x = 0;
				int y = 10;
				
				if(x == 0)
					x = y % x;
				else if ();
					x = y / 0;
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				if(x = 1) {
					x = 10;
				} else {
					x = 20;
				}
				printf("%d\n",x);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				if(x = 1) {
					x = 10;
				} else; {
					x = 20;
				}
				printf("%d\n",x);
				
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int main() {
				int x = 10, y = 20, z = 30;
				
				if(!x >= 10)
					y += y++;
				else
					z += (x = 10)-10;
				
				printf("%d %d %d\n",x,y,z);
				
				return 0;	
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				int x = 10, y = 20, z = 30;
				
				if(!x <= 10)
					y += y++;
				else
					z += (x=10)-10;
				
				printf("%d %d %d\n",x,y,z);
				return 0;	
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				int x = 10, y = 20, z = 30;
				
				if(x == 10 ? y : z)
					x = y = z++;
				else
					x = y = z;
				
				printf("%d %d %d\n",x,y,z);
				return 0;	
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int main() {
				int x = 10, y = 20, z = 30;
				
				if(x == 10 ? (y -= y) : (z -= z))
					x = y = z++;
				else
					x = y = z;
				
				printf("%d %d %d\n",x,y,z);
				return 0;	
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int main() {
				int x = 10, y = 20, z = 30;
				
				if(x != 10 ? (y -= y) : (z -= z))
					x = y = z++;
				else
					x = y = z;
				
				printf("%d %d %d\n",x,y,z);
				return 0;	
			}
		/** switch:
		  *  ES. 11-20 */
		#elif ES == 11
			#define exec

			int main() {
				int x = 0;
				
				switch(x) {
					double y=10;
					case 0:   printf("0");
					case 1:   printf("1");
					case 1+1: printf("2");
					case 2:   printf("Fine");
				}
				return 0;	
			}
		#elif ES == 12
			#define exec

			int main() {
				int x = 0;
				
				switch(x) {
					double y = 10;
					case x:   printf("%d\n",x);
					case 1:   printf("1");
					case 2:   printf("2");
					case 'a': printf("Fine");
				}
				return 0;	
			}
		#elif ES == 13
			#define exec

			int main() {
				int x = 1, y = 2;
				
				switch(x) {
					case 1: x+=1; break;
					case 2: x++;  break;
					case 3: ++x;  break;
				}
				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 14
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2;
				
				switch(x) {
					y = x;
					case 1: x+=1;
					case 2: x++;
					case 3: ++x;
				}
				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 15
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2;
				
				switch(x) {
					case 1: x+=1;
					case 2: x++;
					case 3: ++x;
					y = x;
				}
				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 16
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2;
				
				switch(x) {
					y = x;
					case 1: x+=1; break;
					case 2: x++;  break;
					case 3: ++x;  break;
					y = x;
				}
				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 17
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2;
				
				switch(y) {
					case 1: x += 1; break;
					case 2: y += x++;
					case 3: ++x;    break;
				}
				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 18
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2;
				
				switch(!y && x) {
					case 1: x += y += 0; break;
					case 2: y += x++;
					case 3: ++x;         break;
				}
				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 19
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2;
				
				switch((!y && x) - 1) {
					case -1:
					case  1: x += y += 0; break;
					case  2: y += x++;
					case  3: ++x;         break;
					default: x=y=0;
				}
				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 20
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2;
				
				switch((!y && x) - 1) {
					case -1:
					case  1: x += y += 0;
					case  2: y += x++;
					case  3: ++x;
					default: x = y = 0;
				}
				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#endif
	#endif
