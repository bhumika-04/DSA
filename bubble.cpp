 #include <stdio.h>

int main(){

    int a[50], n,i,j, temp;    

    printf("Enter the Number of Elements in the Array: ");

    scanf("%d", &n);    

    printf("Enter the Value of Elements: ");

    for(i= 0; i< n;i++)

        scanf("%d", &a[i]);

    for(i= 0; i<n - 1;i++){       

        for(j= 0; j< n- i- 1; j++){          

            if(a[j] > a[j+ 1]){               

                temp = a[j];

                a[j] = a[j+ 1];

                a[j+ 1] = temp;

            }

        }

    }

    printf("Array after implement bubble sort: ");

    for(i= 0; i< n; i++){

        printf("%d  ", a[i]);

    }

    return 0;

}