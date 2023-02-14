
/*
Ronak Jaiswal
202051162
*/

#include <stdio.h>
#include <string.h>

void adjustpt(char *pt)
{
    int len = strlen(pt);
    int i = 0;
    while (i < len)
    {
        if (pt[i] == 'j')
        {
            pt[i] = 'i';
        }
        i++;
    }
    i = 0;
    while (i < len - 1)
    {
        if (pt[i] == pt[i + 1])
        {
            int j = len - 1;
            while (j > i + 1)
            {
                pt[j] = pt[j - 1];
                j--;
            }
            pt[i + 1] = 'x';
            len++;
        }
        i++;
    }
    if (len % 2 == 1)
    {
        pt[len] = 'x';
        len++;
    }
}
void printmatrix(char mat[5][5])
{
    printf("key matrix : \n");
    int i = 0;
    int j = 0;
    while (i < 5)
    {
        while (j < 5)
        {
            printf("%c ", mat[i][j]);
            j++;
        }
        printf("\n");
        j = 0;
        i++;
    }
}
void generatematrix(char *key, char mat[5][5])
{

    int len = strlen(key);
    int flag = 0;

    for (int i = 0; i < len; i++)
    {
        if (key[i] == 'j')
        {
            key[i] = 'i';
        }
    }

    for (int i = 0, k = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mat[i][j] = key[k];
            k++;
            if (k >= len)
                break;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (i == 9)
            continue;

        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (mat[j][k] == '\0')
                {
                    for (int l = 0; l < len; l++)
                    {
                        if (key[l] == 'a' + i)
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (flag == 0)
                    {
                        mat[j][k] = 'a' + i;
                        break;
                    }
                    flag = 0;
                }
            }
        }
    }
}

void pfcEnc(char *pt, char mat[5][5], char *ct)
{

    int len = strlen(pt);
    int a, b, c, d;

    for (int i = 0; i < len; i += 2)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (pt[i] == mat[j][k])
                {
                    a = j;
                    b = k;
                }
                if (pt[i + 1] == mat[j][k])
                {
                    c = j;
                    d = k;
                }
            }
        }

        if (b == d)
        {
            ct[i] = mat[(a + 1) % 5][b];
            ct[i + 1] = mat[(c + 1) % 5][d];
        }
        else if (a == c)
        {
            ct[i] = mat[a][(b + 1) % 5];
            ct[i + 1] = mat[c][(d + 1) % 5];
        }
        else
        {
            ct[i] = mat[a][d];
            ct[i + 1] = mat[c][b];
        }
    }
}

void acEnc(char *pt, int a, int b, char *ct)
{
    int i = 0;
    int len = strlen(pt);
    while (i < len)
    {
        int text = ((pt[i] - 'a') * a) % 26;
        ct[i] = (text + b) % 26 + 'a';
        i++;
    }
}
void scEnc(char *pt, int key, char *ct)
{
    int i = 0;
    int len = strlen(pt);
    while (i < len)
    {
        ct[i] = (pt[i] - 'a' + key) % 26 + 'a';
        i++;
    }
}

int main()
{
    /*
    Enc :- Encryption
    pt :- plain text
    ct :- cipher text
    ac :- affine cipher
    pfc :- play fair cipher
    sc :- shift cipher
    */

    // task 1
    char pt[100];
    printf("Enter the plain text : ");
    scanf("%s", pt);

    // task 2
    adjustpt(pt);

    // task 3
    printf("adjusted plain text : %s\n", pt);

    // task 4
    char key1[25];
    printf("Enter the first key : ");
    scanf("%s", key1);

    char mat[5][5];

    // task 5
    generatematrix(key1, mat);
    printmatrix(mat);

    // task 6
    char ct[100];
    pfcEnc(pt, mat, ct);
    printf("Playfair cipher text : %s\n", ct);

    // task 7
    acEnc(ct, 11, 15, ct);
    printf("Affine cipher text : %s\n", ct);

    // task 8
    int sk;
    printf("Enter key for shift cipher: ");
    scanf("%d", &sk);
    scEnc(ct, sk, ct);
    printf("Shift cipher text : %s\n", ct);
    return 0;
}
