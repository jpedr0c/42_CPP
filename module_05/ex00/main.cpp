#include "Bureaucrat.hpp"

int main() {
  std::cout << "\n\e[36;1m----- Test: create -----\e[m\n\n";
  Bureaucrat bureaucrat1 = Bureaucrat("Lintilla", 50);
  std::cout << bureaucrat1 << std::endl;

  std::cout << "\n\e[36;1m----- Test: invalid value -----\e[m\n\n";
  Bureaucrat bureaucrat2 = Bureaucrat("Marvin", 200);
  Bureaucrat bureaucrat3 = Bureaucrat("Marvin", -50);
  std::cout << bureaucrat2 << std::endl;
  std::cout << bureaucrat3 << std::endl;

  std::cout << "\n\e[36;1m----- Test: upgrade and downgrade -----\e[m\n\n";
  Bureaucrat bureaucrat4 = Bureaucrat("Eddie", 3);
  std::cout << "Current: " << bureaucrat4.getGrade() << std::endl;
  bureaucrat4.upgrade();
  std::cout << "Upgrade: " << bureaucrat4.getGrade() << std::endl;
  bureaucrat4.downgrade();
  std::cout << "Downgrade: " << bureaucrat4.getGrade() << std::endl;

  std::cout << "\n\e[36;1m----- Test: upgrade and downgrade in max values -----\e[m\n\n";
  Bureaucrat bureaucrat5 = Bureaucrat("Ford", 150);
  Bureaucrat bureaucrat6 = Bureaucrat("Zaphod", 1);

  std::cout << "Ford bureaucrat value: " << bureaucrat5.getGrade() << std::endl;
  bureaucrat5.downgrade();
  std::cout << "Ford bureaucrat value: " << bureaucrat5.getGrade() << std::endl;

  std::cout << "Zaphod bureaucrat value: " << bureaucrat6.getGrade() << std::endl;
  bureaucrat6.upgrade();
  std::cout << "Zaphod bureaucrat value: " << bureaucrat6.getGrade() << std::endl;
}