#!/bin/bash

# Check if a path and commit message are provided
if [ -z "$1" ] || [ -z "$2" ]; then
    exit 1
fi

# Add, commit, and push changes
git add "$1"
git commit -m "$2"
git push

echo "Changes committed and pushed for '$1' with message: '$2'."
