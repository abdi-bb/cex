void my_printf(const char* format, ...) {
    va_list args;
    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            switch (format[i]) {
                case 'd':
                    printf("%d", va_arg(args, int));
                    break;
                case 's':
                    printf("%s", va_arg(args, char*));
                    break;
                case 'f':
                    printf("%f", va_arg(args, double));
                    break;
                case 'c':
                    printf("%c", (char)va_arg(args, int));
                    break;
                default:
                    putchar(format[i]);
                    break;
            }
        } else {
            putchar(format[i]);
        }
    }

    va_end(args);
}

