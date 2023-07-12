#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  std::cout << "\n\e[36;1m--------- BUREAUCRAT ---------\e[m\n\n";

  Bureaucrat* lintilla = new Bureaucrat("Lintilla", 2);
  try {
    std::cout << "1: " << *lintilla << std::endl;
    lintilla->upgrade();
    std::cout << "2: " << *lintilla << std::endl;
    lintilla->upgrade();
    std::cout << "3: " << *lintilla << std::endl;
    lintilla->upgrade();
    std::cout << "4: " << *lintilla << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  delete lintilla;

  std::cout << std::endl;

  Bureaucrat* marvin = new Bureaucrat("Marvin", 10);
  try {
    std::cout << "1: " << *marvin << std::endl;
    marvin->upgrade();
    std::cout << "2: " << *marvin << std::endl;
    marvin->upgrade();
    std::cout << "3: " << *marvin << std::endl;
    marvin->upgrade();
    std::cout << "4: " << *marvin << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  delete marvin;

  std::cout << std::endl;

  Bureaucrat* eddie = new Bureaucrat("Eddie", 145);
  try {
    std::cout << "1: " << *eddie << std::endl;
    eddie->downgrade();
    std::cout << "2: " << *eddie << std::endl;
    eddie->downgrade();
    std::cout << "3: " << *eddie << std::endl;
    eddie->downgrade();
    std::cout << "4: " << *eddie << std::endl;
    eddie->downgrade();
    std::cout << "5: " << *eddie << std::endl;
    eddie->downgrade();
    std::cout << "6: " << *eddie << std::endl;
    eddie->downgrade();
    std::cout << "7: " << *eddie << std::endl;
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  delete eddie;

  std::cout << std::endl;

  try {
    Bureaucrat ford("Ford", 151);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    Bureaucrat ford("Ford", -1);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << "\n\n\e[36;1m--------- AForm ---------\e[m\n\n";

  Bureaucrat* zaphod = new Bureaucrat("Zaphod", 150);
  Bureaucrat* prosser = new Bureaucrat("Prosser", 140);
  Bureaucrat* rob = new Bureaucrat("Rob", 100);
  Bureaucrat* arthur = new Bureaucrat("Arthur", 1);

  std::cout << std::endl;

  std::cout << *zaphod << std::endl;
  std::cout << *prosser << std::endl;
  std::cout << *rob << std::endl;
  std::cout << *arthur << std::endl;

  std::cout << std::endl;

  ShrubberyCreationForm* garden = new ShrubberyCreationForm("garden");
  RobotomyRequestForm* neighbor = new RobotomyRequestForm("neighbor");
  PresidentialPardonForm* dumble = new PresidentialPardonForm("dumble");

  std::cout << std::endl;

  std::cout << *garden << std::endl;
  std::cout << *neighbor << std::endl;
  std::cout << *dumble << std::endl;

  std::cout << std::endl;

  try {
    rob->executeForm(*garden);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  try {
    zaphod->signForm(*garden);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  try {
    prosser->signForm(*garden);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << *garden << std::endl;
  try {
    prosser->executeForm(*garden);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  try {
    rob->executeForm(*garden);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    arthur->signForm(*neighbor);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  try {
    arthur->executeForm(*neighbor);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;

  try {
    arthur->signForm(*dumble);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  try {
    arthur->executeForm(*dumble);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;

  delete garden;
  delete neighbor;
  delete dumble;

  std::cout << std::endl;

  delete zaphod;
  delete prosser;
  delete rob;
  delete arthur;

  return 0;
}
