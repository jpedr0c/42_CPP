#include "Bureaucrat.hpp"

int main() {
  std::cout << "\n\e[36;1m----- Test: create -----\e[m\n\n";
  Bureaucrat bureaucrat1 = Bureaucrat("vbureaucrat", 50);
  std::cout << bureaucrat1 << std::endl;

  std::cout << "\n\e[36;1m----- Test: invalid value -----\e[m\n\n";
  Bureaucrat bureaucrat2 = Bureaucrat("ibureaucrat", 200);
  Bureaucrat bureaucrat3 = Bureaucrat("ibureaucrat", -50);
  std::cout << bureaucrat2 << std::endl;
  std::cout << bureaucrat3 << std::endl;

  std::cout << "\n\e[36;1m----- Test: upgrade and downgrade -----\e[m\n\n";
  Bureaucrat bureaucrat4 = Bureaucrat("bureaucrat", 3);
  std::cout << "Current: " << bureaucrat4.getGrade() << std::endl;
  bureaucrat4.upgrade();
  std::cout << "Upgrade: " << bureaucrat4.getGrade() << std::endl;
  bureaucrat4.downgrade();
  std::cout << "Downgrade: " << bureaucrat4.getGrade() << std::endl;

  std::cout << "\n\e[36;1m----- Test: upgrade and downgrade in max values -----\e[m\n\n";
  Bureaucrat bureaucrat5 = Bureaucrat("bureaucrat", 150);
  Bureaucrat bureaucrat6 = Bureaucrat("bureaucrat", 1);

  std::cout << "First bureaucrat value: " << bureaucrat5.getGrade() << std::endl;
  bureaucrat5.downgrade();
  std::cout << "First bureaucrat value: " << bureaucrat5.getGrade() << std::endl;

  std::cout << "Second bureaucrat value: " << bureaucrat6.getGrade() << std::endl;
  bureaucrat6.upgrade();
  std::cout << "Second bureaucrat value: " << bureaucrat6.getGrade() << std::endl;
}