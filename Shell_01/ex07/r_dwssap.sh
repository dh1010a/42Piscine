cat /etc/passwd | grep -v '#' | cut -f 1 -d ':' | awk "NR%2==0" | rev | sort -r | awk -v FT1=$FT_LINE1 -v FT2=$FT_LINE2 'NR>=FT1 && NR<=FT2' | xargs echo | tr ' ' ',' | sed 's/,/, /g'| sed 's/$/./g'
