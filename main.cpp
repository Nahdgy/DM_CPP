#include <string>
#include "mylib.hpp"
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
int i = 0;

    std::cout << "Merci de rentrer un nombre entier relatif : " << std::endl;
    std::cin >> i;
    std::cout << "La valeur absolue de " << i << " est de "<< abs(i) << std::endl;
    return 0;

}
int name(int argc, char** argv)
{
    string fullname = [];
    int j = 0;
    std::cout <<"Rentrez votre Nom, Prénom : " << std::endl;
    std::cin >> fullname;
    std::cout << "Bonjour" << fullname <<" !"<< std::endl;
    std::cout <<"Rentrez âge : " << std::endl;
    std::cin >> j;
    std::cout << "Super vous êtes"<< age (j) <<  std::endl;
    return 0;

}
