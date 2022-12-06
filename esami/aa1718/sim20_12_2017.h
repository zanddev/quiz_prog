	#ifdef SIMUL__20_12_2017
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define FRAC(x,y) x*y/x*y
			
			int main() {
				printf("%d\n", FRAC(1+1,1+1));
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 1;
				
				printf("%d\n", (--x || --y) && (--x && --y));
				printf("%d\n", (--x && --y) || (--x || --y));
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				switch(x) {
					printf("C");
					case 0 : printf("i");
					case 1 : printf("a"); break;
					default: printf("o");
				}
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0;
				
				while(--x)
					printf("%d\n", x ? (x += 2) : (x -= 2));
				
				return 0;
			}
		#elif ES == 5
			#define exec

			int A(int A) {
				int A;
				
				return A;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			void f(unsigned int x) {
				if(x > 1) {
					f(x-2);
					f(x-1);
				}
				printf("%d\n", x);
			}
			
			int main() {
				f(2);
				return 0;
			}
		#elif ES == 7
			#define exec
			typedef struct A {
				A *A;
			} A;
		#elif ES == 8
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char S1[] = "Ciao";
				char S2[] = {'C','i','a','o'};
				
				printf("%lu %lu\n" , sizeof(S1), strlen(S1));
				printf("%lu %lu\n" , sizeof(S2), strlen(S2));
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			struct S {
				int x;
				int y;
			};
			
			struct S *create(int x, int y) {
				struct S n;
				n.x = x;
				n.y = y;
				return &n;
			}
			
			int main() {
				struct S *n = create(1,2);
				printf("%d %d\n", n->x, n->y);
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>
			#include <stdlib.h>

			int main() {
				int i, p[100][1];
				int (*q)[5] = p;
				
/*				for(i = 0; i <100; i++) p[0][i] = i;
*/				for(i = 0; i <100; i++) p[i][0] = i;
				
				printf("%d %d\n", q[1][2], q[3][4]);
				return 0;
			}
		#endif
	#endif
