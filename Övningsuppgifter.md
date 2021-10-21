
# Övningsuppgifter DV1626 HT21

## Föreläsning 1
### Mainly covering 
- Entrypoint 
- Primitive datatypes
- Variables
- Including headerfiles
- Basic file I/O
- Static array
- std::vector


### Excercises 

1. Starta ett projekt med flera .hpp filer och .cpp filer. Få de att kompileras. 

1. Vad är en kompilator? Vad gör den?

1. Skriv ett program som först tar in en terminal-inmatning och sedan skriver ut 'Hello {inmatning}' i terminalen. 

2. Skriv ett program som konverterar Yen till Dollar. Antalet Yen fås genom terminal-inmatning (TIPS! std::cin). Programmet ska även skriva ut svaret i Dollar i terminalen (TIPS! std::cout).

    1 dollar = 112 Yen

3. Lista minst 3 olikheter mellan C++ och python. Finns det en fördel med det ena eller andra?

4. Vad är skillnaden på en .hpp och .cpp fil?

5. Vad finns det för fördelar med att kompilera programmet innan det körs?

6. Vad kommer följande kodsnutt skriva ut i terminalen?

```
#include <iostream>

int main() {

    char a = '3';
    float b = a + 0.7;
    b += 2;
    int c = b;
    std::cout << a << '\t' << b << '\t' << c << std::endl;
    return 0;
}
```
a.) Gissa först vad som kommer skrivas ut?

b.) Kör programmet. Blev outputen som du trodde?

c.) Förklara för en kurskamrat/annan person varför outputen blir som den blir. 


## Föreläsning 2
### Mainly covering 
- Operators
- Scope
- Conditional statements
- Iteration statements

### Excercises 
1. Skriv ett program som itererar alla element i olika behållare du skapat och skriver ut ett element per rad. Behållaren ska skapas i en headerfil som sedan inkluderas i cpp-filen. 

    a.) Om behållaren är en vektor 

    b.) Är en en statisk array 

    c.) En vector i en vector. Ex.) std::vector<std::vector<int>> vec

2. Skriv ett program som från given fil skriver ut alla rader med mer än 80 karaktärer i terminalen. 

3. I Python-kursen skrev du ett sten-sax-påse spel. Översätt din kod från denna uppgift till c++-kod. Kommentera vad de olika delarna gör.

4. Skriv ett program som byter ut (replaces) på följande whitespaces (mer än ett i rad) och tabs mot enkla från en given fil.

    Länka test fil (fil är skapad)

5. Förklara vad scope är. Varför är detta ett viktigt koncept i C++?

6. Hur många iterationer kommer följande loopar köras?

```
for (int i = 10; i < 1001; ++i) {}
for (int i = 10; i < 1001; i++) {}
for (int i = 10; i <= 100; i+=2) {}
for (;;) {}
for (int i = 100; i > 10; i-=3) {}
for (int i = 0; i > 0; ++i) {} 
```

## Föreläsning 3
### Mainly covering 
- std::string, common functionality
- Split strings
- int to string, std:stoi
- Parts of a function
- Declaration vs. definition 
- Call by value vs reference
- const reference parameter
- array as a parameter 
- Command line arguments (argc, argv)

### Excercises 
1. Vilka delar har en funktion? Beskriv vad varje del gör.

1. Skriv en funktion int_to_string(int integer) som omvandlar en given siffra till en sträng. 

2. Skriv en funktion reverse(std::vector<int> vec) som returnerar en vektor med omvänd ordning.

3. Förklara vad skillnaden mellan declaration och definition är. Sedan skriv om ditt sten-sax-påse program (övn. 2.3) så att variabler deklareras i en seperat headerfil.

4. Vad är en referens i C++? Vad får följande kod för utmatning? (s.51 i C++ boken) 

```
    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << '\t' << ri << std::endl;
```

6. Givet följande kod.  
```
#include <iostream>

func1(int value) {
    ++value;
}

func2(int &value) {
    ++value;
}

int main() {
    int val = 435;
    func1(val);
    std::cout << val << std::endl;
    func2(val);
    std::cout << val << std::endl;
    return 0
}
```
- Vad skiljer funktionerna?
- Vad skrivs ut?

7. Varför bör större behållare kallas som referens in i funktioner? 
8. Vad är ett namespace? Hur kallar man på en funktion inom ett namespace?
10. Vilka av följande definitioner, om några, är ogiltiga? Varför? (tagen från s.51 2.15 i C++-boken)

a.) int ival = 1.01;

b.) int &rval1 = 1.01;

c.) int &rval2 = ival;

d.) int $rval3;

11.  Givet följande kod:
```
int arr[7] = {1,2,3,4,5}
for (int i = 0; i < 8; ++i) {
    std::cout << arr[i] << ' ';
}
std::cout << std::endl;
int arr2[7];
for (int y = 0; y < 5; ++y) {
    arr2[y]=y;
}
for (int i = 0; i < 8; ++i) {
    std::cout << arr2[i] << ' ';
}

Kodensnutten ovan ger följande outputs:
1 2 3 4 5 0 0 0 
0 1 2 3 4 32718 4199184 8
```
- Varför ger de olika outputs? 
- Varför uppstår talen 32718, 4199184, 8 vid iteration genom den andra arrayen?

12. Givet följande kod:
```
#include <iostream>
#include <vector>

std::vector<int>& func() {
    std::vector<int> vec = {1,2,3,2,4,13,4};
    return vec;
}

int main() {
    std::vector<int> var = func();
    for(int i = 0; i < 7; ++i) {
        std::cout << var[i] << std::endl;
    }
}
```
- Prova köra koden. Vad är felmeddelandet? 
- Vad beror det på? 
- Hur bör felet åtgärdas? 

# Inlämning 1 ska klaras med kunskaper ovan


## Föreläsning 4
### Mainly covering 
- Heap and stack
- Reference and pointers
- nullptr
- Pointers to pointers
- new, delete 
- Lifetime of objects (stack vs heap)

### Excercises 
1. a.) Vad är en stack?

    b.) Vad är heapen?

    c.) Förklara skillnaden mellan heap och stack. 
    
    d.) När bör en/ett variabler/objekt definereras på heapen istället för stacken? 

2. Write a function that takes a string of braces, and determines if 
the order of the braces is valid. It should return true if the string 
is valid, and false if it's invalid. (Tagen från CODEWARS)

``` 
    // Example: 

    bool at1 = valid_braces("()");  // True
    bool at2 = valid_braces("[(])");  // False
    bool at3 = valid_braces("[](){}");  // True
    bool at4 = valid_braces("}}]]))}])");   // False
    bool at5 = valid_braces("([{}])");  // True
```

4. Vad är en minnesläcka? Varför bör det undvikas till fullo?
5. Åtgärda följande minnesläckor med *delete* 

a.)

```
int main() {
    
    int a = new int(6);
    int b = new int(5);
    
    return 0;
}
```

b.) 

```
int main() {
    
    int* a = new int(6);
    int** b = a;
    
    return 0;
}
```
c.)

```
int main() {
    
    int** a = new int*[5];
    for(int i = 0; i < 5; ++i) {
        a[i] = new int(i);
    }
    return 0;
}
```

d.)  

```
#include <iostream>

int* func() {
    int* a = new int(6);
    return a;
}

int** arrayify(int* number) {
    int** arr = new int*[*number];
    for(int i = 0; i < *number; ++i) {
        arr[i] = new int[*number];
    }
    return arr;
}

int main() {
    
    int* var = func();
    int** arr = arrayify(var);
    for (int i = 0; i < *var; ++i) {
        for (int j = 0; j < *var; ++j) {
            arr[i][j] = j;
        }
    }
    for (int i = 0; i < *var; ++i) {
        for (int j = 0; j < *var; ++j) {
            std::cout << arr[i][j] << std::endl;
        }varningen
    return 0;
}
```
6. Nämn de olika sorters smart-pointers och när de ska användas. Vad är den största skillnaden mellan smart pointers och vanliga pointers. 

7. Ett vanligt error meddelande vid C++ kodning är *Segmentation Fault*. När uppstår det? Hur kan man debugga detta?

9. Att förstå pekare är viktigt för att klara kursen. Tycker du det fortfrande är svårt att använda pointers? Följ länken och arbeta dig igenom uppgifterna. De är ämnade för C programmering men kan enkelt översättas till C++. 
https://www.w3resource.com/c-programming-exercises/pointer/index.php 

## Föreläsning 5
### Mainly covering 
- Klasser och objekt
- Medlemsfunktioner och medlemsvariabler
- Konstruktor
- this - pekararen
- Hur man får tillgång till medlemsvariabler
- Klasser i .cpp och .hpp
- *private* och *public* medlems variabler

### Excercises 
1. Vad finns det för fördelar med att skapa object istället för att endast använda funktioner? Vilken sorts datatyp är objekt?
2. Beskriv vad inkapsling (eng. encapsulation) är. Vad skiljer *private* och *public*?
1. Vad skiljer en klass och en struct? När brukar man använda struct och vid vilka scenarion brukar klasser användas?
1. Skapa en klass Djur. Klassen ska ha medlemsvariablerna som representerar följande. 
    1. Vilken art det är.
    2. Antal ben
    3. Om den äter kött, växter eller är allätare
    4. Färg på huden/pälsen
    5. Vilket släkte (däggdjur, kräldjur, groddjur, osv.)
    6. Läte 

    Klassen ska även ha följande medlemsfunktioner:
    
    1. roar() : skriv ut i terminalen djurets läte.
    2. eat() : skriv ut i terminalen vad djuret äter 
    3. info() : skriv ut relevant fakta om djuret i en faktaruta

    Klassen ska använda this-pekaren, ha relevant class access och vara uppdelad i en .hpp och .cpp fil.   

4. Skapa en main-funktion som skapar 3 olika objekt av klassen ovan. 
5. Skapa en konstruktor till objektet ovan. Konstruktorn ska ta värden från användaren när det skapas. (Ex. Djur hippo(Hippopotamus, 4, herbavor, osv ...))
6. Skriv ännu en konstruktor till objektet. Denna konstruktor ska vid skapandet av objektet läsa in en fil och utifrån dess innehåll ge värden till de diverse medlemsvariablerna. 
7. Prova att heap-allokera två stycken djur-objekt i din main-funktion. Hur gör du för att ge värden till konstruktorerna?
8. Skapa en flock av ditt djur. Alltså skapa en heapallokerad array som innehåller pekare till djur av samma art. Det ska gå att kalla på medlemsfunktionerna för varje djur i arrayen. Med andra ord, flock_namn[0]->info() ska ge information om det specifika djuret. 

9. Vad är skillnaden på koncepten klass och objekt?

5.  Vad innebär det om:
    
a.) En medlemsvariabel är const?

b.) En medlemsfunktion är markerad const på följande vis?

```
const int Example_func() {
    return 5;
}
```
c.) En medlemsfunktion är markerad const på detta vis?  

```
int Example_func() const {
    return 5;
}
```
d.) Vad är skillnaden mellan användningen av const i b.) och c.) ?

12. Vilket felmeddelande får följande kod när det kompileras? Vad betyder det? Hur hade du löst det?

```
#include <iostream>

const int incrament(int number) const {
    return ++number;
}

int main() {

    int num = 4;
    num = incrament(num);
    std::cout << num << std::endl;
    return 0;
}
```

## Föreläsning 6
### Mainly covering 
- Operator overloading
- Function overloading


### Excercises 
1. Använd koden du skrev i 5.3-5.8. Implementera följande *operator overloads*: 
    1. == operatorn. Om de är av samma art ska det returna true annars false.
    2. << operatorn. Om följande kod används ska info() funktionens output skrivas ut.
    ```
    std::cout << animal_name << std::endl;
    ```
    3. = Assignment operatorn. Om ett djur sätts lika med ett annat ska de därefter vara identiska.

2. Skapa ett zoo för dina djur. Ditt zoo ska vara en klass som tar in ett godtycklig mängd djur från en vector av typen djur (m.a.o std::vector<Djur> animals) i konstruktorn. Konstruktorn ska använda en initialization list. Zoo-klassen ska ha en funktion för att lägga till ett nytt djur, ta bort ett specifikt djur och en funktion som listar alla arter som finns i zoo:t. (Tips! Heap-allokera djuren) 

3. Vad är *getters* och *setters*? När och varför används de? Beskriv en nackdel med de? Varför inte bara göra variabeln publik?

4. Given en klass Foo som är 8 byte stor, en pekare ptr som pekar på ett Foo objekt, och att ptr börjar på adressen 600 (decimalt), vilken adress har ptr efter att följande operationer har utförts (svara decimalt)? Skriv 0 om en eller flera av operationerna inte är acceptabla
```
ptr = ptr + 3;
ptr += 1;
ptr = ptr - 2;
ptr++;
```

## Föreläsning 7
### Mainly covering 
- Copy kontruktorn och copy operator
- Move constructor och move operator
- Destruktor
- Hur man motverkar själv-kopiering
- Hur man skapar default konstruktorer och destruktorer
- Hur man tar bort default konstruktorer och destruktorer


### Excercises 
1. Beskriv med ord vad skillnaden mellan Copy och Move constructorn 
2. När kallas destruktorn? 
1. Vad är rule of three? Rule of five? 
3. När passerar det med att använda default konstruktorn och default destruktorn? 
4. Skapa ett objekt Boll. Bollen ska ha medlemsvariablerna:
    
    a.) radie
    b.) färg
    c.) type (ex. fotboll, handboll, tennisboll, osv.)
    
    Privata medlemsfunktionen:
    
    Volume(), returna volymen på bollen (utgå att bollen har formen av sfär).

    Offentliga medlemsfunktionerna:
    
    Deflate() - Returna volymen luft som frisläpps när en bollspräcks. Objektet ska även förstöras. 
    get_colour() - returnera färgen på bollen.


5. Skapa ett objekt Korg. Detta objekt ska innehålla en godtycklig mängd bollar och ha medlemsfunktionerna:

    Add_ball(Boll boll) - lägg till en boll i korgen.

    Remove_ball(Boll boll) - ta bort en specifik boll i korgen. (Tips! Definiera == operatorn för objektet. Och iterera igenom alla bollar)

    ball_count() - returnera antalet bollar i korgen

    get_colours() - returnera en vektor med alla bollfärger som förekommer. 

6. Vad är skillnaden på en deep och en shallow copy? Vad använder move-construktorn? Copy-konstruktorn?

7. Hur kallas kopy respektive move-konstruktorn?

8. Lägg till en copy-konstruktor för korg objektet. 

9. Lägg till en move-konstruktor för korg objektet. 

10. Vad är själv kopiering och hur kan det motverkas?

1. Givet följande kod:
```
#include <iostream>

class Example {
private:
    int x;
    int y;
public:

    Example(const int i, const int j) : x(i), y(j) {
        std::cout << "Kontruktor kallas" << std::endl;
    }
    
    // copy constructor
    Example(const Example &rhs) {
        x = rhs.x;
        y = rhs.y;
        std::cout << "Kopy-konstruktor kallas" << std::endl;
    }
    // Move constructor
    Example(Example &&rhs) {
        x = (std::__exchange(rhs.x, 0));
        y = (std::__exchange(rhs.y, 0));
        std::cout << "Move-kontruktor kallas" << std::endl;
    }
    
    // copy assignment operator
    Example& operator=(const Example& rhs) {
        if(this != &rhs) {
            x = rhs.x;
            y = rhs.y;
            std::cout << "Copy-asssignment operator kallad" << std::endl; 
        }
        return *this;
    }

    // move assignment operator
    Example& operator=(Example&& rhs) {
        if (this != &rhs) {
            x = std::__exchange(rhs.x, 0);
            y = std::__exchange(rhs.y, 0);
            std::cout << "Move-assignment operator kallad" << std::endl;
        }
        return *this;
    }

    ~Example() {
        std::cout << "Destruktor kallas" << std::endl;
    }

    void print_var() {
        std::cout << this->x << "\t" << this->y << std::endl;
    }

    void incrament() {
        this->x+=1;
        this->y+=1;
    }

};


void print1(Example &obj) {
    obj.print_var();
}

void print2(Example obj) {
    obj.print_var();
}

int main() {

    Example a(5,7);
    // Example b(34,90);
    // Example c(50,20);

    print1(a);
    print2(a);

    Example b = a;
    a.incrament();
    Example c = std::move(b);
    print1(c);
    c.incrament();
    b.incrament();
    print1(b);
    print2(c);
}

```
- Innan du kör programmet. Vad tror du skrivs ut? Varför?
- Kompilera och kör programmet. Hur skilde utskriften från din gissning?
- Använd step-debuggern och gå igenom programmet. 
- För varje utskrift i programmet ge en kort anledning varför det skrivs ut vid just det tillfället.

## Föreläsning 8
### Mainly covering 
- Arv (Inheritance)
- Polimorfism 
- Nyckelorden: *virtual* och *override*
- Abstrakt klasser
- Arvshiarkier
- dynamic_cast för att polimorfera en pekare
- bas klass pekare

### Excercises 
1. Vad är polymorfism? Vad är arv (eng. inheritence)? Hur skiljer sig de åt?
2. Vad är en abstrakt klass? Beskriv skillnaden på en abstrakt klass och en vanlig klass.
3. Vad innebär det om en funktion är rent virtuell?
4. Varför är polymorfism så användbart? Finns det några nackdelar?
5. Hur vet man att en funktion är virtuell?
6. Givet följande medlemsfunktioner, vilka gör klassen abstrakt?
```
a.) 
    virtual std::string output() const = 0;
b.)
    std::string output() const = 0;
c.) 
    virtual std::string output() const;
d.)
    virtual std::string output() = 0;
```
---
7. Gör en egen abstrakta klass Djur. Den ska ha de rent virtuella funktionerna:

    Roar() - Skriv ut följande i terminalen:

```
    The {vilket släkte} roared {Läte}.
```

info() - Skriv ut en faktaruta om djuret.

Den ska även ha medlemsvariablerna:
- Vilken art det är.
- Antal ben
- Om den äter kött, växter eller är allätare
- Läte 

8. Skapa två djur som ärver från den abstrakta klassen djur. Ge de två nyskapde djuren medlemsvariabler som bara gäller de (ex. art, färg, osv.).De nya klasserna ska defineras i två olika headerfiler samt deklareras i två olika .cpp filer.
---
9. Skapa en array av typen Djur som kan ta emot ett godtyckligt antal pekare till objekt som du skapat i uppgiften ovan. Varför kan detta ske?  
---
10. Iterera igenom varje index av arrayen. För varje index kalla på medlemsfunktionerna roar och info. Varför blir inte utskriften som du vill? Använd nu dynamic-cast och transformera pekaren till rätt sort. Får du samma output? Varför inte?
--- 
9. Vad är skillnaden på static_cast() och dynamic_cast? Skriv två funktioner, en som använder static_cast() och en som använder dynamic_cast(). 
1. Givet en array med okänt antal djur av varje art. Skriv ut hur många djur av varje det är. (Tips! Du kan generera randomiserade djur med rand() )

## Föreläsning 9
### Mainly covering 
- enum-klasser
- felhantering med try-catch

### Excercises 
2. I python-kursen användes try-except, kan du se några likheter och olikheter mellan try-except och try-catch?
3. Givet följande kod:

``` 
try {
   std::string("abc").substr(10); 
} catch (std::exception e) { 
     std::cout << e.what(); 
}
```
- Varför fungerar inte felhanteringen nedan som det ska? Svaret kan hittas på följande länk: https://en.cppreference.com/w/cpp/language/try_catch 

4. Givet följande kod:

``` 
void func(int a) {
    int arr[6] = {0};
    try {
        int i = arr[a];
        std::cout << i << std::endl;
    } 
    catch (...) {
        std::cout << "INDEX ERROR" << std::endl;
    }
}
```
- Vad kommer följande kod skriva ut om 4 skickas in i funktionen? 
- Vad kommer följande kod skriva ut om 10 skickas in i funktionen? 
- Skriv om funktionen ovan så att den felhanterar felaktig indexering.

5. *throw* är ett koncept som förekommer inom felhantering. När, hur, varför används det?

7. När passar det att använda fånga *throw* och när är det passande att låta felmeddelandet genererat av *throw* hanteras av användaren? 


## Föreläsning 10
### Mainly covering 
- Templates

### Excercises 
1. Vad är en template? Varför är de användbara? 
2. Varför brukar man definiera templates i header-filer? Kan man skriva de i .cpp filer?
3. Finns det några nackdelar med att använda templates? Motivera!
4. Skriv om följande kod till att använda templates istället. M.a.o ska inte typen som skickas in i funktionen spela roll. Dela även upp programmet i .cpp och .hpp filer. 
```
#include <iostream>
#include <sstream>
#include <vector>

int sumOfMultiples(int n);

int main(int amount, char* cmd_input[])
{
    std::vector<int> int_inp = {};
    for (int i = 1; i < amount; ++i) {
        //convert char to int 
        int temp = std::stoi(cmd_input[i]);
        int_inp.push_back(temp);
     }

    int sum = sumOfMultiples(int_inp[0]);

    std::cout << sum << std::endl;

    return 0;

}

int sumOfMultiples(int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
        if(i%3 == 0 || i%5 == 0)
            sum += i;
     return sum;
 }

```
5. Skriv en funktion som oavsett typ av behållare returnar mängden av element i den. (16.19 section 16.1.3 i boken)
6. När kompileras en template?
7. Vad innebär *initiation* i avseeende på templates?
8. Vad innebär det om en variabel är *static*? Nämn 3 use-cases för static-variabler.  
1. Givet följande kod (uppdelat i .hpp och .cpp fil):
```
template <typename T>
void incrament(T &val) {
    ++val;
}
template <typename T>
void decrament(T &val) {
    --val;
}
```

```
int main() {
    float i = 5.345;
    float j = 54.3452;
    float k = 234.1;
    int l = 52;
    double m = 23.23;
    double n = 22.5;
    char o = 'o';
    char a = 'a';
    char b = 'b';
    char z = 'z';

    incrament(i); 
    incrament(i);
    incrament(j);
    incrament(k);
    decrament(l);
    decrament(m);
    incrament(m);
    incrament(o);
    incrament(z);
    incrament(a);
}
```
- Hur många template-funktioner genereras?
- Vilka är de?

10. Skapa en klass som agerar som en array. Om den underliggande arrayen blir full, expanderar arrayen till en större allokerad array. 


## Föreläsning 11
### Mainly covering 
- STL behållare och iteratorer
- Sekvensiella behållare 
- Associativa behållare


### Excercises 
Tycker faktiskt övningsuppgifterna från v.50 HT20 för denna vecka är bra. 

Både Kahoot frågorna och för STL-behållare.

## Föreläsning 12
### Mainly covering 
- STL-funktioner och algoritmer
- Lambda funktioner


### Excercises 
Resonerar att det inte ska finnas övningsuppgifter för denna föreläsning. Bättre att de fokuserar på innehåll/övningsuppgifter från föregående veckor. 