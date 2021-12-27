#include "5.10.hpp"
#include "Array.hpp"
#include <string>

int main() {

    /*
        Uppgift 10
    */
    Pair<std::string, int> nameCount;
    Pair<int, int> occuringNumberCount;
    Pair<std::string, std::string> dateMatch;
    Pair<std::string, std::string> gameMatch;
    Pair<Pair<std::string, std::string>, Pair<std::string, std::string>> dateFullNameMatch;
    occuringNumberCount.first = 1;
    occuringNumberCount.second = 3;
    nameCount.first = "Marcus";
    nameCount.second = 300;
    dateMatch.first = "Romeo";
    dateMatch.second = "Juliett";
    gameMatch.first = "Nadal";
    gameMatch.second = "Federer";
    dateFullNameMatch.first = dateMatch;
    dateFullNameMatch.second = gameMatch;

    /*
        Uppgift 14
    */
    Array<int> container;
    for (int i = 0; i < 20; ++i) {
        container.Append(i);
    }

    return 0;
}