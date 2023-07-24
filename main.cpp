#include <iostream>
#include "koios/koios.hpp"

int main() {
  Koios::Log(
    Koios::Form("Message: ", Koios::GREEN, Koios::BOLD),
    Koios::Form("faile!", Koios::RED, Koios::BOLD)
  );

  return 0;
}