#include <iostream>
using namespace std;
struct Date
{
    int month;
    int year;
    int day;
};
Date date(int y, int m, int d)
{
    Date tmp;
    tmp.day = d;
    tmp.month = m;
    tmp.year = y;
    return tmp;
};

bool dateIsLeap(Date date)
{
    if ((date.year % 4 == 0 || date.year % 400 == 0) && date.year % 100 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
};
int dateToInteger(Date date)
{
    string aux_year = to_string(date.year);
    string aux_month = date.month < 10 ? "0" + to_string(date.month) : to_string(date.month);
    string aux_day = date.day < 10 ? "0" + to_string(date.day) : to_string(date.day);
    return stoi(aux_year + aux_month + aux_day);
};
string dateToString(Date date)
{
    string modified = "";
    modified = modified + to_string(date.day);
    modified = modified + "/";
    modified = modified + to_string(date.month);
    modified = modified + "/";
    modified = modified + to_string(date.year);
    return modified;
}
Date dateGetToday()
{
    Date today;
    time_t timestamp;
    time(&timestamp);
    struct tm *currentDate = localtime(&timestamp);
    today.day = currentDate->tm_mday;
    today.month = currentDate->tm_mon + 1;
    today.year = currentDate->tm_year + 1900;
    return today;
};
Date datePrompt()
{
    int y, m, d;
    cout << "Por favor ingrese una fecha separada por año, mes y dia: " << endl;
    cin >> y >> m >> d;
    Date myDate = date(y, m, d);
    return myDate;
}