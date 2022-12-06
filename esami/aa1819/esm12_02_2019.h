	#ifdef ESAME__12_02_2019
		#define exam
		#if ES == 1
			#define exec
			#include <stdio.h>

			#define FOR(start,end) {int i = 0; for(i=start; i<=end; i++);}
			
			int main() {
				FOR(10,20)
					printf("%d\n", i);
				return 0;
			}
		#elif ES == 2
			#define exec
			#include <stdio.h>

			int main() {
				int x;
				
				printf("%d %d %d\n", x, x-x, (!x) > -1);
				
				return 0;
			}
		#elif ES == 3
			#define exec
			#include <stdio.h>

			int main() {
				double x = 0.0, y = 0.1, z = -1.0;
				
				if((!(char)1000) > z)
					printf("%d %d %d\n",(int)++x, (int)++y, (int)++z);
				else
					printf("%d %d %d\n",(int)--x, (int)--y, (int)--z);

				return 0;
			}
		#elif ES == 4
			#define exec
			#include <stdio.h>

			int main() {
				double x = 0.0, y = 0.1, z = -1.0;
				
				while((!(char)1000) > z)
					printf("%d %d %d\n",(int)++x, (int)++y, (int)++z);
				
				return 0;
			}
		#elif ES == 5
			#define exec
			#include <stdio.h>

			char f(double x) {
				return x+1;
			}
			
			int main() {
				printf("%d %d\n", !f(255) > 255, !f(255) > -255);
				
				return 0;
			}
		#elif ES == 6
			#define exec
			#include <stdio.h>

			int f(int x) {
				if(x > 0)
					return f(x-1)+f(x-2)+f(x-3);
				else
					return 0;
			}
			
			int main() {
				printf("%d %d\n", f(10),f(100));
				
				return 0;
			}
		#elif ES == 7
			#define exec
			#include <stdio.h>

			typedef struct {int x; int y;} x;
			
			int main() {
				x x = {1};
				
				printf("%d %d\n", x.x, x.y);
				
				return 0;
			}
		#elif ES == 8
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char s[6] = "ciaone";
				printf("%d %d %d\n", (int)sizeof(s), (int)strlen(s), strcmp(s,"ciaone"));
				
				return 0;
			}
		#elif ES == 9
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main() {
				char s[] = "ciaone";
				
				printf("%c%c%c\n", s[s-s], *(s+2), 2[s+2]);
			return 0;
			}
		#elif ES == 10
			#define exec
			#include <stdio.h>
			#include <string.h>

			int main () {
				char s[] = "ciaone";
				char (*p)[6] = &s;
				char (*q)[7] = &s;
				char **r     = &s;
				
				printf("%c\n", p[0][0]);
				printf("%c\n", q[0][1]);
				printf("%c\n", r[0][2]);
				
				return 0;
			}
		#endif
	#endif
