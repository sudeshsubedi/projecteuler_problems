/*
* The sum of the squares of the first ten natural numbers is,
*                   1^2 + 2^2 + ... + 10^2 = 385
* The square of the sum of the first ten natural numbers is,
*                   (1 + 2 + ... + 10)^2 = 55^2 = 3025
* Hence the difference between the sum of the squares of the first ten natural numbers
* and the square of the sum is: 3025 - 385 = 2640
* Find the difference between the sum of the squares of the first
* one hundred natural numbers and the square of the sum.
*
* The formula to calculate dirrerence between sum of squares of first n natural
* number and the square of sum is 
*                   n*( 3*n + 2 )*( n^2 -1 ) / 12
* evaluated by yours truly. See Readme.md for explanation
*/

#include <iostream>

typedef long long ll;

ll sum_square_diff(uint);

int main() {
    std::cout << sum_square_diff(100) << std::endl;
    return 0;
}


ll sum_square_diff(uint n) {
    return n * ( 3*n + 2 ) * ( n*n -1) / 12;
}