int main() {
    int** a = new int*[5];
    for(int i = 0; i < 5; ++i) {
        a[i] = new int(i);
    }
    
    // deallokering
    for (int i = 0; i < 5; ++i) {
        delete a[i];
    }

    delete[] a;

    return 0;
}
