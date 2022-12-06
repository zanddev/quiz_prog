	#ifdef ESAME__14_01_2020
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define M(x) x*x
			
			int main() {
				printf("%d %d\n", M(M(1+1)), M(M(2)));
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 0;
				(x-- || y--) && (--x || --y);
				(x++ && y++) || (++x && ++y);
				
				printf("%d %d\n", x, y);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				int x = 0, y = 0;
				
				if((x-- || y--) && (--x || --y))
					printf("%d %d\n", x+1 , y+1);
				else if((x++ && y++) || (++x && ++y))
					printf("%d %d\n", x+2 , y+2);
				else
					printf("%d %d\n", x+3 , y+3);
				
				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				int i = 0, j = 0;
				
				for(; i < 2; i++)
					for(; j < 2; j++)
						printf("%d\n", i+j);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			double f(int x) {
				if(x == 0)
					return 1;
				else if(x < 0)
					return 0.5*f(x+1);
				else
					return 2*f(x-1);
			}
			
			int main() {
				printf("%f\n", f(-2));
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int main() {
				int A[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
				int (*p)[3] = A;
				int (*q)[5] = A;
				
				printf("%d %d\n", p[1][2], q[1][2]);
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			int main() {
				char *p = "Stringa di test";
				
				printf("%s %s %s\n", p+11, p+15, p+20);
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>

			int main() {
				int A[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
				int (*p)[3][4] = &A;
				int (*q)[5][4] = &A;
				
				printf("%d %d\n", p[0][1][2], q[0][1][2]);
				return 0;
			}
		#endif
	#endif
