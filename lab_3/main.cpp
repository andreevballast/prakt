#include "price.h"

// Тесты
#define TAP_COMPILE
#include "libtap\cpp_tap.h" // подключает заголовочные файлы библиотеки (указывать в тех исходных файлах, где создаются тесты)

int main(int, char *[]) {
  using namespace std;

  plan_tests(5); // указываем количество тестов
  // тесты:
  // ok(x,msg) - тест проходит если условие x выполняется, msg - название теста
  // ok1(x) - тоже что и ok(x,msg), в качестве названия автоматически подставляется текст условия
  // тесты на обычное использование
  ok1(price("abc")==6);
  ok1(price("")==0);
  ok1(price(" ")==1);
  ok1(price("qwerty%")==-1);
  ok1(price("Petr, a student, decided to start his own business. He offers "
           "SMS advertising services to the business owners renting offices "
           "in the newly built “Prisma” tower. If an office owner wants to "
           "use the service, he devises a slogan and Petr texts it from his "
           "personal phone to thousands of Ekaterinburg citizens (he "
           "already bought the pirated list of mobile phone numbers). The "
           "cost of each slogan sent is a sum of costs of each character "
           "typed. Cost of an individual character is determined according "
           "to a very simple scheme: each tap at the phone's keyboard costs "
           "1 rouble. Petr's phone doesn't support sophisticated text "
           "input technologies, such as T9, and only the english alphabet "
           "can be used. The “_” character in the table denotes whitespace. "
           "If you want to, for example, type “a”, you need to press the "
           "“1” button once. To type “k”, you press “4” twice. To type “!”, "
           "press “0” three times. Petr has to apply this simple algorithm "
           "to calculate the cost of every slogan he sends. However, Petr "
           "is a very busy man (and, as a matter of fact, doesn't bother to "
           "learn arithmetics, because he's a Philosophy student). You just "
           "have to help Petr, you are his best friend after all.")==-1);
  return exit_status(); // вывод отчета по тестам
}
