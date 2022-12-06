	#ifdef SLIDE__TYPE_UNION
		#ifndef slide
			#define slide
		#endif
		#if ES == 21
			#define exec

			union A {int x = 1;};
			union B {int x;};
			union C {int x;};
			
			union A a;
			union B b = 1;
			union C c = {1};
		#elif ES == 22
			#define exec

			union U {int x};
			
			
			union U a = {1}, b = {2}, c = {3};
		#elif ES == 23
			#define exec

			union A {int x;};
			union B {int x;};
			union C {int x;};
			
			int main() {
				union A a;
				union B b;
				union C c;
				
				a.x = 0;
				b   = a;
				c   = b;
				return 0;
			};
		#elif ES == 24
			#define exec
			union U {int x;};

			int main() {
				union U a, b, c;
				
				a.x = 0;
				b   = {0};
				c   = a;
				return 0;
			};
		#elif ES == 25
			#define exec
			union U {int x;};

			int main() {
				union U a, b, c;
				
				a.x = 0;
				b   = a;
				c   = a+b;
			};
		#elif ES == 26
			#define exec
			#include <stdio.h>

			union U {int x; int y;};
			
			int main() {
				union U u = {-1};
				
				printf("%d\n", u.y);
				return 0;
			}
		#elif ES == 27
			#define exec
			#include <stdio.h>

			union U {int x; double y;};
			
			int main() {
				union U u = {-1};
				
				printf("%f\n", u.y);
				return 0;
			}
		#elif ES == 28
			#define exec
			#include <stdio.h>

			union U {char x; int y; double z;};
			
			int main() {
				union U u;
				
				if(sizeof(union U) < sizeof(u.x))
					printf("1\n");
				else
					printf("0\n");
				return 0;
			}
		#elif ES == 29
			#define exec
			#include <stdio.h>

			struct {
				int x;
				union {int a; double b;} type;
			} y;
			
			int main() {
				y.type.b = 1.1;
				y.x      = 1;
				
				if(y.x)
					printf("%d\n", y.type.a);
				else
					printf("%.1f\n", y.type.b);
				return 0;
			}
		#elif ES == 30
			#define exec
			#include <stdio.h>

			struct {
				int x;
				union {int a; double b;} type;
			} y;
			
			int main() {
				y.type.b = 1.1;
				y.x      = 0;
				
				if(y.x)
					printf("%d\n", y.type.a);
				else
					printf("%.1f\n", y.type.b);
				return 0;
			}
		#endif
	#endif
