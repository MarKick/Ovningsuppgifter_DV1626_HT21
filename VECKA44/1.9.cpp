#include <iostream>
#include <vector>

#define ARR_SIZE 10

int main() {
    std::string word_array[ARR_SIZE];
    std::vector<std::string> word_vector;

    /*
        Fyll array med ord
    */
    word_array[0] = "Det"; 
    word_array[1] = "var"; 
    word_array[2] = "en"; 
    word_array[3] = "gång"; 
    word_array[4] = "en"; 
    word_array[5] = "programmerare"; 
    word_array[6] = "som"; 
    word_array[7] = "skulle"; 
    word_array[8] = "lära"; 
    word_array[9] = "sig"; 
    // Provkör att skriva till index 10 och se vad som händer
    // Vad får du för fel? Varför får du inte samma fel i vektorn?
    // word_array[10] = "C++"; 

    // Fyll vektor med ord
    word_vector.pushback("Det");
    word_vector.pushback("var");
    word_vector.pushback("en");
    word_vector.pushback("gång");
    word_vector.pushback("en");
    word_vector.pushback("programmerare");
    word_vector.pushback("som");
    word_vector.pushback("skulle");
    word_vector.pushback("lära");
    word_vector.pushback("sig");
    word_vector.pushback("att");
    word_vector.pushback("programmera");
    word_vector.pushback("i");
    word_vector.pushback("C++!");
    word_vector.pushback("THE");
    word_vector.pushback("END");

    /*
        Skriv ut innehåll av array och vektor
    */

    for(int i = 0; i < ARR_SIZE; ++i) {
        std::cout << word_array[i] << std::endl; 
    }
    vec_size = word_vector.size();
    for(int i = 0; i < vec_size; ++i) {
        std::cout << word_vector[i] << std::endl; 
    }

    /*
        Skriv över ord i respektive behållare
    */
    word_array[5] = "student";
    word_vector[5] = "student";

    return 0; 
}
