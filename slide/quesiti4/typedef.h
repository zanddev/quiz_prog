	#ifdef SLIDE__TYPEDEF
		#ifndef slide
			#define slide
		#endif
		#if ES == 31
			#define exec

			typedef float f, myfloat;
			typedef int char, myint;
			typedef double d, mydouble;
			typedef int p(int x, int y);
		#elif ES == 32
			#define exec

			typedef float  f, myfloat;
			typedef int    i, myint;
			typedef double d, mydouble;
			
			int main() {
				f = 1.1;
				i = 1;
				d = 1.1;
				return 0;
			}
		#elif ES == 33
			#define exec

			typedef struct p {
				int x;
				int y;
			} p1 = {1,2};
			
			typedef struct q {
				double x;
				double y;
			} q1, q2;
		#elif ES == 34
			#define exec
			
			typedef struct S S
			
			typedef union U U;
		#elif ES == 35
			#define exec
			
			typedef int T(int x, int y);
			
			T f = 1;
		#elif ES == 36
			#define exec
			#include <stdio.h>

			typedef int    mydouble;
			typedef double myint;
			
			int main() {
				myint    x = 2;
				mydouble y = 1.5;
				x *= y;
				
				printf("%f\n", x);
				
				return 0;
			}
		#elif ES == 37
			#define exec
			#include <stdio.h>

			typedef int mydouble;
			
			int main() {
				mydouble x = 1.5;
				mydouble y = 1.5;
				double   z;
				z = x;
				x = z*y;
				y = z*x;
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 38
			#define exec
			#include <stdio.h>

			typedef char T1;
			typedef int  T2;
			
			int main() {
				if(sizeof(char)==sizeof(T1) && sizeof(int)==sizeof(T2))
					printf("1\n");
				else
					printf("0\n");
				return 0;
			}
		#elif ES == 39
			#define exec
			#include <stdio.h>

			typedef int T;
			
			T f(void) {
				typedef double T;
				T x = 1.1;
				return x;
			}
			
			int main() {
				T x = f();
				printf("%.1f\n",(double) x);
				return 0;
			}
		#elif ES == 40
			#define exec
			#include <stdio.h>

			typedef double T;
			
			T f() {
				typedef int T;
				T x = 1.1;
				return x;
			}
			
			int main() {
				T x = f();
				printf("%.1f\n",(double) x);
				return 0;
			}
		#endif
	#endif
