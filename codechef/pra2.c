
int low = 0;
int mid = 0;
int high = 0;
for (int i = 0; i < n; i++)
{
    if (a[i] == 0)
    {
        low++;
    }
    else if (a[i] == 1)
    {
        mid++;
    }
    else
    {
        high++;
    }
}
for (int i = 0; i < low; i++)
{
    a[i] = 0;
}

for (int i = 0; i < mid; i++)
{
    a[low] = 1;
    low++;
}

for (int i = 0; i < high; i++)
{
    a[low] = 2;
    low++;
}
low = 0;
mid = 0;
high = 0;
