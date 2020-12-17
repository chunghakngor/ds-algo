
#include <iostream>  
#include <math.h>
// for runtime calc
#include <time.h>
#include <map>
#include <tuple>

using namespace std;

// problem: print out all positive int to the equation a^3 + b^3 == c^3 + d^3

// basic brute force approach
// int main(){
// 	int n = 10;
// 	clock_t tStart = clock();
// 	for (int a = 1; a < n; a++){
// 		for (int b = 1; b < n; b++){
// 			for (int c = 1; c < n; c++){
// 				for (int d = 1; d < n; d++){
// 					if (pow(a, 3) + pow(b, 3) == pow(c, 3) + pow(d, 3)){
// 						printf ("%i %i %i %i \n", a, b, c, d);
// 					}
// 				}
// 			}
// 		}
// 	}
// 	printf("Time taken: %.10fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
// 	return 0;
// }

// attempt 2
// int main(){
// 	int n = 10;
// 	clock_t tStart = clock();
// 	for (int a = 1; a < n; a++){
// 		for (int b = 1; b < n; b++){
// 			for (int c = 1; c < n; c++){
// 				for (int d = 1; d < n; d++){
// 					if (pow(a, 3) + pow(b, 3) == pow(c, 3) + pow(d, 3)){
// 						printf ("%i %i %i %i \n", a, b, c, d);
// 						break;
// 					}
// 				}
// 			}
// 		}
// 	}
// 	printf("Time taken: %.10fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
// 	return 0;
// }

// attempt 3
// int main(){
// 	int n = 10;
// 	clock_t tStart = clock();
// 	for (int a = 1; a < n; a++){
// 		for (int b = 1; b < n; b++){
// 			for (int c = 1; c < n; c++){
// 				int d = pow(pow(a, 3) + pow(b, 3) - pow(c, 3), 1/3);
// 				if (pow(a, 3) + pow(b, 3) == pow(c, 3) + pow(d, 3)){
// 					printf ("%i %i %i %i \n", a, b, c, d);
// 				}
// 			}
// 		}
// 	}
// 	printf("Time taken: %.10fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
// 	return 0;
// }


// attempt 4
int main(){
	int n = 10;
	std::map<int, std::tuple> hash_table;
	clock_t tStart = clock();
	for (int c = 1; c < n; c++){
		for (int d = 1; d < n; d++){
			int result = pow(c, 3) + pow(d, 3);
			hash_table.insert(result, std::make_tuple(c, d));
		}
	}


	printf("Time taken: %.10fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}