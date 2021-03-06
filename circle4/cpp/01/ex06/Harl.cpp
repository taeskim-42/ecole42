#include "Harl.hpp"


void Harl::complain(std::string level) {
  int opt = 0;
  void (Harl::*f[5])(void) = {&Harl::_censored, 
                              &Harl::_debug, 
                              &Harl::_info, 
                              &Harl::_warning,
                              &Harl::_error};
  std::string message[5] = { "CENSORED", "DEBUG", "INFO", "WARNING", "ERROR" };

  for (int i = 1 ; i < 5 ; ++i)
    if (level == message[i])
      opt = i;
  if (!opt) {
    (this->*(f[opt]))();
  } else {
    for (int i = opt ; i < 5 ; ++i)
      (this->*(f[i]))();
  }
}

void Harl::_censored(void) {
  std::cout
    << "[ Probably complaining about insignificant problems ]"
    << std::endl << std::endl;
}

void Harl::_debug(void) {
  std::cout << "[ DEBUG ]" << std::endl;
  std::cout
    << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger."
    << std::endl << "I really do!"
    << std::endl << std::endl;
}

void Harl::_info(void) {
  std::cout << "[ INFO ]" << std::endl;
  std::cout
    << "I cannot believe adding extra bacon costs more money."
    << std::endl << " You didn’t put enough bacon in my burger!"
    << std::endl << "If you did, I wouldn’t be asking for more!"
    << std::endl << std::endl;
}

void Harl::_warning(void) {
  std::cout << "[ WARNING ]" << std::endl;
  std::cout
    << "I think I deserve to have some extra bacon for free."
    << std::endl << "I’ve been coming for years whereas you started working here since last month."
    << std::endl << std::endl;
}

void Harl::_error(void) {
  std::cout << "[ ERROR ]" << std::endl;
  std::cout
    << "This is unacceptable! I want to speak to the manager now."
    << std::endl << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}