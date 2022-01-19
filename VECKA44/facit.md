
## Facit till övningsuppgifter Vecka 44

1. Följ guide beroende på vilken plattform du kör
1. En kompilator översätter koden du skrivit i C++ till maskinkod. Denna maskinkod kan sedan exekveras till skillnad från koden du skrivit. Detta skiljer sig från bl.a. python som kompilerar automatiskt när du kör ditt program. 
1. Se exempelkod
1. Se exempelkod
1. Skillnader mellan C++ och Python (några exempel på korrekta svar)
    
    1. Syntaxen
    1. Python är ett dynamiskt programmeringsspråk  och C++ är ett statiskt programmeringsspråk.
    1. C++ kräver typdeklarering och pytohn inte
    1. C++ har ingen "garbage collector", m.a.o minne som allokeras måste deallokeras manuellt av programmeraren. 
    1. Eftersom bl.a C++ kompileras innan exekvering och har statiska typer blir execvering av C++ program snabbare än python. 
1. Att dela upp kod i .hpp och .cpp filer är ett sätt att särskilja *deklarationer* och *definitioner*. Traditionellt skrivs *deklarationer* i .hpp filer och *definitioner* i .cpp filer. 
1. Fördelar med att C++ är ett kompilerat språk, jämfört med ett interpreterat språk, är framförallt exekveringstiden. 
1. 
```
Outputen blir:
3   53.7    53
```
Förklara till en kamrat/handledare! Om du inte förstår, fråga en kamrat/handledare att förklara för dig! 

9. Se exempelkod
10. Se exempelkod
11. Se exempelkod
12. Ett scope är ett virtuellt utrymme där variabler kan arbetas med. Ett scope kan exempelvis begränsas av en funktion. Det vill säga om en variabel skapas i en funktion men inte returneras kommer variabeln inte längre vara tillgänglig för resten av programmet, då har variabeln gått *out of scope*.
13. 
```
 for (int i = 10; i < 1001; ++i) {} // 990 iterationer
 for (int i = 10; i < 1001; i++) {} // 990 iterationer
 for (int i = 10; i <= 100; i+=2) {} // 45 iterationer
 for (;;) {} // Infinite loop
 for (int i = 100; i > 10; i-=3) {} // 30 iterationer
 for (int i = 0; i > 0; ++i) {} // 2147483647 iterationer
```
Anmärkning på sista är att en (signed) int kan endast innehålla värden mellan (-2147483647,2147483647). En integer overflow kommer att ske och detta beteende är odefinerat. Detta är lite överkurs, men det är viktigt att inse att integers inte har oändlig storlek.

14. Se exempelkod