
/*
Ronak
202051162
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void adjustpt(char pt[])
{

    for (int i = 0; i < strlen(pt); i++)
    {
        if (pt[i] == 'j')
        {
            pt[i] = 'i';
        }
    }

    int len = 100;
    char *temp = calloc(len, sizeof(char));
    int j = 0;
    // handles repition
    for (int i = 0; i < strlen(pt); i++)
    {
        if (pt[i] == pt[i + 1])
        {
            temp[j++] = pt[i];
            temp[j] = 'x';
            temp[++j] = pt[i + 1];
        }
        else
        {
            temp[j++] = pt[i];
        }
    }
    int size = strlen(temp);
    // Make sures the length is even
    if (size % 2 != 0)
    {
        temp[size++] = 'x';
        temp[size] = '\0';
    }
    printf("\nEdited pt: %s", temp);
    strcpy(pt, temp);
}
void printmat(char mat[5][5])
{
    printf("key mat : \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%c ", mat[i][j]);
        printf("\n");
    }
}

void generatemat(char key[], char mat[5][5])
{

    for (int i = 0; i < strlen(key); i++)
    {
        if (key[i] == 'j')
        {
            key[i] = 'i';
        }
    }

    int ks = strlen(key);

    int i, j, k, flag = 0, *visited;
    visited = (int *)calloc(26, sizeof(int));
    for (i = 0; i < ks; i++)
    {
        if (key[i] != 'j')
            visited[key[i] - 97] = 2;
    }

    visited['j' - 97] = 1;

    i = 0;
    j = 0;

    for (k = 0; k < ks; k++)
    {
        if (visited[key[k] - 97] == 2)
        {
            visited[key[k] - 97] -= 1;
            mat[i][j] = key[k];
            j++;
            if (j == 5)
            {
                i++;
                j = 0;
            }
        }
    }

    for (k = 0; k < 26; k++)
    {
        if (visited[k] == 0)
        {
            mat[i][j] = (char)(k + 97);
            j++;
            if (j == 5)
            {
                i++;
                j = 0;
            }
        }
    }
}

void pfEnc(char *pt, char mat[5][5], char *ct)
{

    int len = strlen(pt);
    int a, b, c, d; // positions of pt characters in mat

    for (int i = 0; i < len; i += 2)
    {
        // find positions of pt characters in mat
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

        // encrypt pt characters
        if (b == d)
        { // same column
            ct[i] = mat[(a + 1) % 5][b];
            ct[i + 1] = mat[(c + 1) % 5][d];
        }
        else if (a == c)
        { // same row
            ct[i] = mat[a][(b + 1) % 5];
            ct[i + 1] = mat[c][(d + 1) % 5];
        }
        else
        { // different row and column
            ct[i] = mat[a][d];
            ct[i + 1] = mat[c][b];
        }
    }
}

void afEnc(char *pt, int a, int b, char *ct)
{

    int len = strlen(pt);
    for (int i = 0; i < len; i++)
    {
        int text = ((pt[i] - 'a') * a) % 26;
        ct[i] = (text + b) % 26 + 'a';
    }
}
void scEnc(char *pt, int key, char *ct)
{

    int len = strlen(pt);
    for (int i = 0; i < len; i++)
    {
        ct[i] = (pt[i] - 'a' + key) % 26 + 'a';
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

    char pt[100];
    printf("Enter the plain text : ");
    scanf("%s", pt);

    adjustpt(pt);

    printf("adjusted plain text : %s\n", pt);

    char key1[25];
    printf("Enter the first key : ");
    scanf("%s", key1);

    char mat[5][5];

    generatemat(key1, mat);
    printmat(mat);

    char ct[100];
    pfEnc(pt, mat, ct);
    printf("Playfair cipher text: %s\n", ct);

    afEnc(ct, 11, 15, ct);
    printf("Affine cipher text : %s\n", ct);

    int shiftKey;
    printf("Enter key for shift cipher: ");
    scanf("%d", &shiftKey);
    scEnc(ct, shiftKey, ct);
    printf("Shift cipher textt: %s\n", ct);
    return 0;
}
