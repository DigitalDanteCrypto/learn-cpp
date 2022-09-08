#include <iostream>

int main()
{

  double p;
  double r;
  double s;
  
  double pRate = 0.049;
  double rRate = 0.1305;
  double sRate =  0.1144;

  double dollars;

  std::cout << " Enter number of Colombian Pesos: ";
  std::cin >> p;

  std::cout << " Enter number of Brazilian Reais: ";
  std::cin >> r;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> s;

  dollars =  (p * pRate) + (r * rRate) + (s * sRate);

  std::cout << "Total USD = $" << dollars << "\n";

}
