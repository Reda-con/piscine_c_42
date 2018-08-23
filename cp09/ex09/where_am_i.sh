PS=$(ifconfig | grep -i inet | grep -v inet6 | cut -d " " -f2)
if [[ -z $IPS  ]]
then
	    echo "I am lost!"
	else
		    echo "$IPS"
fi
