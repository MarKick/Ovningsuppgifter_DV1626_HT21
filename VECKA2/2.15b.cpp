int main() {
    int* a = new int(6);
    // OBS! SE ÄNDRING! FEL I UPPGIFTEN
    int** b = &a;  // OBS! pekaren till pekaren är stack allokerad    
    
    delete a;
    return 0;
}
