#!/bin/bash

# Check if a commit message is provided
if [ -z "$1" ]; then
    echo "Usage: ./scripts/manage_git.sh <commit_message>"
    exit 1
fi

# Define the path to the repository
REPO_PATH="."  # Change this if your repo is located elsewhere

# Navigate to the repository directory
cd "$REPO_PATH" || { echo "Failed to navigate to repository directory."; exit 1; }

# Add all changes
git add .

# Commit the changes with the provided message
git commit -m "$1"

# Push the changes to the remote repository
git push

echo "Changes committed and pushed with message: '$1'."
