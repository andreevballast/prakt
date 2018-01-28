#include <iostream>
#include <string>
#include <map>
#include "price.h"

using namespace std;

int price(string s) {
    if (s.size()>1000){
        return -1;
    }
    map<char, int> a;

      a['a'] = 1;
      a['b'] = 2;
      a['c'] = 3;
      a['d'] = 1;
      a['e'] = 2;
      a['f'] = 3;
      a['g'] = 1;
      a['h'] = 2;
      a['i'] = 3;
      a['j'] = 1;
      a['k'] = 2;
      a['l'] = 3;
      a['m'] = 1;
      a['n'] = 2;
      a['o'] = 3;
      a['p'] = 1;
      a['q'] = 2;
      a['r'] = 3;
      a['s'] = 1;
      a['t'] = 2;
      a['u'] = 3;
      a['v'] = 1;
      a['w'] = 2;
      a['x'] = 3;
      a['y'] = 1;
      a['z'] = 2;
      a[' '] = 1;
      a['.'] = 1;
      a[','] = 2;
      a['!'] = 3;

      int price = 0;
      for (int i = 0; i < s.size(); i++) {
        if (a.count(s[i])==0){
            return -1;
        }
          price = price + a[s[i]];
      }
      return price;
}
