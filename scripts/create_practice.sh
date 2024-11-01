#!/bin/bash

# Check if question name is provided
if [ -z "$1" ]; then
    echo "Usage: ./scripts/create_practice.sh <question_name>"
    exit 1
fi

PRACTICE_DIR="practice/$1"

# Create the directory for the practice question
mkdir -p "$PRACTICE_DIR"

# Create a solution file and README for the practice question
echo "// Solution for $1" > "$PRACTICE_DIR/solution.cpp"
echo "# Solution for $1" > "$PRACTICE_DIR/README.md"

echo "Practice question structure created for '$1'."
