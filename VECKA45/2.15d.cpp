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
        }
    }

    // dellokering
    for(int i = 0; i < *var; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    delete var;
    

    return 0;
}
