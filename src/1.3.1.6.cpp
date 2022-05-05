// Lección 2
// 1.3.1.6. Función today
#include <iostream>
using namespace std;
int today(int year, int month, int day)
{
    string aux_year = to_string(year);
    string aux_month = month < 10 ? "0" + to_string(month) : to_string(month);
    string aux_day = day < 10 ? "0" + to_string(day) : to_string(day);
    return stoi(aux_year + aux_month + aux_day);
}
// asigna la fecha actual a los parametros dia, mes y anio
void getDate(int &dia, int &mes, int &anio)
{
    // fecha actual expresada en segundos
    time_t timestamp;
    time(&timestamp);
    // separo la fecha actual en atributos
    struct tm *fechaActual = localtime(&timestamp);
    dia = fechaActual->tm_mday;
    mes = fechaActual->tm_mon + 1;
    anio = fechaActual->tm_year + 1900;
}
int main()
{
    int d, m, a;
    getDate(d, m, a);
    cout << today(a, m, d) << endl;
    return 0;
}
