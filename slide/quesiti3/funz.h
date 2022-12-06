	#ifdef SLIDE__FUNZ
		#define slide
		#if ES == 1
			#define exec
			#include <stdio.h>

			double float(int x) {
				return (double)x;
			}
			
			int main() {
				printf("%f\n",float(10));
				return 10;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			double f(int x); {
				return x+1;;
			}
			
			int main() {
				printf("%d\n",f(10.1));
				return 0;
			}
		#elif ES == 3
			#define exec

			double f(int x) {
				return x+1;;
			};
			
			int main() {
				printf("%d\n",f(10.1));;
				return 0;;
			};
		#elif ES == 4
			#define exec

			int f(int x);
			
			int main() {
				printf("%d\n",f(10.1));
				return 0;
			}
			
			double f(int x) {
				return x+1;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			int main() {
				printf("%d\n",f(10.1));
			}
			
			double f(int x) {
				return x+1;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				for(x = 0; x < 10; x++);
				return x;
			}
			
			int main() {
				int x;
				
				x = f(100);				
				printf("%d\n",x);
				
				return 0;	
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int f(int x) {
				for(x = 0; x < 10; x++)
					return x;
				return x+1;
			}
			
			int main() {
				int x;
				
				x = f(100);				
				printf("%d\n",x);
				
				return 0;	
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int f(int x) {
				for(x = 0; x; x++)
					return x;
				return x+1;
			}
			
			int main() {
				int x;
				
				x = f(100);				
				printf("%d\n",x);
				
				return 0;	
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>

			int f(int x) {
				int i, y;
				for(i = 0; i < x; i++)
					y = i;
				return y;
			}
			
			int main() {
				int x;
				
				x = f(2);				
				printf("%d\n",x);
				
				return 0;	
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>

			int f(int x) {
				int i, y;
				for(i = 0; i < x; i++)
					y = i;
				return y;
			}
			
			int main() {
				int x;
				
				x = f(0);				
				printf("%d\n",x);
				
				return 0;	
			}
		#elif ES == 11
			#define exec
			#include <stdio.h>

			int f(int y) {
				if(y > 0) return y-1;
			}
			
			int main() {
				int x, y;
				
				x = f(1);
				y = f(x);				
				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 12
			#define exec
			#include <stdio.h>

			int f(double x) {
				return x;
			}
			
			int main() {
				double i;
				for(i = 0.2; i < 5.2; i++)
					printf("%.1f\n", (double)f(i));
				return 0;	
			}
		#elif ES == 13
			#define exec
			#include <stdio.h>

			void f(void) {
				static int x = 0;
				printf("%d\n",++x);
			}
			
			int main() {
				int i = 0;
				
				for(i = 1; i <= 5; i++)
					f();
				return 0;	
			}
		#elif ES == 14
			#define exec
			#include <stdio.h>

			void f(int x, int y) {
				printf("%d %d\n",x,y);
			}
			
			int main() {
				int i = 0;
				
				f(i,++i);
				return 0;	
			}
		#elif ES == 15
			#define exec
			#include <stdio.h>

			int x = 0;
			
			int f(int y) {
				return x+y;
			}
			
			int main() {
				printf("%d\n",f(x++));
				return 0;	
			}
		#elif ES == 16
			#define exec
			#include <stdio.h>

			int x = 0;
			
			int f(int y) {
				return x+y;
			}
			
			int main() {
				printf("%d\n",f(++x));
				return 0;	
			}
		#elif ES == 17
			#define exec
			#include <stdio.h>

			int f(int y) {
				static int x = 1;
				return x += y;
			}
			
			int main() {
				int x;
				
				x = f(1);
				x = f(x);
				printf("%d\n",x);
				
				return 0;	
			}
		#elif ES == 18
			#define exec
			#include <stdio.h>

			int f(int x, int y) {
				return x + y;
			}
			
			int main() {
				int x, y;
				
				x = y = 1;
				
				x = f(f(x,y),f(x,y));
				y = f(f(x,y),f(x,y));
				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 19
			#define exec
			#include <stdio.h>

			int f(int x) {
				return ++x;
			}
			
			int main() {
				int x = 0;
				
				x = f(f(x) ? x-2 : x+2);
				printf("%d\n",x);
				
				return 0;	
			}
		#elif ES == 20
			#define exec
			#include <stdio.h>

			int x = 0;

			int f(int x) {
				return ++x;
			}
			
			int main() {
				int y = f(f(x) ? (x-=2) : (x+=2));

				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 21
			#define exec
			#include <stdio.h>

			int x = 0;

			int f(int y) {
				return ++x;
			}
			
			int main() {
				int y = f(f(x) ? (x-=2) : (x+=2));

				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 22
			#define exec
			#include <stdio.h>

			int x = 0;

			int f(int y) {
				return x++;
			}
			
			int main() {
				int y = f(f(x) ? (x-=2) : (x+=2));

				printf("%d %d\n",x,y);
				
				return 0;	
			}
		#elif ES == 23
			#define exec
			#include <stdio.h>

			unsigned int f(unsigned int x, unsigned int y) {
				int r = 0;
				while(x>=y) {
					r++;
					x -= y;
				}
				return r;
			}
			
			int main() {
				printf("%u\n",f(7,2));
				
				return 0;	
			}
		#elif ES == 24
			#define exec
			#include <stdio.h>

			int f(int x, int y) {
				int s = y >= 0 ? 1: -1;
				while(y != 0) {
					x -= s;
					y -= s;
				}
				return x;
			}
			
			int main() {
				printf("%d\n",f(-7,-2));
				
				return 0;	
			}
		#elif ES == 25
			#define exec
			#include <stdio.h>

			int f(int x, int y) {
				int s = y >= 0 ? 1: -1;
				int r = 0;
				while(y != 0) {
					r += s*x;
					y -= s;
				}
				return r;
			}
			
			int main() {
				printf("%d\n",f(5,-3));
				
				return 0;	
			}
		#endif
	#endif
