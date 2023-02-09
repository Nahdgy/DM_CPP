#include "mylib.hpp"
int abs (int x)
{
    return x < 0 ? -x : x;
}
int age (int x)
{
    return x < 18 ? "jeune" :"ça va...";
    return x < 35 ? "ça va" :"vous allez bientôt mourir";
}
