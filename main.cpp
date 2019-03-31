#include <stdio.h>

int main() {
    int a[7], brown[5], green[5], clear[5], min_movements;
    while (scanf("%d%d%d%d%d%d%d%d%d", &brown[1], &green[1], &clear[1], &brown[2], &green[2], &clear[2], &brown[3], &green[3], &clear[3]) > 0)
    {
        a[1] = brown[2] + brown[3] + green[1] + green[2] + clear[1] + clear[3];
        a[2] = brown[2] + brown[3] + green[1] + green[3] + clear[1] + clear[2];
        a[3] = brown[1] + brown[3] + green[1] + green[2] + clear[2] + clear[3];
        a[4] = brown[1] + brown[2] + green[1] + green[3] + clear[2] + clear[3];
        a[5] = brown[1] + brown[3] + green[2] + green[3] + clear[1] + clear[2];
        a[6] = brown[1] + brown[2] + green[2] + green[3] + clear[1] + clear[3];
        min_movements = a[1];

        for (int i = 2; i < 7; i++)
        {
            if (a[i] < min_movements)
                min_movements = a[i];
        }

        for (int i = 1; i < 7; i++)
        {
            if (a[i] == min_movements)
            {
                if (i == 1)
                    printf("BCG %d\n", min_movements);
                else if (i == 2)
                    printf("BGC %d\n", min_movements);
                else if (i == 3)
                    printf("CBG %d\n", min_movements);
                else if (i == 4)
                    printf("CGB %d\n", min_movements);
                else if (i == 5)
                    printf("GBC %d\n", min_movements);
                else
                    printf("GCB %d\n", min_movements);
                break;
            }
        }
    }


    return 0;
}
