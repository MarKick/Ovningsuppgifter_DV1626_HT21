
## FACIT Övningsuppgifter V.45

1.  En funktion har följande delar:

``` 
return_type function_name(type1 parameter1, type2 parameter2) {
    body of the function
}  
```

- *return_type* avser vilken typ retur värdet har. Om retur-typen är satt till *void* returneras inget.  

- *function_name* är namnet på funktionen. Notera att det är möjligt att skriva över inbyggda funktioner i standardbiblioteket om funktionerna har samma namn, detta är framförallt förekommande om *namespace std* används. 

- parameter listan avser de parametrar en funktion har. Med andra ord vilka värden som tas med från där funktionen kallas. För varje parameter i parameterlistan behövs det vilken typ de är av. 

- Funktions kroppen är var din kod ska placeras.

2. Se exempelkod   (Egentligen mer träning i att läsa dokumentation/lösning online än praktisk c++ kodning)
3. Se exempelkod
4. DUBBELKOLLLA!!!! I deklerationen av en funktion anges retur-värde funktionens namn och parameterlistan. I funktions definitionen skrivs funktionskroppen. En funktion kan endast definieras och deklareras en gång. 
5. En referens är en pekare till ett redan skapat objekt. Ändring på referensen förändrar förändrar värdet på ursprungsvärdet. 
6. Skillnaden på de två funktioenerna är att den första inte tar in parametern *value* som referens medan den andra funktionen gör det. Med andra ord förändrar den ena funktionen (func2) värdet på variablen även i main-funktionen medan den andra inte gör det. 

Kompilera och exekvera programmet för att se vad outputen blir. 

7. Genom att använda referenser kan ändringar på större behållare ske direkt istället för att en kopia ska innehålla ändringarna. Det sparar även minne eftersom mer minne inte behövs allokerar för behållaren i fråga.

8. Namespaces är ett sätt för att organisera kod i logiska grupper och undvika att variabler/funktioner/klasser.. kan ha namn som kolliderar (name kollision). Ett namespace skapas på följande vis:
```
namespace ASM 
{
    int add() {}
    std::string subtract() {}
    void substiute() {}
}

Kallelse på funktioner sker på följande vis:
ASM::add()
ASM::substract()
ASM::substitute()
```

9. Kompilera och kör koden, vilka av kodraderna reagerar kompilatorn på?
10. Det uppstår olika outputs per iteration för att koden (båda funktionerna) försöker läsa utanför minne som inte är allokerat. Värdet som antas för läsning från oallokerat minne är odefinerat och därför skiljer sig utskrifter per körning. Detta är varför de slumpmässiga talen 32718, 4199184, 8 kan skrivas ut.
11. Läs felmeddelandet du får när du kör koden. 
Funktionen *func()* returnerar en referens till en behållare som skapas inom funktionen. Ett fel uppstår eftersom när funktionen har kallats och återgår till *main()* funktionen går behållaren ur scope. Referens-pekaren pekar därefter alltså inte på en behållare som finns längre. Problemet åtgärdas genom att returna behållaren istället för en referens till det.
12. Att allokera på stacken (alt. stackallokera) menas med att allokera minne på området i minnet som kallas *stacken*. Allokering på stacken sker redan vid kompilering och därav måste mängden som allokeras redan vara känd vid kompilering. När ett stackallokerat objekt går *ur scope* deallokeras det även. 

Att allokera på heapen (alt. heapallokera) allokerar minne på heapen i minnet. Vid heapallokering, likt stackallokering, returneras en pekare till vart i minnet det befinner sig. Till skillnad från stackallokering deallokeras inte minnet när det går *out of scope*, det behövs göras manuellt. 

Ett objekt bör defineras på heapen istället för stacken om storleken som ska allokeras är okänt vid kompilering. Det är även fördelaktigt att heapallokera objektet om det fortfarande ska existera när det går out of scope, exempelvis objektet skapas i en extern funktion. 

13. Se exempelkod

14. Med en minnesläcka syftas det i flesta fall att heapallokerat minne inte är tillgängligt längre men fortfarande är kvar i minnet. Exempelvis om det inte deallokeras.  

Problem som kan uppstå om om minnesläckor inte hanteras. Denna artikel av OWASP beskriver det bra:
https://owasp.org/www-community/vulnerabilities/Memory_leak 

15. Se exempelkod för att se hur deallokering ska ske.
16. Vad smartpekare är och hur de används beskrivs bra av följande länk:
https://www.geeksforgeeks.org/smart-pointers-cpp/ 

Största skillnaden mellan smartpekare och vanliga pekare är att smartpekare har sin egen *garbage collection*. Med andra ord sköter de deallokering av minne automatiskt. Alltså behöver inte användaren manuellt delallokera minne som allokeras. 

17. Segmantation fault uppstår när programmet försöker läsa/skriva till minne på en icke-tillåten plats. Detta kan exempelvis ske om man försöker derefrensera en NULL-pekare.

En segmentationfault kan deubuggas följande vis:

i. Identifiera VAR problemet uppstår. Detta kan exempelvis göras med printouts på olika ställen i programmet. 

ii. När det har identifierats var det orsakas försök göra print-outs av värden som försöker läsas/skrivas till. Är avläsandet/överskriften en "legal" plats, existerar variabeln i minnet? Har objektet du försöker få tillgång gått ur scope? Är variabeln som försöker avläsas heap eller stack allokerad?

Försöker du se vad en NULL-pekare pekar? Detta kommer leda till segmentation fault.  

iii. Ofta är det så att ett segmentation fault sker till följd av att något tidigare inte har gått rätt till. Försök åtgärda detta. 



