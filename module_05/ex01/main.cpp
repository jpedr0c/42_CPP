#include "Bureaucrat.hpp"

int main() {
  Bureaucrat bureaucrat = Bureaucrat("João", 80);
  Form form = Form("School", 50, 25);

  std::cout << bureaucrat << std::endl;
  std::cout << form << std::endl;
  form.beSigned(bureaucrat);
  std::cout << form << std::endl;
  bureaucrat.signForm(form);
}