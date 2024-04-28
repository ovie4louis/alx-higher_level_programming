#!/bin/bash
# Bash script that takes in a URL, sends a request to that URL, and displays the size of the body of the response

#!/bin/bash

# Check if URL is provided as argument
if [ $# -ne 1 ]; then
    echo "Usage: $0 <URL>"
    exit 1
fi

# Send request to the URL using curl and store the response body
response_body=$(curl -sI "$1" | grep -i content-length | awk '{print $2}')
