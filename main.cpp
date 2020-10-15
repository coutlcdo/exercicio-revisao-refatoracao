#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1("Joao Snow", 3, 35, 9.5);
  std::cout << eng1 << std::endl;

  Engenheiro eng2("Daniela Targaryen", 1, 30, 8);
  std::cout << eng2 << std::endl;

  Engenheiro eng3("Bruno Stark", 2, 30, 8);
  std::cout << eng3 << std::endl;

  Vendedor vend1("Tonho Lannister", 5000, 20, 6);
  std::cout << vend1 << std::endl;

  Vendedor vend2("Jose Mormont", 3000, 25, 8);
  std::cout << vend2 << std::endl;

  Vendedor vend3("Sonia Stark", 4000, 30, 8);
  std::cout << vend3;

  return 0;
}