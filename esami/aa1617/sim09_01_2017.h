	#ifdef SIMUL__09_01_2017
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x,y) (x*2)/y
			
			int main() {
				printf("%d\n",M(1+2,1+2));
				
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 1;
				
				(--x && --y) || (--x || --y);
				printf("%d %d\n", x, y);
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 1;
				
				if((++x && ++y) || (++x || ++y))
					printf("%d\n", x+y);
				else
					printf("%d\n", x-y);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i;
				
				for(i = 6; i; i -= 3)
					printf("%d\n", i++);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int x = 1;
			
			int f() { return ++x; }
			
			int main() {
				printf("%d\n", f()+x);
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			void f(unsigned int x) {
				if(x != 0)
					f(x-1);
				printf("%d\n", x);
			}
			
			int main() {
				f(4);
				return 0;
			}
		#elif ES == 7
			#define exec

			struct x {
				int x;
				struct x *next;
			};
			
			struct x *create(int y) {
				struct x x;
				x->x    = y;
				x->next = 0;
				return &x;
			}
		#elif ES == 8
			#define exec

			int main () {
				int A[] = {1,2,3}, B[] = {4,5,6}, *tmp;
				tmp = A;
				A   = B;
				B   = tmp;
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			struct node {
				int x;
				struct node *next;
			};
			
			struct node *create(int x) {
				struct node n;
				n.x    = x;
				n.next = NULL;
				return &n;
			}
			
			int main() {
				struct node *n = create(1);
				printf("%d\n", n->x);
				return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>
			#include <stdlib.h>

			int main() {
				int *p  = (int *)malloc(sizeof(int));
				int **q = (int **)malloc(sizeof(int *));
				
				*q = p;
				*p = 1;
				
				printf("%d %d\n", *p, **q);
				return 0;
			}
		#endif
	#endif
