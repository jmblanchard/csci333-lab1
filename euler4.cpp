#include <iostream>

long reverse(long l) {
    long reversed_number = 0;
    
    while (l > 0) {
        reversed_number = 10*reversed_number + (l%10);
        l = l / 10;
    }

    return reversed_number;
}

// return 0 if not palindrome, 1 otherwise
int isPalindrome(long l) {
    return l == reverse(l);
}

int main() {
    long largest_palindrome = 0;
    int a, b;
    
    for (a = 100; a <= 999; ++a) {
        for (b = a; b <= 999; ++b) {
            if (isPalindrome(a*b) && a*b > largest_palindrome)
                largest_palindrome = a*b;
        }
    }

    std::cout << "Largest palindrome is " << largest_palindrome;
    std::cout << std::endl;

    return 0;
}
