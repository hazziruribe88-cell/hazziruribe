#include <iostream>

using namespace std;

// Función que calcula el total a pagar aplicando un 10% de descuento si supera 5000
double calcularTotalPagar(int cantidad, double precio) {
    double totalBruto = cantidad * precio;
    if (totalBruto > 5000) {
        return totalBruto * 0.90; // Aplica un 10% de descuento (paga el 90%)
    } else {
        return totalBruto; // Sin descuento
    }
}

// Procedimiento que muestra en pantalla el total a pagar
void mostrarTotal(double totalPagar) {
    cout << "Total a pagar: " << totalPagar << endl;
}

int main() {
    int cantidad = 2;
    double precio = 2500.0;

    cout << "--- EJERCICIO DE DESCUENTO ---" << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Precio: " << precio << endl;

    double resultadoFinal = calcularTotalPagar(cantidad, precio);
    mostrarTotal(resultadoFinal);

    return 0;
}