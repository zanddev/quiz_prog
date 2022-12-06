	#ifdef SLIDE__PUNT_PUNT
		#ifndef slide
			#define slide
		#endif
		#if ES == 41
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, *p = &x, **q = &p;
				
				printf("%d %d\n", *p, **q);
				return 0;
			}
		#elif ES == 42
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, *p = &x, **q = &p;
				
				printf("%d %d\n", p[0], q[0][0]);
				return 0;
			}
		#elif ES == 43
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2, z = 3;
				int *A[3], **p = A;
				
				A[0] = &x;
				A[1] = &y;
				A[2] = &z;		
				printf("%d %d %d\n", **p, *p[1], p[2][0]);
				return 0;
			}
		#elif ES == 44
			#define exec
			#include <stdio.h>

			int main() {
				int x = 1, y = 2, z = 3;
				int *A[3], **p = A;
				
				A[0] = &x;
				A[1] = &y;
				A[2] = &z;		
				printf("%d %d\n", p[0][0], p[0][1]);
				return 0;
			}
		#elif ES == 45
			#define exec
			#include <stdio.h>

			void f(int **x, int y) {
				if(y == 0)
					*x = NULL;
			}

			int main() {
				int x = 1, *p = &x;
				
				f(&p,0);
				printf("%d\n", *p);
				return 0;
			}
		#elif ES == 46
			#define exec
			#include <stdio.h>

			void f(int **x, int **y) {
				int *tmp = *x;
				*x = *y;
				*y = tmp;
			}

			int main() {
				int x = 1, *p = &x;
				int y = 2, *q = &y;
				
				f(&p,&q);
				printf("%d %d\n", *p, *q);
				return 0;
			}
		#elif ES == 47
			#define exec
			#include <stdio.h>

			int main() {
				int   x =  1;
				int  *p = &x;
				int **q = &p;
				
				p = NULL;
				printf("%d \n", **q);
				return 0;
			}
		#elif ES == 48
			#define exec
			#include <stdio.h>
			#include <stdlib.h>

			int main() {
				/* nessun problema di allocazione con le malloc */
				int  *p = (int *) malloc(sizeof(int));
				int **q = (int **)malloc(sizeof(int *));
				
				*p = 1;
				*q = p;
				 p = NULL;
				printf("%d \n", **q);
				return 0;
			}
		#elif ES == 49
			#define exec
			#include <stdio.h>
			#include <stdlib.h>

			void f(int **p) {
				*p = 1;
			}
			
			int main() {
				int  *p;
				
				f(&p);
				*p = 1;
				printf("%d\n", *p);
				return 0;
			}
		#elif ES == 50
			#define exec
			#include <stdio.h>
			#include <stdlib.h>
			/* nessun problema di allocazione con le malloc */
			void f(int **p) {
				*p = (int *)malloc(sizeof(int));
			}
			
			int main() {
				int  *p;
				
				f(&p);
				*p = 1;
				printf("%d\n", *p);
				return 0;
			}
		#endif
	#endif
