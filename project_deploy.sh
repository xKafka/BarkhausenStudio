#!/bin/bash

pi_adress="192.168.0.59"
project_adress="/home/pi/Documents/Barkhausen_studio"

echo "Deploying to raspberry on adress pi@$pi_adress"


if rsync -avz --rsync-path="rsync" --delete /home/fkafka/QtProjects/Barkhausen_studio/ pi@$pi_adress:$project_adress ; then
        echo "Succeded"
fi

echo "Connecting to $pi_adress"

ssh_command="pi@$pi_adress"

if ssh $ssh_command "cd $project_adress && find . -type f \( -name "*moc_*" -o -name "*CMakeCache*" -o -name "*cmake_install*"\) -exec sh -c 'rm "$0"' {} \;" ; then
        echo "Deleted build files"
fi

if ssh $ssh_command "cd $project_adress & find . -type d -name "*CMakeFiles*" -exec sh -c 'rm -rf "$0"' {} \;" ; then
	echo "Deleted build dirs"
fi

if ssh $ssh_command "cd $project_adress && cmake ." ; then
        echo "Created MakeFiles"
fi

if ssh $ssh_command "cd $project_adress && make" ; then
        echo "Built"
fi

