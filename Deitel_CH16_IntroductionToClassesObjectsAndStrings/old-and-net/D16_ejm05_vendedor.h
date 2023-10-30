#ifndef D16_EJM05_VENDEDOR_H
#define D16_EJM05_VENDEDOR_H

class Vendedor{
    public:
        Vendedor();                             // constructor
        void obtieneVentasDelUsario();          // obtiene cifras de ventas desde el teclado
        void estableceVentas(int, double);      // El usuario proporciona las cifras de ventas de n mes
        void imprimeVentasAnuales();
    private:
        double totalVentasAnuales();            // funcin de utilidad
        double ventas[12];                      // cifras de ventas de 12 meses
};

#endif