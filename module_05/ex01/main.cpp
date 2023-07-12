#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

  std::cout << "\n\n\e[36;1m--------- FORM ---------\e[m\n\n";

  Bureaucrat* zaphod = new Bureaucrat("Zaphod", 130);
  Bureaucrat* prosser = new Bureaucrat("Prosser", 15);
  Form* rob = new Form("Rob", 30, 10);

  std::cout << std::endl;

  std::cout << *rob;
  std::cout << std::endl;
  try {
    zaphod->signForm(*rob);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  try {
    prosser->signForm(*rob);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << *rob;

  std::cout << std::endl;

  try {
    rob->beSigned(*zaphod);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  try {
    rob->beSigned(*prosser);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }

  std::cout << std::endl;

  delete zaphod;
  delete prosser;
  delete rob;

  return 0;
}