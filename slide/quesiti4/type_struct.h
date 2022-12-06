	#ifdef SLIDE__TYPE_STRUCT
		#ifndef slide
			#define slide
		#endif
		#if ES == 11
			#define exec

			struct A {int x = 1;};
			struct B {int x;};
			struct C {int x;};
			
			struct A a;
			struct B b = 1;
			struct C c = {1};
		#elif ES == 12
			#define exec

			struct S {int x};
			
			
			struct S a = {1}, b = {2}, c = {3};
		#elif ES == 13
			#define exec

			struct A {int x;};
			struct B {int x;};
			struct C {int x;};
			
			int main() {
				struct A a;
				struct B b;
				struct C c;
				
				a.x = 0;
				b   = a;
				c   = b;
				return 0;
			};
		#elif ES == 14
			#define exec
			struct S {int x;};

			int main() {
				struct S a, b, c;
				
				a.x = 0;
				b   = {0};
				c   = a;
				return 0;
			};
		#elif ES == 15
			#define exec
			struct S {int x;};
			
			int main() {
				struct S a, b, c;
				
				a.x = 0;
				b   = a;
				c   = a+b;
			};
		#elif ES == 16
			#define exec
			#include <stdio.h>

			struct S1 {
				int x;
				int y;
			};
			
			struct S2 {
				struct S1 x;
				int y;
			};
			
			int main() {
				struct S2 a = {{2}};
				
				printf("%d %d %d\n", a.x.x, a.x.y, a.y);
				
				return 0;
			}
		#elif ES == 17
			#define exec
			#include <stdio.h>

			struct S1 {
				int x;
				int y;
			};
			
			struct S2 {
				struct S1 x;
				int y;
			};
			
			int main() {
				struct S2 a = {{2.1, 1.1}};
				
				printf("%d %d %d\n", a.x.x, a.x.y, a.y);
				
				return 0;
			}
		#elif ES == 18
			#define exec
			#include <stdio.h>

			struct S {int x;};
			
			struct S f(struct S a) {
				a.x += 1;
				return a;
			};
			
			int main() {
				struct S a = {0};
				struct S b = f(a);
				
				printf("%d %d\n", a.x, b.x);
				
				return 0;
			}
		#elif ES == 19
			#define exec
			#include <stdio.h>

			struct S {int x;} a = {0}, b;
			
			struct S f(struct S a) {
				a.x += 1;
				return a;
			};
			
			int main() {
				b = f(b);
				
				printf("%d %d\n", a.x, b.x);
				
				return 0;
			}
		#elif ES == 20
			#define exec
			#include <stdio.h>
			
			struct S {
				int x: 1;
				int y: 2;
			};
			
			int main() {
				struct S a = {2,5};
				
				printf("%d %d\n", a.x, a.y);
				
				return 0;
			}
		#endif
	#endif
