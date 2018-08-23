find . | wc -l | tr " " "." | rev | cut -d"." -f1 | rev
