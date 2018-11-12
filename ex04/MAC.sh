ifconfig | grep ether | sed -e "s/ether //g" | cut -c 2- | sed -e "s/ //g"
