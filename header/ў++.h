#ifndef Бульба
#define Бульба

#ifdef _WIN32
#include <Windows.h>
#define моўная_кадоўка setlocale(LC_ALL, "be");//SetConsoleOutputCP(1251)
#else
#include <unistd.h>
#define моўная_кадоўка
#endif

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

#define бацька int main
#define выкарыстоўваць using
#define обозвать typedef
#define Беларусь std 
#define казаць cout 
#define слухаць cin
#define вярнуць return 

#define рабіць do 
#define пакуль while
#define дзеля for

#define калі if 
#define інакш else

#define клас class
#define структура struct
#define перапіс enum

#define стоп break
#define працягваць continue
#define перабор switch //пераключэнне
#define выпадак case
#define стандартны default

#define праўда true
#define хлусня false // непраўда

#define канец endl
#define новы new
#define выдаліць delete
#define туды_куды_не_ведаю nullptr
#define НІЧОГА NULL
#define лёс rand
#define лёсавызначальны srand
#define у_радок to_string
#define шырь setw
#define канстанта const
#define моц pow
#define кінуць throw
#define выключэнне exception
#define чытаць_паток ifstream
#define пісаць_паток ofstream
#define паток fstream
#define сябар friend
#define перайсці goto
#define шаблон template
#define назва_тыпу typename
#define прыватны private
#define публічны public
#define сяброўскі protected
#define убудаваны inline
#define статычны static
#define гэты this
#define спрабаваць try
#define злавіць catch
#define прастора_імёнаў namespace
#define адкрыты open
#define закрыты close
#define аўта auto
#define статычнае_прывядзенне static_cast
#define зазірнуць peek
#define пара pair
#define першы first
#define другі second
#define аператар operator
#define перамясціць move

#define памылка exception
#define што what

#define час time

#define зачэрпнуць getline
#define добра good
#define няўдача fail
#define вось_і_ўсё eof
#define віў eof
#define прыток_Бульбы ostream
#define адток_Бульбы istream
#define абмен swap
#define адшчыкнуць get

выкарыстоўваць цэлы = int;
выкарыстоўваць двайны = double;
выкарыстоўваць дробавы = float;
выкарыстоўваць літара = char;
выкарыстоўваць шмат_букаў = Беларусь::string;
выкарыстоўваць пустэча = void;
выкарыстоўваць кароткі = short;
выкарыстоўваць доўгі = long;
выкарыстоўваць вельмі_доўгі = long long;
выкарыстоўваць мерка = size_t;
выкарыстоўваць двайковы = bool;

выкарыстоўваць аднабокі_цэлы = unsigned int;
выкарыстоўваць аднабокая_літара = unsigned char;
выкарыстоўваць аднабокі_кароткі = unsigned short;
выкарыстоўваць аднабокі_доўгі = unsigned long;
выкарыстоўваць аднабокі_вельмі_доўгі = unsigned long long;

// дадаць рахунак

#include <queue>

#define чарга queue
#define крайні back
#define размясціць emplace
#define пуста empty
#define пярэдні front
#define лопнуць pop
#define прыляпіць push
#define памер size
#define атрымаць_кантэйнер _Get_container

// дадаць прастора_імёнаў Бабруйск

#endif
