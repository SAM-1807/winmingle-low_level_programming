#!/bin/bash

FLAGS="-Wall -Werror -Wextra -pedantic -std=gnu89 -I."

if [ ! -f _putchar.c ]; then
	cat > _putchar.c << 'EOF'
#include <unistd.h>
int _putchar(char c) { return (write(1, &c, 1)); }
EOF
fi

echo "========== 0x02 Test Suite =========="
echo ""

echo "---- 0-putchar ----"
gcc $FLAGS 0-putchar.c -o t0 2>&1 && ./t0
echo ""

echo "---- 1-alphabet ----"
cat > t1.c << 'EOF'
#include "main.h"
int main(void) { print_alphabet(); return (0); }
EOF
gcc $FLAGS 1-alphabet.c _putchar.c t1.c -o t1 2>&1 && ./t1
echo ""

echo "---- 2-print_alphabet_x10 ----"
cat > t2.c << 'EOF'
#include "main.h"
int main(void) { print_alphabet_x10(); return (0); }
EOF
gcc $FLAGS 2-print_alphabet_x10.c _putchar.c t2.c -o t2 2>&1 && ./t2
echo ""

echo "---- 3-islower ----"
cat > t3.c << 'EOF'
#include "main.h"
int main(void) {
	int r;
	r = _islower('H'); _putchar(r + '0');
	r = _islower('o'); _putchar(r + '0');
	r = _islower(108); _putchar(r + '0');
	_putchar('\n');
	return (0);
}
EOF
gcc $FLAGS 3-islower.c _putchar.c t3.c -o t3 2>&1 && ./t3
echo ""

echo "---- 4-isalpha ----"
cat > t4.c << 'EOF'
#include "main.h"
int main(void) {
	int r;
	r = _isalpha('H'); _putchar(r + '0');
	r = _isalpha('o'); _putchar(r + '0');
	r = _isalpha(108); _putchar(r + '0');
	r = _isalpha(';'); _putchar(r + '0');
	_putchar('\n');
	return (0);
}
EOF
gcc $FLAGS 4-isalpha.c _putchar.c t4.c -o t4 2>&1 && ./t4
echo ""

echo "---- 5-sign ----"
cat > t5.c << 'EOF'
#include "main.h"
int main(void) {
	int r;
	r = print_sign(98); _putchar(','); _putchar(' '); _putchar(r + '0'); _putchar('\n');
	r = print_sign(0); _putchar(','); _putchar(' '); _putchar(r + '0'); _putchar('\n');
	r = print_sign(-1); _putchar(','); _putchar(' '); _putchar(r + '0'); _putchar('\n');
	return (0);
}
EOF
gcc $FLAGS 5-sign.c _putchar.c t5.c -o t5 2>&1 && ./t5
echo ""

echo "---- 6-abs ----"
cat > t6.c << 'EOF'
#include "main.h"
int main(void) {
	print_ulong(_abs(-1)); _putchar('\n');
	print_ulong(_abs(0)); _putchar('\n');
	print_ulong(_abs(1)); _putchar('\n');
	print_ulong(_abs(-98)); _putchar('\n');
	return (0);
}
void print_ulong(unsigned long n) {
	if (n / 10) print_ulong(n / 10);
	_putchar(n % 10 + '0');
}
EOF
gcc $FLAGS 6-abs.c _putchar.c t6.c -o t6 2>&1 && ./t6
echo ""

echo "---- 7-print_last_digit ----"
cat > t7.c << 'EOF'
#include "main.h"
int main(void) {
	int r;
	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
EOF
gcc $FLAGS 7-print_last_digit.c _putchar.c t7.c -o t7 2>&1 && ./t7
echo ""

echo "---- 8-24_hours (first 3, last 3, count) ----"
cat > t8.c << 'EOF'
#include "main.h"
int main(void) { jack_bauer(); return (0); }
EOF
gcc $FLAGS 8-24_hours.c _putchar.c t8.c -o t8 2>&1 && { ./t8 | head -3; ./t8 | tail -3; ./t8 | wc -l; }
echo ""

echo "---- 9-times_table ----"
cat > t9.c << 'EOF'
#include "main.h"
int main(void) { times_table(); return (0); }
EOF
gcc $FLAGS 9-times_table.c _putchar.c t9.c -o t9 2>&1 && ./t9
echo ""

echo "---- 10-add ----"
cat > t10.c << 'EOF'
#include "main.h"
void print_ulong(unsigned long n) {
	if (n / 10) print_ulong(n / 10);
	_putchar(n % 10 + '0');
}
int main(void) {
	print_ulong(add(89, 9)); _putchar('\n');
	return (0);
}
EOF
gcc $FLAGS 10-add.c _putchar.c t10.c -o t10 2>&1 && ./t10
echo ""

echo "---- 11-print_to_98 ----"
cat > t11.c << 'EOF'
#include "main.h"
int main(void) {
	print_to_98(96);
	print_to_98(100);
	return (0);
}
EOF
gcc $FLAGS 11-print_to_98.c _putchar.c t11.c -o t11 2>&1 && ./t11
echo ""

echo "---- 100-times_table ----"
cat > t100.c << 'EOF'
#include "main.h"
int main(void) { print_times_table(3); print_times_table(5); return (0); }
EOF
gcc $FLAGS 100-times_table.c _putchar.c t100.c -o t100 2>&1 && ./t100
echo ""

echo "---- 101-natural ----"
gcc $FLAGS 101-natural.c _putchar.c -o t101 2>&1 && ./t101
echo ""

echo "---- 102-fibonacci ----"
gcc $FLAGS 102-fibonacci.c _putchar.c -o t102 2>&1 && ./t102
echo ""

echo "---- 103-fibonacci ----"
gcc $FLAGS 103-fibonacci.c _putchar.c -o t103 2>&1 && ./t103
echo ""

echo "---- 104-fibonacci (first 5 and last 3) ----"
gcc $FLAGS 104-fibonacci.c _putchar.c -o t104 2>&1 && { ./t104 | cut -d',' -f1-5; ./t104 | tr ',' '\n' | tail -3; }
echo ""

rm -f t0 t1 t2 t3 t4 t5 t6 t7 t8 t9 t10 t11 t100 t101 t102 t103 t104
rm -f t1.c t2.c t3.c t4.c t5.c t6.c t7.c t8.c t9.c t10.c t11.c t100.c
rm -f _putchar.c

echo "========== Done =========="
