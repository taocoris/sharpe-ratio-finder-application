#include <stdio.h>

// Sharpe orani hesaplama fonksiyonu
double sharpe_orani(double getiri, double risksiz_oran, double sapma) {
    return (getiri - risksiz_oran) / sapma;
}

int main() {
    double getiri, risksiz_oran, sapma, oran;

    // Kullanicidan verileri alma
    printf("Yatirim getirisini girin (%%): ");
    scanf("%lf", &getiri);
    printf("Risksiz faiz oranini girin (%%): ");
    scanf("%lf", &risksiz_oran);
    printf("Standart sapmayi girin (%%): ");
    scanf("%lf", &sapma);

    // Yuzdeyi kesirli degere cevirme
    getiri /= 100;
    risksiz_oran /= 100;
    sapma /= 100;

    // Sharpe oranini hesaplama
    oran = sharpe_orani(getiri, risksiz_oran, sapma);

    // Sonucu ekrana yazdirma
    printf("Sharpe Orani: %.2f\n", oran);

    // Sharpe oraninin degerlendirilmesi
    if (oran > 3.0) {
        printf("Sharpe Orani mukemmel!\n");
    } else if (oran > 2.0) {
        printf("Sharpe Orani cok iyi.\n");
    } else if (oran > 1.0) {
        printf("Sharpe Orani iyi.\n");
    } else {
        printf("Sharpe Orani dusuk.\n");
    }

    return 0;
}