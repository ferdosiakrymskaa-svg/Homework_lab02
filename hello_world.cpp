#include <iostream>//Библиотека для ввода\вывода
#include <string>//Библиотека для работы со строками


int main()
{
    std::string name;//Переменная, хранящая имя пользователя(value, which save user name)
    std::cout << "Input your name: ";//Печатает комментарий, который говорит, что пользователю необходимо ввести
    std::cin >> name;//Ввод имени пользователя
    std::cout << "Hello world from "<<name << std::endl;//Вывод программы
    return 0;
}
