#include <iostream>

uint sum_of_multiples(uint num);

int main() {
    std::cout << "************************************************************" << '\n';
    std::cout << "*           Sum of multiples of 3 or 5 before num          *" << '\n';
    std::cout << "************************************************************" << '\n';
    std::cout << "\n\n";

    uint num = 0;
    std::cout << "Enter num: ";
    std::cin >> num;
    uint sum = sum_of_multiples(num);
    std::cout << "Sum: " << sum << '\n';
    return 0;
}

uint sum_of_multiples(uint num) {
    uint sum = 0;
    for(int i=3; i<num; i+=3) {
        sum += i;
    }
    for(int i=5; i<num; i+=5) {
        if(i%3 != 0) {
            sum+=i;
        }
    }
    return sum;
}