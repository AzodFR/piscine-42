cat /etc/passwd | grep -v '^#' | sed -n 'n;p' | rev |grep -o '[^:]*$' | sort -r | awk -v f="$FT_LINE1" -v l="$FT_LINE2" 'NR>=f&&NR<=l' | tr '\n' ' ' | sed '$ s/ $/./' | sed 's/ /, /g' | tr -d '\n'
