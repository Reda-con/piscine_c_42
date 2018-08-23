ldapsearch -xLLL "sn=*bon*" | grep "cn:" | cut -c5- | wc -l | tr " " "." | rev | cut -d"." -f1 | rev
