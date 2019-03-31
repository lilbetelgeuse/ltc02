#include "stdio.h" 
float calc(float w, float h)
{
    float calc = w/(h*h);
    return calc;
}
float w;
float h;

int main (void)
{
    printf("Введите свой вес в килограммах, используйте точку в качестве десятичного разделителя");
    scanf("%f", &w);
    printf("Введите свой рост в метрах, используйте точку в качестве десятичного разделителя");
    scanf("%f", &h);
    float bmi = calc(w,h);
      if (bmi<18.5) {
        printf("Ваш индекс массы тела ниже нормы");
    } else if (bmi>25) {
        printf("Ваш индекс массы тела выше нормы");
    }
    else {
        printf("Ваш индекс массы тела в границах нормы");
    }
}
