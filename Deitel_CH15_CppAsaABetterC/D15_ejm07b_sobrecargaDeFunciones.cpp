/*
 Programa : ejm_07_sobrecargaDeFunciones.cpp
 Proposito: Mostrar el uso de funciones sobrecargadas
 */

int square(int x) { return x * x; }

double square(double y) { return y * y; }

void nothing1(int a, float b, char c, int &d) {}

int nothing2(char a, int b, float &c, double &d) { return 0; }

int main() { return 0; }