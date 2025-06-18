#include <stdio.h>

const char* sign_of(int x) {
	    if (x > 0) {
		            return "positive";
			        } else if (x == 0) {
					        return "zero";
						    } else {
							            return "negative";
								        }
}

int main() {
	    int test_values[] = {10, 0, -5, 42, -1};
	        int size = sizeof(test_values) / sizeof(test_values[0]);

		    for (int i = 0; i < size; i++) {
			            int val = test_values[i];
				            printf("%d is %s\n", val, sign_of(val));
					        }

		        return 0;
}
