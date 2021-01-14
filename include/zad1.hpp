#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle
{
public:
  Tagliatelle(double l, double w, double r): L(l), W(w), R(r) {};
  Tagliatelle(): L(0.5), W(0.5), R(0.5) {};

  
private:
  double        L=0;
  double        W=0;
  double        R=0;
  const double  C;

public:
  
  double ileMaki(unsigned P) const
  {
    return P * L * W * (1. - R) * C;
  }
};