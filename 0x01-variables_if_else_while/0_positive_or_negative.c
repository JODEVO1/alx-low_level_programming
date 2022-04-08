#include <stdlib.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		print(n)
		if (n!=0){
		if (n>0){
			print(n + " is positive")}
		else{
			print(n + " is negative")}}
		else{
			print(n + "is zero")}

				return (0);

}
