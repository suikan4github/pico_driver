#! /bin/sh

# usage : 
# format_header.sh < input_file > output_file
#
# example :
# format_header < "$TARGET" > "$TEMPLIST"

# Scratch pad files. 
SRCFILE=$(mktemp).h
TEMPSRC=$(mktemp).h

cat - > "$SRCFILE"
# We gather the prototype without ";" into the $TEMPLIST
# 1. clang-format formats the input file. Prevent line feed at the middle of the line. 
# 2. ctags extracts the function definition line only. 
# 3. sed removes the funcion implementation after "{".
# 4. sed removes the ";" at the end of line. 
# 5. grep removes the lien with "__unused" which is not relevant to user. 
# 6. awk removes the information fields from line. 
# 7. sed removes attribute and modifire of the function header. 
# 8. sed give space before/after "(" and before ")" for easy lexical analysis.
# 9. sed concatenate enum to the following word to handle the type as 1 field in the awk.
# 10. sed concatenate const to the following word to handle the type as 1 field in the awk.
# 11. sed concatenate void to the following word to handle the type as 1 field in the awk.
# 11. sed concatenate volatile to the following word to handle the type as 1 field in the awk.
# 12. convert foo *bar to foo* bar. 
# 13. grep removes the aliases of the std lib functions. 
# 14. grep removes the functions unable to support. 
#     sha256_get_write_addr is unable to support because the MOCK of that function causes "Invalid covariant return type" error. 
# 15. tr removes consecutive spaces. uniq removes repeating lines. 
clang-format "$SRCFILE" --style="{ColumnLimit: 9999}" > "$TEMPSRC"
ctags -x --c++-kinds=pf "$TEMPSRC"|\
sed -e 's/{.*$//' |\
sed -e 's/\;.*$//' |\
grep -v "__unused" |\
awk '{$1="";$2="";$3="";$4="";print $0}'|\
sed -e 's/__attribute__.*always_inline..//'|sed -e 's/__attribute__.*noreturn..//'|sed -e 's/__rcpinline//' |sed -e 's/static//' | sed -e 's/inline//' | sed -e 's/extern//' | sed -e 's/__force_//' | \
sed -e 's/(/ ( /' | sed -e 's/)$/ )/' | \
sed -e 's/enum /enum_/g' | \
sed -e 's/const /const___/g' | \
sed -e 's/void /void_/g' | sed -e 's/^ *void_/void /'| \
sed -e 's/volatile /volatile_/g' | \
sed -e 's/ *\*/\* /g' | \
grep -v 'stdio_getchar' | grep -v 'stdio_putchar' | grep -v 'stdio_puts' |grep -v 'stdio_vprintf' | grep -v 'stdio_printf' | grep -v 'stdio_set_chars_available_callback' | \
grep -v 'sha256_get_write_addr' | \
tr -s "[:space:]" | uniq  \


# Remove the scratch pad files. 
trap 'rm -f "$SRCFILE"' EXIT
trap 'rm -f "$TEMPSRC"' EXIT

