void bubble_sort_int(int a[], int m)
{
    int x,y,t;
     for (x=0; x < m-1; x++)
        for (y=0; y < m-x-1; y++)
            if (a[y] > a[y+1])
            {
                t=a[y];
                a[y]=a[y+1];
                a[y+1]=t;
            }
}

extern const int MAX;

void bubble_sort_str(char  arr[][MAX], int n)
{
    char temp[MAX];
    //printf("%d", (sizeof(arr[0])/sizeof(arr[0][0])));
    // Sorting strings using bubble sort
    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1-i; j++)
        {
            if (strcmp(arr[j], arr[j+1]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}


void leggi_int(int numeri[], int quanti)
{

    int i = 0;
    do
    {
        printf("Inserisci numero %d: ", i);
        scanf("%d", &numeri[i]);
        fflush(stdin);
        i++;
    }while((numeri[i - 1] > 0) && (i < quanti));
}


int leggi_str(char parole[][MAX], int quanti)
{
    int i = 0;
    do
    {
        printf("Inserisci parola %d: ", i);
        gets(parole[i]);
        fflush(stdin);
        i++;
    }while(((strcmp(parole[i - 1], "") != 0)) && (i < quanti));
    return i;
}



















