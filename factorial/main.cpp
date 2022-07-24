#include <iostream>
#include <string>

int factorial(int num) {
    if (num == 0)
        return 1;

    return num * factorial(num-1);
}

int main(int argc, char *argv[]) {
    int num;
    try {
        num = std::stoi(argv[1]);
    } catch (...) {
        // Si el string parseado es invalido o
        // esta fuera del rango de int, stoi() lanzara
        // una excepcion.
        // Para nosotros es un valor no soportado.
        std::cerr << "Not supported.\n";
        return -1;
    }

    std::cout << factorial(num) << "\n";
    return 0;
}
