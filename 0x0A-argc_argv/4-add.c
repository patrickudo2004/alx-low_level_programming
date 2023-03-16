#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	  int sum = 0;

	    for (int i = 1; i < argc; i++) {
		        for (int j = 0; argv[i][j] != '\0'; j++) {
				      if (argv[i][j] < '0' || argv[i][j] > '9') {
					              printf("Error\n");
						              return 1;
							            }
				          }

			    int num = atoi(argv[i]);
			        if (num < 0) {
					      printf("Error\n");
					            return 1;
						        }

				    sum += num;
				      }

	      printf("%d\n", sum);
	        return 0;
}
