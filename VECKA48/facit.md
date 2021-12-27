### Vecka 48 övningsuppgifter facit

1. Både try-except och try-catch fångar felmeddelanden som genereras vid program exekvering. Dessutom stödjer både att specificera vilket specifikt felmeddelande som ska fångas samt att funktionaliteten att fånga alla. 

2. Se länk

3. a.) 55 b.) Okänt beteende men troligtvist 0. c.) Se nedan
```c++
#include <vector>
#include <stdexcept>
int getValue(int index) {
    std::vector<int> values {11,22,33,44,55,6};
    if(index > 5 || index < 0) {
        throw std::out_of_range("Felaktigt index angivet");
    }
    
    return values[index];
}
```
4. *Throw* används för att kasta ett felmeddelanden. Med andra ord returnera att ett specefikt fel har skett och sedan låta felet fångas upp av den kallande funktionen. *Throw* används för att generera ett felmeddelande där det annars inte hade gjort det. Exempelvis skickas inte ett felmeddelande om ett felaktigt index har använts, då kan throw användas för att artificielt generera ett felmeddelande. 

5. a.) out_of_range b.) overflow_error c.) std::exception::what() returnerar strängen som skickats med när ett felmeddelande har kastats. Se exempel nedan. 
```c++
#include <vector>
#include <stdexcept>
#include <iostream>

int getValue(int index) {
    std::vector<int> values {11,22,33,44,55,6};
    if(index > 5 || index < 0) {
        throw std::out_of_range("Felaktigt index angivet");
    }
    return values[index];
}

int main() {
    try {
        int val = getValue(10);
    }
    catch(std::out_of_range &ab) {
        std::cerr << ab.what() << std::endl;
    }
    return 0;
}
```

6. Nyckelordet *template* betyder att variabeln/funktionen använder sig av en icke-specificerad generisk datatyp. *templates* kan fördelaktiligen användas om exempelvis en funktion ska ha samma beteende för massor olika datatyper. Då kan en *template funktion* spara tid och antal rader kod eftersom att en funktion kan skrivas istället för flertalet. 

7. Funktionsmallar och klassmallar bör i regel definieras i headerfilen eftersom kompilatorn måste initiera flera olika verisioner av koden beorende på parameterar/argument givna till *template* funktionen. Därav för att kompilatorn behöver tillgång till implementationen av metoderna för att kunna initiera de med funktionsmallen/klassmallen. 

https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file 

8. Nackdelar med att arbeta med templates är exempelvis att många kompilatorer saknar tydliga instruktioner för när de detekterar en felatkigt definition av en template. Det blir därmed väldigt svårt att debugga problemet. 

9. 
```c++
template <typename T>
T Max(T a, T b) {
    return (a>b?a:b);
}
```
10. Se exempelkod
11. 5
12. En static variabel innebär att variabeln finns på samma plats i minnet för hela livstiden för programmet. 

Tre use-cases för när static-variabler är användbart:
    - Om det är en static variabel i en funktion är den även tillgänglig för användning utanför funktionen. 
    -  Om en static variabel är deklarerad innuti en klass kommer alla instanser (objekt) dela samma kopia av variabeln. 
    - 

13. Det kommer generas __ funktioner. Och de ser ut följande vis:

```c++
void increment(float &val) {
    ++val;
}

void increment(double &val) {
    ++val;
}

void increment(char &val) {
    ++val;
}

void decrement(int &val) {
    --val;
}

void decrement(double &val) {
    --val;
}

```

14. se exempelkod. *Array.hpp*, *main.cpp*