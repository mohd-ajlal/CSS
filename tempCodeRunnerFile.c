    int n, a = 0, b = 1, c;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d, %d, ", a, b);
    for(int i = 3; i <= n; i++){
        c = a+b;
        a = c - a;
        b = c;
        printf("%d,", c);
    }
    return 0;
