#include <iostream>
#include <string>
#include <map>
#include "price.h"
//
using namespace std;
//
int Price(string iLozung) {
  if (iLozung.size() > 1000) {
    return -1;
  }
  map<char, int> symbol;
  //
  symbol['a'] = 1;
  symbol['b'] = 2;
  symbol['c'] = 3;
  symbol['d'] = 1;
  symbol['e'] = 2;
  symbol['f'] = 3;
  symbol['g'] = 1;
  symbol['h'] = 2;
  symbol['i'] = 3;
  symbol['j'] = 1;
  symbol['k'] = 2;
  symbol['l'] = 3;
  symbol['m'] = 1;
  symbol['n'] = 2;
  symbol['o'] = 3;
  symbol['p'] = 1;
  symbol['q'] = 2;
  symbol['r'] = 3;
  symbol['s'] = 1;
  symbol['t'] = 2;
  symbol['u'] = 3;
  symbol['v'] = 1;
  symbol['w'] = 2;
  symbol['x'] = 3;
  symbol['y'] = 1;
  symbol['z'] = 2;
  symbol[' '] = 1;
  symbol['.'] = 1;
  symbol[','] = 2;
  symbol['!'] = 3;
  //
  int price = 0;
  for (int i = 0; i < iLozung.size(); i++) {
    if (symbol.count(iLozung[i]) == 0) {
      return -1;
    }
    price = price + symbol[iLozung[i]];
  }
  //
  return price;
}
