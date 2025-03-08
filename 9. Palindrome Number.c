bool isPalindrome(int x) {
    long reverse, og, remainder;
    if (x < 0) {
        return false;
    }
    reverse = 0;
    og = x;
    while (x != 0) {
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x /= 10;
    }

    if (og == reverse) {
        return true;
    } else {
        return false;
    }
}
