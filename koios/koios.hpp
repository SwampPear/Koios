#pragma once

#include <iostream>
#include <type_traits>
#include <sstream>

class Koios {
  public:
    static constexpr char *GREEN      = (char*)"\033[92m";
    static constexpr char *YELLOW     = (char*)"\033[93m";
    static constexpr char *RED        = (char*)"\033[91m";
    static constexpr char *BOLD       = (char*)"\033[1m";
    static constexpr char *UNDERLINE  = (char*)"\033[4m";

  public:
    /**
     * @brief Ouputs a styled string.
     * @param args variadic collection of Forms
     */
    template<class... Args>
    static void Log(Args... args) {
      std::ostringstream stream;
      ((stream << args), ...);        // fold unpack args
      stream << std::endl;

      std::cout << std::move(stream).str();
    }

    /**
     * @brief Assembles a styled string object.
     * @param message content of string
     * @param args variadic collection of attributes
     */
    template<class... Args>
    static std::string Form(std::string message, Args... args) {
      std::ostringstream stream;
      ((stream << args), ...);        // fold unpack args
      stream << message << ASCII_END;         
      stream << "\033[0m";            // ASCII end code

      return std::move(stream).str();
    }
  private:
    static constexpr char *ASCII_END = (char*)"\033[0m"; // ASCII end code
};