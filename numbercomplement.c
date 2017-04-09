int findComplement(long num) {
    long i;
    for(i = 1; i <= num; i = i*2) 
    num = num ^ i; 
    return num;
}