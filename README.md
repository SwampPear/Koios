<p align="center">
  <img alt="Koios Logo" src="assets/koios.svg" style="width: 80%">   
</p>

<hr>

Koios is a microscopic, single header C++ library for building terminal utilities. See below for usage ↓

### Usage

```
#include <koios/koios.hpp>

int main() {
  Koios::Log(
    Koios::Form("Message: ", Koios::GREEN),
    Koios::Form("hello!", Koios::RED)
  )

  return 0;
}
```

For the Python version of Koios, navigate [here](https://github.com/SwampPear/KoiosPy)
