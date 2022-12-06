	#ifdef SLIDE__FUNZ_RIC
		#define slide
		#if ES == 26
			#define exec
			#include <stdio.h>

			void f(int x) {
				if(x > 0) {
					f(x-1);
					printf("%d\n",x);
				}
			}
			
			int main() {
				f(3);
				return 0;
			}
		#elif ES == 27
			#define exec
			#include <stdio.h>

			void f(int x) {
				if(x > 0) {
					printf("%d\n",x);
					f(x-1);
				}
			}
			
			int main() {
				f(3);
				return 0;
			}
		#elif ES == 28
			#define exec
			#include <stdio.h>

			void f(unsigned int x) {
				if(x > 0) {
					printf("%d\n",x);
					f(x-1);
					printf("%d\n",x);
				}
			}
			
			int main() {
				f(3);
				return 0;
			}
		#elif ES == 29
			#define exec
			#include <stdio.h>

			void f(int x) {
				int s = x > 0 ? 1 : -1;
				if(x != 0) {
					printf("%d\n",-s*x);
					f(x-s);
					printf("%d\n",s*x);
				}
			}
			
			int main() {
				f(3);
				return 0;
			}
		#elif ES == 30
			#define exec
			#include <stdio.h>

			void f(unsigned int x) {
				if(x >= 0) {
					x = x % 2;
					printf("%d\n",x);
					f(x+1);
				}
			}
			
			int main() {
				f(2);
				return 0;
			}
		#elif ES == 31
			#define exec
			#include <stdio.h>

			int f(int x) {
				int s = x < 0 ? 1 : -1;
				if(x==0) return 0;
				else     return 1+f(x+s);
			}
			
			int main() {			
				printf("%d\n",f(-2));
				
				return 0;	
			}
		#elif ES == 32
			#define exec
			#include <stdio.h>

			int f(int x) {
				int s = x < 0 ? 1 : -1;
				if(x==0) return 0;
				else     return s+f(x+s);
			}
			
			int main() {			
				printf("%d\n",f(2));
				
				return 0;	
			}
		#elif ES == 33
			#define exec
			#include <stdio.h>

			int f(unsigned int x, unsigned int y) {
				if(x == 0 && y > 0 ) return 1;
				if(x >= 0 && y == 0) return 0;
				return f(x-1,y-1);
			}
			
			int main() {
				printf("%d\n",f(3,3));
				
				return 0;	
			}
		#elif ES == 34
			#define exec
			#include <stdio.h>

			int f(unsigned int x, unsigned int y) {
				if(x == 0 && y >= 0) return 1;
				if(x > 0  && y == 0) return 0;
				return f(x-1,y-1);
			}
			
			int main() {
				printf("%d\n",f(3,3));
				
				return 0;	
			}
		#elif ES == 35
			#define exec
			#include <stdio.h>

			int f(unsigned int x, unsigned int y) {
				if(x == 0 && y == 0) return 1;
				if(x == 0 && y >  0) return 0;
				if(x > 0  && y == 0) return 0;
				return f(x-1,y-1);
			}
			
			int main() {
				printf("%d\n",f(3,2));
				
				return 0;	
			}
		#elif ES == 36
			#define exec
			#include <stdio.h>

			int f(int x) {
				int s = x > 0 ? 1 : -1;
				if(x == 1 || x == -1) return 0;
				if(x == 0)            return 1;
				return f(x-2*s);
			}
			
			int main() {				
				printf("%d\n",f(-2));
				
				return 0;	
			}
		#elif ES == 37
			#define exec
			#include <stdio.h>

			int f(int x) {
				int s = x > 0 ? 1 : -1;
				if(x == 1 || x == -1) return 1;
				if(x == 0)            return 0;
				return f(x-2*s);
			}
			
			int main() {				
				printf("%d\n",f(-2));
				
				return 0;	
			}
		#elif ES == 38
			#define exec
			#include <stdio.h>

			unsigned int f(unsigned int x, unsigned int y) {
				if(x<y) return 0;
				else    return 1+f(x-y,y);
			}
			
			int main() {
				printf("%u\n",f(7,2));

				return 0;	
			}
		#elif ES == 39
			#define exec
			#include <stdio.h>

			unsigned int f(unsigned int x, unsigned int y) {
				if(x<y) return x;
				else    return f(x-y,y);
			}
			
			int main() {
				printf("%u\n",f(7,2));

				return 0;	
			}
		#elif ES == 40
			#define exec
			#include <stdio.h>

			int f(int x, int y) {
				int s = y >= 0 ? 1 : -1;
				if(y == 0) return x;
				else       return s+f(x,y-s);
			}
			
			int main() {
				printf("%d\n",f(-7,-2));
				
				return 0;	
			}
		#elif ES == 41
			#define exec
			#include <stdio.h>

			int f(int x, int y) {
				int s = y >= 0 ? 1 : -1;
				if(y == 0) return x;
				else       return f(x+s,y-s);
			}
			
			int main() {
				printf("%d\n",f(-7,-2));
				
				return 0;	
			}
		#elif ES == 42
			#define exec
			#include <stdio.h>

			int f(int x, int y) {
				int s = y >= 0 ? 1 : -1;
				if(y == 0) return x;
				else       return f(x,y-s)-s;
			}
			
			int main() {
				printf("%d\n",f(-7,-2));
				
				return 0;	
			}
		#elif ES == 43
			#define exec
			#include <stdio.h>

			int f(int x, int y) {
				int s = y >= 0 ? 1 : -1;
				if(y == 0) return x;
				else       return f(x-s,y-s);
			}
			
			int main() {
				printf("%d\n",f(-7,-2));
				
				return 0;	
			}
		#elif ES == 44
			#define exec
			#include <stdio.h>

			int f(int x, int y) {
				int s = y >= 0 ? 1 : -1;
				if(y == 0) return 0;
				else       return s*x+f(x,y-s);
			}
			
			int main() {
				printf("%d\n",f(5,-3));
				
				return 0;	
			}
		#elif ES == 45
			#define exec
			#include <stdio.h>

			int f(int x) {
				int s = x > 0 ? 1 : -1;
				if(x == 0) return 0;
				else       return s*2+f(x-s);
			}
			
			int main() {
				printf("%d\n",f(-5));
				
				return 0;	
			}
		#elif ES == 46
			#define exec
			#include <stdio.h>

			unsigned int f(unsigned int x) {
				if(x == 0) return 1;
				else       return 2*f(x-1);
			}
			
			int main() {
				printf("%d\n",f(3));
				
				return 0;	
			}
		#elif ES == 47
			#define exec
			#include <stdio.h>

			unsigned int f(unsigned int x) {
				if(x == 0) return 1;
				else       return 3*f(x-1);
			}
			
			int main() {
				printf("%u\n",f(3));
				
				return 0;	
			}
		#elif ES == 48
			#define exec
			#include <stdio.h>

			unsigned int f(unsigned int x) {
				if(x == 0) return 0;
				else       return x+f(x-1);
			}
			
			int main() {
				printf("%u\n",f(4));
				
				return 0;	
			}
		#elif ES == 49
			#define exec
			#include <stdio.h>

			int f(int x) {
				static int s = 1;
				if(x <  0) return 0;
				if(x == 0) return 1;
				return f(x-s++);
			}
			
			int main() {
				printf("%d\n",f(6));
				
				return 0;	
			}
		#elif ES == 50
			#define exec
			#include <stdio.h>

			int f(int x) {
				int s = x >= 0 ? 1: -1;
				if(x == 0) return 0;
				else       return f(x-s) + 2*s*x - 1;
			}
			
			int main() {
				printf("%d\n",f(-3));
				
				return 0;	
			}
		#endif
	#endif
