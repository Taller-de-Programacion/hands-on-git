#include <iostream>
#include <cstring>
#include <string>

int factorial(int num) {
    if (num == 0)
        return 1;

    return num * factorial(num-1);
}

int main(int argc, char *argv[]) {
    int num;
    size_t idx;
    try {
        num = std::stoi(argv[1], &idx);
    } catch (...) {
        // Si el string parseado es invalido o
        // esta fuera del rango de int, stoi() lanzara
        // una excepcion.
        // Para nosotros es un valor no soportado.
        std::cerr << "Not supported.\n";
        return -1;
    }

    // Factorial de numeros negativos no esta soportado
    if (num < 0) {
        std::cerr << "Not supported.\n";
        return -1;
    }

    // El string tiene mas caracteres que los numericos
    // Por ejemplo "0.25" es parseado por stoi como "0"
    // Esto no esta soportado por factorial.
    if (strlen(argv[1]) != idx) {
        std::cerr << "Not supported.\n";
        return -1;
    }

    std::cout << factorial(num) << "\n";
    return 0;
}
