#include <iostream>
#include <queue>

using namespace std;
class Printer
{
    queue<string> q;
public:
    int AddToPrint(string doc)
    {
        q.push(doc);
        return q.size() - 1;
    }
    int Print()
    {
        cout << q.front();
        q.pop();
        return q.size();
    }
};
int main()
{
    setlocale(LC_ALL, "RUS");
    Printer printer;
    cout << "Добавлен документ под номером " << printer.AddToPrint("Первый документ\nПривет мир\n") << endl;
    cout << "Добавлен документ под номером " << printer.AddToPrint("Второй документ\nПока мир\n") << endl;
    cout << "Добавлен документ под номером " << printer.AddToPrint("Третий документ\nСнова привет мир\n") << endl;

    while (printer.Print());
    return 0;
}