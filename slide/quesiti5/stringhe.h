	#ifdef SLIDE__STRINGHE
		#ifndef slide
			#define slide
		#endif
		#if ES == 36
			#define exec

			int main() {
				char s1[ ] = "ciao";
				char s2[1] = "ciao";
				char s3[5];

				s3 = "ciao";

				return 0;
			}
		#elif ES == 37
			#define exec

			int main() {
				char s1[ ] = 'ciao';
				char s2[1] = "c" "i" "a" "o";
				char s3[5] = "ciao";

				return 0;
			}
		#elif ES == 38
			#define exec
			#include <stdio.h>

			int main() {
				char s[10] = {'c','i','a','o'};
				
				printf("%s\n", s);
				printf("%d\n", (int)sizeof(s));
				return 0;
			}
		#elif ES == 39
			#define exec
			#include <stdio.h>

			int main() {
				char s[4] = {'c','i','a','o'};
				
				printf("%s\n", s);
				printf("%d\n", (int)sizeof(s));
				return 0;
			}
		#elif ES == 40
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = {'c','i','\0','a','o'};
				
				printf("%s\n", s);
				printf("%d\n", (int)sizeof(s));
				return 0;
			}
		#elif ES == 41
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "ci\0ao";
				
				printf("%s\n", s);
				printf("%d\n", (int)sizeof(s));
				return 0;
			}
		#elif ES == 42
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "ciao";
				
				s[2] = '\0';
				printf("%s\n", s);
				printf("%d\n", (int)sizeof(s));
				return 0;
			}
		#elif ES == 43
			#define exec
			#include <stdio.h>

			int main() {
				char s[] = "ci" "\0" "ao";
				
				printf("%s\n", s);
				printf("%d\n", (int)sizeof(s));
				
				return 0;
			}
		#elif ES == 44
			#define exec
			#include <stdio.h>

			int main() {
				char s[4] = "ciao" "\0";
				
				printf("%s\n", s);
				printf("%d\n", (int)sizeof(s));
				
				return 0;
			}
		#elif ES == 45
			#define exec
			#include <stdio.h>

			int main() {
				char s1[5] = "ciao";
				char s2[5] = "ciao";
				
				if(s1 != s2)
					printf("1\n");
				else
					printf("0\n");
				
				return 0;
			}
		#elif ES == 46
			#define exec
			#include <stdio.h>

			int main() {
				char s1[] = {'c','i','a','o'};
				char s2[] = "ciao";
				
				if(s1[4] != s2[4])
					printf("1\n");
				else
					printf("0\n");
				
				return 0;
			}
		#elif ES == 47
			#define exec
			#include <stdio.h>
			/*#include <strlen.h>*/
			#include <string.h>

			int main() {
				char s1[] = {'c','i','a','o'};
				char s2[] = "ciao";
				
				if(strlen(s1) != strlen(s2))
					printf("1\n");
				else
					printf("0\n");
				
				return 0;
			}
		#elif ES == 48
			#define exec
			#include <stdio.h>
			#include <string.h>

			void f(char s1[], const char s2[]) {
				int i, n = strlen(s2)-1;
				for(i = n; i >= 0; i--)
					s1[n-i] = s2[i];
				s1[n+1] = '\0';
			}

			int main() {
				char s1[5], s2[] = "ciao";

				f(s1,s2);
				printf("%s\n",s1);
				
				return 0;
			}
		#elif ES == 49
			#define exec
			#include <stdio.h>
			#include <string.h>

			void f(char s1[], const char s2[]) {
				int i, n = strlen(s2)-1;
				for(i = n; i >= 0; i--)
					s1[n-i] = s2[i];
				s1[n+1] = '\0';
			}

			int main() {
				char s1[] = {'\0'}, s2[] = "oaic";

				f(s1,s2);
				printf("%s\n",s1);
				
				return 0;
			}
		#elif ES == 50
			#define exec
			#include <stdio.h>
			#include <string.h>

			void f(char s1[], const char s2[], int i, int j) {
				if(i >= 0 && j >= 0) {
					s1[i] = s2[j];
					f(s1,s2,i+1,j-1);
				}
			}

			int main() {
				char s1[5] = {'\0'}, s2[] = "ciao";

				f(s1,s2,0,(int)strlen(s2)-1);
				printf("%s\n",s1);
				
				return 0;
			}
		#endif
	#endif
