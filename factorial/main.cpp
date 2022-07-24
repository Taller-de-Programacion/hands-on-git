#include <iostream>
#include <cstdlib>

char factorial(char num) {
    if (num == 0)
        return 1;

    return num * factorial(num-1);
}

int main(int argc, char *argv[]) {
    std::cout << factorial(atoi(argv[1])) << "\n";
    return 0;
}
