#!/bin/bash

# Count regular files and directories
nb_files=$(find . | wc -l)

# Use awk to trim leading and trailing spaces
trimmed_count=$(echo "$nb_files" | awk '{$1=$1};1')

# Print the trimmed count
echo "$trimmed_count"