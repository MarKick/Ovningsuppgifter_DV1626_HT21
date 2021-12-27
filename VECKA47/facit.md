
9. En shallow copy kopierar pekaradressen medan en deep copy kopierar innehållet pekaren pekar på.
10. 
```c++
Obj1 new_obj = already_created_obj; // Copy constructor
Obj1 new_obj = std::move(already_created_obj);//move constructor
```
13. Själv kopiering (eng. self-assignment) sker när ett objekt initieras utifrån sig själv i en assignment operator. Se exempel nedan. 
```c++
obj1 = obj1; // själv kopiering
```
Detta beteende är ej definerat och har ett oförutsägbart beteende.

Självkopiering kan motverkas genom att göra en check i assigment operatorerna. 
```c++
// Exempelvis
Array& Array::operator = (const Array &rhs)
{
    if(this != &rhs) {

    }
}
```
15. Arv är när en sub-klass ärver egenskaper och beteende från en basklass. Polymorfism används för att ändra beteendet för ett objekt. Polymorfism och arv skiljer sig åt då arv ärver egenskaper och polymorfism förändrar beteendet för ett objekt. 

16. En abstrakt klass är en klass som har minst en rent virituell funktion. En abstrakt klass skapas genom att ge den en rent virtuell funktion. 

17. Virtuella funktioner är funktioner vars beteenden kan bli överskrivna (en. overriden) i en sub-klass.

18. En rent virituell funktion är en virituell funktion som måste överskrivas i en sub-klass, annars blir sub-klassen också rent virituell. 

19. 
Fördelar med polymorfism:
- Sub-klasser kan ha olika beteenden för en funktion de alla har ärvt från basklassen. 

Nackdelar med polymorfism: 
- Implemenation av polymorfism kan vara svår att implementera för programmeraren. 

Fler fördelar och nackdelar kan hittas på denna länk. 
https://teachcomputerscience.com/polymorphism/ 

20. a.) och d.) gör klassen abstrakt. 

21. Se exempelkod
22. Se exempelkod
23. Det är möjligt att spara en adress till ett objekt av en subklass i en pekare för basklassen Animal eftersom det är garanterar att subklassen innehåller de variabler/medlemsfunktioner basklassen gör. 

Det är möjligt att nå alla funktioner sub-klassen ärver från basklassen. Resultatet är desamma som om de skulle ha kallats från en pekare av sub-klassens typ. 

https://stackoverflow.com/questions/4937180/a-base-class-pointer-can-point-to-a-derived-class-object-why-is-the-vice-versa 

24. Se exempelkod



