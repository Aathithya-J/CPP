#include <iostream>
using namespace std;
int main() {
  unsigned long int total, bigt = 0;
  char num[] =
      "731671765313306249192251196744265747423553491949349698352031277450632623"
      "957831801698480186947885184385861560789112949495459501737958331952853208"
      "805511125406987471585238630507156932909632952274430435576689664895044524"
      "452316173185640309871112172238311362229893423380308135336276614282806444"
      "486645238749303589072962904915604407723907138105158593079608667017242712"
      "188399879790879227492190169972088809377665727333001053367881220235421809"
      "751254540594752243525849077116705560136048395864467063244157221553975369"
      "781797784617406495514929086256932197846862248283972241375657056057490261"
      "407972968652414535100474821663704844031998900088952434506585412275886668"
      "811642717147992444292823086346567481391912316282458617866458359124566529"
      "476545682848912883142607690042242190226710556263211111093705442175069416"
      "589604080719840385096245544436298123098787992724428490918884580156166097"
      "919133875499200524063689912560717606058861164671094050775410022569831552"
      "0005593572972571636269561882670428252483600823257530420752963450";
  for (int i = 0; i <= 999 - 12; ++i) {
    total = 1;
    for (int j = i; j < i + 13; ++j) {
      int temp = num[j] - 48;
      total *= temp;
    }
    if (total > bigt)
      bigt = total;
  }
  cout << "Total: " << bigt;
  return 0;
}
