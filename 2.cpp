#include <iostream>

using namespace std;
/*!
     \brief Функция, которая выполняет сложенние двух переменных.

            Данная функция возвращает сумму двух переменных x и y, тип возвращаемого значения int.
            В качестве параметров, в функцию передаются два числа типа int.
*/
int f (int x, int y)
{
return (x+y);
}

int main()
{
    cout<<"Hello World"<<endl;
    cout<<"I learn Git"<<endl;
    cout<<"Silence is gold"<<endl;
    cout<<"Welcome home!"<<endl;
    cout<<"Print error!"<<endl;

int a = 53, b = 10;
cout<<f(a, b)<<endl;

return 0;
}
