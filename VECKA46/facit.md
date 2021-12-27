### Vecka 46

1. Fördelar med att jobba med objekt av klasser istället för att endast använda funktioner är exempelvis inkapsling, arv och polymorfism. Dessa beteenden/ funktionaliteter stödjs ej av att endast funktioner.

2. Inkapsling är en klassfunktionalitet som grupperar datamedlemmar (eng. data members) och funktioner i en specificerad klass. I C++ tillåter inkapsling att gömma variabler eller dela funktioner och variabler med andra klasser. För att specificera vilka variabler/funktioner som ska vara gömda eller tillgängliga för andra objekt används *private* respektive *public* nyckelorden. 

3. Skillnaden mellan en klass och en struct i C++ är att i en struct är alla medlemsvariabler och medlemsfunktioner satta till *public* om inget annat specificeras. Till skillnad från klasser som är *private* om inget annat anges. 

Structs brukar framförallt användas för att gruppera data och klassfunkctionaliteter bör ej användas. Klasser bör användas när klassfunktionaliter såsom arv, polymorfism, *operator overloading* med mera ska användas. 

4. Se exempelkod
    4.2)
    Olika objekt kan spara olika information internt när de alla alla har samma klass som datatyp eftersom en klass är endast en "mall" för hur ett objekt ska skapas. Ett objekt skapas utifrån en klass och därav måste data tillföras till objektet (om inte annat anges). 

5. En klass är en mall för hur medlemsvariabler och medlemsfunktioner ska vara organiserade. Ett objekt är en instans skapad utifrån klassen. 

6. Om en medlemsvariabel är satt som *const* innebär det att den inte kan/kommer byta värdet, med andra ord är den konstant samma värde. 

    6.1.2) Markering av *const* för en funktion på det sättet anger att den returnerade variabeln är *const* och därav inte kan skrivas över när funktionen har kallats. Se kod exemplet nedan
    ```c++
    const int foo() {
        return 2;
    }

    int main() {
        foo() = 3;  // ej tillåtet pga const 
    }
    ```

    ```c++
    // Dock är ändring på funktionsvärdet tillåtet på följande vis 
    const int foo() {
        return 3;
    }

    int main() {
        int x = foo();  // copies happily
        x = 4;
    }
    ```
    6.1.3) Markering av *const* på sådan vist innebär att inga modifieringar på objektet kan/kommer ske samt att medlemsfunktioner som inte är är konstanta kan kallas på. 
    6.1.4) Skillnaden på de olika användningarna av *const* är att den första anger att variablen som returneras är *const* och returvärdet inte kan skrivas över. Den andra anger att objektet inte kommer förändras. 

7. Problemet löses genom att ta bort const markeringen efter parametrarna. 

8. Se exempelkod

9. Se exempelkod

10. En getter används för att HÄMTA en medlemsvariabel (oftast satt som *private*. En setter används för att ÄNDRA en medlemsvariabel (oftast satt som *private*).

En nackdel med de är att om de överanvänds kan koden bli rörig och svårläslig.

Att sätta variabeln som *public* kan leda till att variabeln ändras externt och leder till buggar internt. Till skillnad om från en getter och setter används, då kan värdet exempelvis valideras innan det sätts. Om då värdet inte är tillåtet ändras inte variabeln. Se exempel

```c++ 
// Ex om en medlemsvariabel endast får anta värden mellan 0 och 10. Då kan setter:n 
// användas för att validera om det är ok
void setVal(int new_val) {
    if(new_val < 10 && new_val > 0) {
        this->val = new_val;
    }
    else {
        std::cerr << "Can not set new value, value not in range!" << std::endl;
    }
}
```

11. 624
