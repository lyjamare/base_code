# comment
shell use '#' for code comment;

# static dir code line
find Documents \( -name "*.py" -o -name "*.html" \) |xargs cat|grep -v ^$|wc -l
