#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int counts[] = {4000, 60000, 800000};
    int num_counts = sizeof(counts) / sizeof(counts[0]);

    printf("System Limits Check:\n");
    printf("INT_MAX      : %d\n", INT_MAX);
    printf("LONG_MAX     : %ld\n", LONG_MAX);
    printf("LONG_LONG_MAX: %lld\n", LONG_LONG_MAX);
    printf("FLT_DIG      : %d, DBL_DIG: %d\n\n", FLT_DIG, DBL_DIG);

    for (int i = 0; i < num_counts; i++) {
        int n = counts[i];
        float float_total = 0.0f;
        long long paise_total = 0;
        
        float avg_bill_float = 152.75f;
        long long avg_bill_paise = 15275L;

        for (int j = 0; j < n; j++) {
            float_total += avg_bill_float;
            paise_total += avg_bill_paise;
        }

        float converted_paise_to_rupees = (float)paise_total / 100.0f;

        printf("Scale: %d households\n", n);
        printf("  Float Total  : Rs %.2f\n", float_total);
        printf("  Integer Paise: Rs %.2f (%lld paise)\n", converted_paise_to_rupees, paise_total);
        printf("  Difference   : Rs %.4f\n\n", (double)(float_total - converted_paise_to_rupees));
    }

    return 0;
}
```[cite: 8]
