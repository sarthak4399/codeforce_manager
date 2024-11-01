#!/bin/bash

# Check if round number is provided
if [ -z "$1" ]; then
    echo "Usage: ./scripts/create_round.sh <round_number>"
    exit 1
fi

ROUND_DIR="rounds/Round$1"
PROBLEMS=("A" "B" "C" "D" "E")

# Create the directory for the round
mkdir -p "$ROUND_DIR"

# Create directories for each problem in the round
for problem in "${PROBLEMS[@]}"; do
    PROBLEM_DIR="$ROUND_DIR/Problem$problem"
    mkdir -p "$PROBLEM_DIR"
    
    # Create a solution file and README for each problem
    echo "// Solution for Round $1, Problem $problem" > "$PROBLEM_DIR/solution.cpp"
    echo "# Solution for Round $1, Problem $problem" > "$PROBLEM_DIR/README.md"
done

echo "Round $1 structure created with problems: ${PROBLEMS[*]}."
