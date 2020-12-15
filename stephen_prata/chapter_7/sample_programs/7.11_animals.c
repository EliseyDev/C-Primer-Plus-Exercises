#include <stdio.h>
#include <ctype.h>

int main(void) {
    unsigned char ch;

    printf("Дайте мне букву алфавита и я укажу вам ");
    printf("название животного,\nначинающееся с этой буквы.\n");
    printf("Введите букву или # для завершения.\n");

    while ((ch = getchar()) != '#') {
        if ('\n' == ch) {
            continue;
        }
        if (islower(ch)) {
            switch (ch) {
                case 'a': {
                    printf("архар, дикий горный азиатский баран\n");
                    break;
                }
                case 'b': {
                    printf("бабирусса, дикая малайская свинья\n");
                    break;
                }
                case 'k' : {
                    printf("коати, носуха обыкновенная\n");
                    break;
                }
                case 'v': {
                    printf("выхухоль, водоплавающее существо\n");
                    break;
                }
                case 'e': {
                    printf("ехидна, игольчатый муравьед\n");
                    break;
                }
                case 'p': {
                    printf("рыболов, светло-коричневая куница\n");
                    break;
                }
                default: {
                    printf("Вопрос озадачил!\n");
                }
            }
        } else {
            printf("Распознаются только строчные буквы.\n");
        }
        while (getchar() != '\n') {
            continue;
        }
        printf("Введите букву или # для завершения.\n");
    }

    printf("До свидания.\n");

    return 0;
}
