	#ifdef SLIDE__ARRAY
		#ifndef slide
			#define slide
		#endif
		#if ES == 1
			#define exec

			#define A 10
			const int B = 10;
			enum {C=10, D, E};
			
			char a[A];
			char b[B];
			char c[C];
		#elif ES == 2
			#define exec

			#define A -10
			#define B 10.0 
			
			char a[A];
			char b[B];
			char c['C'];
		#elif ES == 3
			#define exec
			
			int main() {
				char a[1];
				char b[1];
				char c[1];
				
				a[-1]       = 0;
				b[1.0]      = 0;
				c[(int)1.0] = 0;
				return 0;
			};
		#elif ES == 4
			#define exec

			char a[1] = {1};
			char b[1] = {'a','b','c'};
			char c[1] = {};
		#elif ES == 5
			#define exec

			int main() {
				char a[] = {1};
				char b[];
				char c[] = {'a','b','c'};
				
				return 0;
			};
		#elif ES == 6
			#define exec

			int main() {
				char a[2] = {1};
				char b[2] = {'a','b','c'};
				char c[2];
				
				c = {'a','b'};
				return 0;
			};
		#elif ES == 7
			#define exec

			int main() {
				char a[2][2] = {1};
				char b[ ][2] = {'a','b','c'};
				char c[ ][ ] = {{1,2},{3,4}};
				
				return 0;
			};
		#elif ES == 8
			#define exec

			int main() {
				int a[2][2][] = {{{0}}};
				int b[2][][2] = {{0}};
				int c[][2][2] = {0};
				
				return 0;
			}
		#elif ES == 9
			#define exec

			int main() {
				char a[2] = {1,2};
				char b[2];
				char c[2];
				
				b    = a;
				c[0] = a[0];
				c[1] = a[1];
				return 0;
			}
		#elif ES == 10
			#define exec

			int main() {
				char a[2];
				char b[2][2];
				char c[2][2][2];
				
				a[0]    = 1;
				b[0]    = 1;
				c[0][0] = 1;
				return 0;
			}
		#elif ES == 11
			#define exec

			int f(int a[]);
			
			int g(int a[][]);
		#elif ES == 12
			#define exec

			int [2]    f(int a[2]);
			
			int [2][2] g(int a[2][2]);
		#elif ES == 13
			#define exec
			#include <stdio.h>

			int main() {
				int a[10];

				/* sizeof(int) = 4 */
				if(sizeof(a) == 10)
					printf("1\n");
				else
					printf("0\n");
				return 0;
			}
		#elif ES == 14
			#define exec
			#include <stdio.h>

			int main() {
				int  a[10];
				char b[40];

				/* sizeof(int) = 4 , sizeof(char) = 1 */
				if(sizeof(a) == sizeof(b))
					printf("1\n");
				else
					printf("0\n");
				return 0;
			}
		#elif ES == 15
			#define exec
			#include <stdio.h>

			int main() {
				int a[10];
				int b[20];
				int c[10][20];

				if(sizeof(c) == sizeof(a)+sizeof(b))
					printf("1\n");
				else
					printf("0\n");
				return 0;
			}
		#elif ES == 16
			#define exec
			#include <stdio.h>

			struct S {
				int x;
				int y;
				int z;
			};
			
			int main() {
				struct S a[10];
				
				if(sizeof(a) == 10*sizeof(struct S))
					printf("1\n");
				else
					printf("0\n");
				return 0;
			}
		#elif ES == 17
			#define exec
			#include <stdio.h>

			struct S {
				int x;
				int y;
				int z;
			} s;
			
			int main() {
				struct S a[1];
				
				if(sizeof(a) == sizeof(s))
					printf("1\n");
				else
					printf("0\n");
				return 0;
			}
		#elif ES == 18
			#define exec
			#include <stdio.h>

			int main() {
				int i, a[3] = {1,2,3};
				
				for(i = 1; i <= 3; i++)
					printf("%d\n", a[i]);

				return 0;
			}
		#elif ES == 19
			#define exec
			#include <stdio.h>

			int main() {
				int a[3] = {1,2,3};
				
				printf("%d\n", a[a[0]]);
				printf("%d\n", a[a[a[0]]]);

				return 0;
			}
		#elif ES == 20
			#define exec
			#include <stdio.h>

			int main() {
				int a[3] = {-1,-2,-3};
				
				printf("%d\n", a[a[0]]);
				printf("%d\n", a[a[a[0]]]);

				return 0;
			}
		#elif ES == 21
			#define exec
			#include <stdio.h>

			int main() {
				int i, j, a[2][2] = {{1,2},{3,4}};
				
				for(i=0; i<2; i++)
					for(j=0; j<2; j++)
						printf("%d\n", a[j][i]);

				return 0;
			}
		#elif ES == 22
			#define exec
			#include <stdio.h>

			int main() {
				int a[2][1] = {{1},{2}};
				
				printf("%d\n", a[0][0]);
				printf("%d\n", a[1][0]);
				printf("%p\n", a[0]);
				printf("%p\n", a[1]);

				return 0;
			}
		#elif ES == 23
			#define exec
			#include <stdio.h>

			int main() {
				int a[] = {1,2,3};
				int i = 0, x = 0;
				
				while(i < sizeof(a)/sizeof(a[0]))
					x += a[i++];
				printf("%d\n", x);
				return 0;
			}
		#elif ES == 24
			#define exec
			#include <stdio.h>

			struct S {
				int x;
				int y;
			};

			int main() {
				struct S a[] = {{1,2},{3,4}};
				int i = 0, x = 0;

				while(i < sizeof(a)/sizeof(a[0])) {
					x += a[i].x + a[i].y;
					i++;
				}
				printf("%d\n",x);
				return 0;
			}
		#elif ES == 25
			#define exec
			#include <stdio.h>

			struct S {
				int x[2];
				int y[2];
			};

			int main() {
				struct S a = {{1,2},{3,4}};
				int i = 0, x = 0;

				while(i < sizeof(a.x)/sizeof(a.x[0])) {
					x += a.x[i] + a.y[i];
					i++;
				}
				printf("%d\n",x);
				return 0;
			}
		#elif ES == 26
			#define exec
			#include <stdio.h>

			struct S {
				int x;
				int y;
			};

			int main() {
				struct S a[] = {{1,2},{3,4}};
				int i = 0, x = 0;

				a[0] = a[1];
				while(i < sizeof(a)/sizeof(a[0])) {
					x += a[i].x + a[i].y;
					i++;
				}
				printf("%d\n",x);
				return 0;
			}
		#elif ES == 27
			#define exec
			#include <stdio.h>

			struct S {
				int x[2];
				int y[2];
			};
			int main() {
				struct S a = {{1,2},{3,4}}, b = {{1,1},{1,1}};
				int i = 0, x = 0;

				a = b;
				while(i < sizeof(a.x)/sizeof(b.y[0])) {
					x += a.x[i] + b.y[i];
					i++;
				}
				printf("%d\n",x);
				return 0;
			}
		#elif ES == 28
			#define exec
			#include <stdio.h>
			/* assumere sizeof(int) = 4, sizeof(int *) = 8 */

			void f(int a[20]) {
				if(sizeof(a) == 10*sizeof(int))
					printf("1\n");
				else
					printf("0\n");
			}

			int main() {
				int a[10];
				f(a);
				return 0;
			}
		#elif ES == 29
			#define exec
			#include <stdio.h>

			void f(int a[]) {
				a[0] = 1;
			}

			void g(int y) {
				y = 1;
			}

			int main() {
				int x, y = 0, a[] = {0};
				
				f(a);
				g(y);
				x = y + a[0];
				printf("%d\n", x);
				return 0;
			}
		#elif ES == 30
			#define exec
			#include <stdio.h>

			int f(int a[5]) {
				int i, x = 0;

				for(i = 0; i < 5; i++)
					x += a[i];
				return x;
			}

			int main() {
				int x, a[] = {0,1,2,3,4,5};
				
				x = f(a);
				printf("%d\n", x);
				return 0;
			}
		#elif ES == 31
			#define exec
			#include <stdio.h>

			int f(int a[10]) {
				int i, x = 0;

				for(i = 0; i < 10; i++)
					x += a[i];
				return x;
			}

			int main() {
				int x, a[] = {0,1,2,3,4,5};
				
				x = f(a);
				printf("%d\n", x);
				return 0;
			}
		#elif ES == 32
			#define exec
			#include <stdio.h>

			void f(int a[], int n) {
				int i;
				for(i = 0; i < n; i++) printf("%d ", a[i]);
				printf("\n");
			}
			void g(int a[], int n) {
				int i, j, tmp;
				for(i = 0, j = n-1; i < j; i++, j--) {
					tmp = a[i]; a[i] = a[j]; a[j] = tmp;
				}
			}
			int main() {
				int a[] = {0,1,2,3,4,5};
				g(a,6);
				f(a,6);
				return 0;
			}
		#elif ES == 33
			#define exec
			#include <stdio.h>

			void f(int a[][3], int n) {
				int i;
				for(i = 0; i < n; i++)
					printf("%d ", a[i][0]);
				printf("\n");
			}

			int main() {
				int a[][2] = {{0,1},{2,3},{4,5}};
				
				f(a,3);
				
				return 0;
			}
		#elif ES == 34
			#define exec
			#include <stdio.h>

			void f(int a[][3], int n) {
				int i, j;
				for(i=0; i<n; i++) {
					for(j=0; j<3; j++)
						printf("%d ", a[i][j]);
					printf("\n");
				}
			}

			int main() {
				int a[][2] = {{0,1},{2,3},{4,5}};
				
				f(a,2);
				
				return 0;
			}
		#elif ES == 35
			#define exec
			#include <stdio.h>

			void f(int a[2][2]) {
				int i, j;
				for(i=0; i<2; i++) {
					for(j=0; j<2; j++)
						printf("%d ", a[i][j]);
					printf("\n");
				}
			}

			int main() {
				int a[][2] = {{0,1,2},{3,4,5}};
				
				f(a);
				
				return 0;
			}
		#endif
	#endif
