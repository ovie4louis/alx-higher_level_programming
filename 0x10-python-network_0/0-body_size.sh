#!/bin/bash
# Bash script that takes in a URL, sends a request to that URL, and displays the size of the body of the response
#  Check if a URL is provided as an argument
if [ $# -ne 1 ]; then
    echo "Usage: $0 <URL>"
    exit 1
fi

# Get the URL from the command line argument
url=$1

# Send a request to the URL and get the size of the body
size=$(curl -sI "$url" | grep -i 'Content-Length' | awk '{print $2}')

# Display the size of the body in bytes
echo "Size of the body: $size bytes"

