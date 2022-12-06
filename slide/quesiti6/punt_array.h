	#ifdef SLIDE__PUNT_ARRAY
		#ifndef slide
			#define slide
		#endif
		#if ES == 21
			#define exec
			#include <stdio.h>

			int main() {
				int x = 2, y = 3;
				int *p = &x;
				int *q = &y;
				
				q[x-y+1] += p[x-x];
				
				printf("%d %d\n",x,y);
				
				return 0;
			}
		#elif ES == 22
			#define exec
			#include <stdio.h>

			int main() {
				int x = 2, y = 3;
				int *p = &x;
				int *q = &y;
				
				p    = q;
				0[p] = *&x;
				
				printf("%d %d\n",x,y);
				
				return 0;
			}
		#elif ES == 23
			#define exec
			#include <stdio.h>

			int main() {
				int A[] = {1,2,3};
				int *p = A;
				
				printf("%d %d\n", *p, *A);
				return 0;
			}
		#elif ES == 24
			#define exec
			#include <stdio.h>

			int main() {
				int A[] = {1,2,3};
				int *p = A;
				
				printf("%d\n", *(p+1));
				return 0;
			}
		#elif ES == 25
			#define exec
			#include <stdio.h>

			int main() {
				int A[] = {1,2,3};
				int *p = A + 1;
				
				printf("%d\n", *(p+1));
				return 0;
			}
		#elif ES == 26
			#define exec
			#include <stdio.h>

			void f(int *A) {
				printf("%d\n",A[0]);
			}

			int main() {
				int A[] = {1,2,3};
				
				f(A+1);
				return 0;
			}
		#elif ES == 27
			#define exec
			#include <stdio.h>

			int *f(void) {
				int A[] = {1,2,3};
				return A+1;
			}
			
			int main() {
				int *A = f();
				printf("%d\n",A[0]);
				return 0;
			}
		#elif ES == 28
			#define exec
			#include <stdio.h>

			int *f(int *A) {
				return A+1;
			}
			
			int main() {
				int A[] = {1,2,3};
				
				printf("%d\n",f(A+1)[0]);
				return 0;
			}
		#elif ES == 29
			#define exec
			#include <stdio.h>

			void f(int *p, int n) {
				int *q = p+n-1;
				while(p<q) {
					*p = *(p+1);
					 p++;
				}
			}
			
			int main() {
				int A[] = {1,2,3};
				
				f(A,3);
				printf("%d\n", *A);
				return 0;
			}
		#elif ES == 30
			#define exec
			#include <stdio.h>

			int f(int *A, int n) {
				if(n<=1) return *A;
				else     return *A+f(A+1,n-1);
			}
			
			int main() {
				int A[] = {1,2,3};
				
				printf("%d\n", f(A,3));
				return 0;
			}
		#elif ES == 31
			#define exec
			#include <stdio.h>

			int main() {
				int A[]     = {1,2,3};
				int (*p)[3] = &A;
				
				printf("%d\n", *p[0]);
				return 0;
			}
		#elif ES == 32
			#define exec
			#include <stdio.h>

			int main() {
				int A[]     = {1,2,3};
				int (*p)[3] = &A;
				
				printf("%d\n", p[0][2]);
				return 0;
			}
		#elif ES == 33
			#define exec
			#include <stdio.h>

			int main() {
				int A[]     = {1,2,3};
				int (*p)[3] = &A;
				
				printf("%d\n", **p);
				return 0;
			}
		#elif ES == 34
			#define exec
			#include <stdio.h>

			int main() {
				int A[] = {1,2,3};
				int **p = &A;
				
				printf("%d\n", **p);
				return 0;
			}
		#elif ES == 35
			#define exec
			#include <stdio.h>

			/* primo elemento di A all'indirizzo 0x1000 */
			int main() {
				char A[5];
				char *p      = A;
				char (*q)[5] = &A;
			
				printf("%p %p\n",(void *)(p+1),(void *)(q+1));
			/*
				printf("%p %p\n",(void *)(p+1-A+0x1000),(void *)((char *)(q+1)-(char *)q+0x1000));
			*/
				return 0;
			}
		#elif ES == 36
			#define exec
			#include <stdio.h>

			int main() {
				int A[2][2] = {{1,2},{3,4}};
				int (*p)[2] = A;
				int (*q)[1] = A;
				
				printf("%d %d\n", p[1][1], q[1][1]);
				
				return 0;
			}
		#elif ES == 37
			#define exec
			#include <stdio.h>

			int main() {
				int A[2][2] = {{1,2},{3,4}};
				int (*p)[2] = A;
				int (*q)[1] = A;
				
				printf("%d %d\n", *(p[1]+1), *(q+1)[1]);
				
				return 0;
			}
		#elif ES == 38
			#define exec
			#include <stdio.h>

			int main() {
				int A[2][2] = {{1,2},{3,4}};
				
				if(A[1][0] == **(A+1))
					printf("0\n");
				else
					printf("1\n");
				return 0;
			}
		#elif ES == 39
			#define exec
			#include <stdio.h>

			int main() {
				int A[2][2] = {{1,2},{3,4}};
				int (*p)[1] = A;
				
				printf("%d %d %d %d\n", p[0][0], p[0][1], p[1][0], p[1][1]);
				return 0;
			}
		#elif ES == 40
			#define exec
			#include <stdio.h>

			int main() {
				int A[2][2] = {{1,2},{3,4}};
				int (*p)[1] = A;
				
				printf("%d %d %d %d\n", **p, **(p+1), **(p+2), **(p+3));
				return 0;
			}
		#endif
	#endif
