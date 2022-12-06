	#ifdef SLIDE__VISIB_IDENTF
		#ifndef slide
			#define slide
		#endif
		#if ES == 41
			#define exec

			typedef struct S {
				int x;
			} S;
			
			typedef union U {
				int x;
			} S;
		#elif ES == 42
			#define exec

			typedef int A, B, C;
			
			void A(void) {
				int B;
				struct C {
					int A;
				};
			}
		#elif ES == 43
			#define exec

			struct A {
				int A;
			};
			
			int A;
			
			void A(void) {
				int A;
				struct A {
					int A;
				};
			}
		#elif ES == 44
			#define exec

			struct A {
				int A;
			};
			
			void A(void) {
				enum A {A};
				struct A x;
				x.A = A;
			}
		#elif ES == 45
			#define exec
			struct S {int x;};

			struct S F(void) {
				struct S {int x;} s = {-1};
				return s;
			}
		#elif ES == 46
			#define exec
			#include <stdio.h>

			enum A {B, A};
			
			int main() {
				enum A {A, B};
				enum A x = A;
				
				printf("%d\n", x);
				
				return 0;
			}
		#elif ES == 47
			#define exec
			#include <stdio.h>

			int A = -1;
			
			int main() {
				enum A {A, B};
				enum A x = A;
				
				printf("%d\n", x);
				
				return 0;
			}
		#elif ES == 48
			#define exec
			#include <stdio.h>

			enum A {A, B};
			
			int main() {
				int A = 1;
				int x = A;
				
				printf("%d\n", x);
				
				return 0;
			}
		#elif ES == 49
			#define exec
			#include <stdio.h>

			typedef union {int x; double y;} X;
			
			int main() {
				typedef struct {int x; double y;} X;
				
				X a;
				a.x = 1;
				a.y = 1;
				printf("%d %.1f\n", a.x, a.y);
				return 0;
			}
		#elif ES == 50
			#define exec
			#include <stdio.h>

			typedef struct {int x; double y;} X;
			
			int main() {
				typedef union {int x; double y;} X;
				
				X a;
				a.x = 1;
				a.y = 1;
				printf("%d %.1f\n", a.x, a.y);
				return 0;
			}
		#endif
	#endif
