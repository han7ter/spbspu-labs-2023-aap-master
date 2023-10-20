#include <iostream>
#include "findCountMinimalMembers.cpp"

int main()
{
  long long answer = 0;
  try {
    answer = findCountMinimalMembers(std::cin, answer);
  } catch (std::logic_error const &error) {
    std::cout << error.what() << "\n";
    return 2;
  }
  std::cout << answer << "\n";
}
