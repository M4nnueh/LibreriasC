/*para encontrar raíces de ecuaciones no lineales*/
#include <stdio.h>
#include <math.h>

// g(x)
double g(double x) {
    return cos(x); // ejemplo
}

// Método punto fijo
double punto_fijo(double x0, double tol, int max_iter) {
    double x1;

    for(int i = 0; i < max_iter; i++) {
        x1 = g(x0);

        if(fabs(x1 - x0) < tol) {
            return x1;
        }

        x0 = x1;
    }

    return x1;
}

int main() {
    double x0 = 0.5, tol = 0.0001;
    int iter = 100;

    double raiz = punto_fijo(x0, tol, iter);

    printf("Raiz aproximada: %.6lf\n", raiz);

    return 0;
}