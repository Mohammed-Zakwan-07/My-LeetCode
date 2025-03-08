int countPrimes(int n) {
    if (n <= 2) return 0;

    bool isPrime[n];
    for (int i = 0; i < n; i++) {
        isPrime[i] = true;
    }

    isPrime[0] = isPrime[1] = false; 
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false; 
            }
        }
    }
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }
    return count;
}
