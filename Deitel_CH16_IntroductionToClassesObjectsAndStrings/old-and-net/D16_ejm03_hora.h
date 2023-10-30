/*
    Declaracion de la clase hora 
*/

#ifndef D16_EJM03_HORA_H            // evita inclusiones multiples 
#define D16_EJM03_HORA_H            // del archivo de encabezado

class Hora{
    public:
        Hora();                             // constructor
        void estableceHora(int, int, int);  // establece hora, minuto, segundo
        void imprimeMilitar();              // imprime la hora en formato militar
        void imprimeEstandar();             // imprime la hora en formato estandar 

    private:
        int hora;       // 0 - 23
        int minuto;     // 0 - 59
        int segundo;    // 0 - 59
};

#endif