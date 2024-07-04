#include <Windows.h>
#include <iostream>
#include <list>

using namespace std;

class Planet {
private:
    string name;
    double radius;
    double weight;
    string location;
public:
    void Filling() {
        cout << "Введите название планеты: ";
        cin >> name;
        cout << "\nВведите радиус планеты: ";
        cin >> radius;
        cout << "\nВведите массу планеты: ";
        cin >> weight;
        cout << "\nВведите систему нахождения планеты: ";
        cin >> location;

        cout << "\nПланета добавлена!" << endl;
    }
    void Info() {
        cout << "Название планеты: " << name << endl;
        cout << "Радиус планеты: " << radius << endl;
        cout << "Масса планеты: " << weight << endl;
        cout << "Система нахождения планеты: " << location << endl << endl;
    }

};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    list<Planet> planets;
    int i = 1;
    while (i != 0) {
        cout << "1. Добавление планеты\n2. Вывод всех планет\n0. Выход из программы\n";
        cin >> i;
        if (i != 0) {
            if (i == 1) {
                Planet planet;
                planet.Filling();
                planets.push_back(planet);
            }
            else if (i == 2) {
                cout << "Выберите сортировку:\n1. По возрастанию\n2. По убыванию\n3. Без сортировки" << endl;
                int msort = 0;
                cin >> msort;
                if (msort == 1) planets.sort();
                if (msort == 2) {
                    planets.sort();
                    reverse(planets.begin(), planets.end());
                }
                for (Planet element : planets) {
                    element.Info();
                }
            }
            else cout << "Такого варианта нет, выберите другой";
        }

    }
}
