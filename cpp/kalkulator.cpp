#include <iostream>
#include <windows.h>

int main()
{

  SetConsoleOutputCP(CP_UTF8); // для руусификации канкулятора
  SetConsoleCP(CP_UTF8);       // для руусификации канкулятора

  std::cout << " 1 сложение 2 вычитание 3 деление 4 умножение" << std::endl;
  int modif;
  std::cin >> modif;
  std::cout << "введи 2 числа" << std::endl;
  int x;
  int y;
  std::cin >> x; // запись 1 числа
  std::cin >> y; // запись 2 числа

  if (modif == 1)
  {
    std::cout << "ответ:" << x + y << std::endl; // сложение
  }

  else if (modif == 2)
  {
    std::cout << "ответ:" << x - y << std::endl; // вычитание
  }

  else if (modif == 3)
  {
    std::cout << "ответ:" << x / y << std::endl; // деление
  }

  else if (modif == 4)
  {
    std::cout << "ответ:" << x * y << std::endl; // умножение
  }

  else
  {
    std::cout << "Не верное число" << std::endl; // если функцию выбрали не верно
  }
  system("pause");
  return 0;
}
