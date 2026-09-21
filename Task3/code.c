#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double megajoules;
    double kilocalories;
    double kilowatt_hours;

    const double MJ_TO_KCAL = 238.8459;
    const double MJ_TO_KWH = 1.0 / 3.6;

    printf("Введите значение в Мегаджоулях (МДж): ");
    scanf("%lf", &megajoules);

    kilocalories = megajoules * MJ_TO_KCAL;
    kilowatt_hours = megajoules * MJ_TO_KWH;

    printf("\nРезультаты пересчета для %.4f МДж:\n", megajoules);
    printf("-> Килокалории (ккал): %.4f\n", kilocalories);
    printf("-> Киловатт-часы (кВт*ч): %.4f\n", kilowatt_hours);
}