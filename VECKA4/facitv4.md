
## Facit övningsuppgifter vecka 4

1. Skillnaden mellan *Copy* och *Move* är att copy gör en *deep copy* av det som ska kopieras. Med andra ord som skapas det en NY kopia av det kopierade som är helt skilld från den nyspapande. Om ändringar görs i den nya kopian kommer det inte förändra orginalkopian.

En *Move* konstruktor flyttar alltså element från en plats till en annan och lämnar ett *tomt objekt* på vänstersidan. Move-konstruktorn gör en *shallow copy* av det som placeras på högersidan, med andra ord så kopieras pekare och dylikt istället för att kopiera vad pekarna pekar på. Med ett *tomt objekt* syftas det på att pekare pekar till NULL/nullptr och variablar har satts till default-värden.

2. Destruktorn kallas när ett objekt förstörs. Destruktorn används för att deallokera resurser som allokerats under objektets livstid (som inte redan är deallokerade). 

Ett objekt förstörs när det går *out of scope* eller .

Bra länk som går in lite mer på djupet:
https://stackoverflow.com/questions/6403055/object-destruction-in-c

3. Med *Rule of three* syftas det på om ett objekt har en *user defined* kopy-konstruktor, kopy-tilldeldelningsoperator eller destruktor måste den ha alla tre.

*Rule of five* är en uppdaterad verision av *rule of three* och tilläger att man bör även lägga till move-kontruktor och move-assignment operator. Alltså om en används måste alla fem användas.

4. *Default konstruktor* och *default destruktor* är konstruktorn respektive destruktorn ett objekt får om inget annat anges. Dvs, programmeraren skapar ingen egen konstruktor resp. destruktor.

Det passar att använda default konstruktorn om ett objekt ska ha default-värden om inget annat anges. Default destruktorn används om ingen allokering av resurser som behöver friläggas används. 

5. Se exempelkod.