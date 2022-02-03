ifconfig -a | grep -w 'ether' | tr -d '\t' | awk '{print $2}' | tr -d ' '
