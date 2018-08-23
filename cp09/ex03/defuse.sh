touch -A -01 bomb.txt -a && stat -r bomb.txt | cut -d' ' -f9 | cut -c10
