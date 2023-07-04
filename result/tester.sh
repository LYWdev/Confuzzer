#!/bin/bash
count=0
for file in *_test_result.txt; do
  if grep -q "Successes: [1-100000000000000]" "$file"; then
    count=$((count + 1))
  fi
done
echo "Files with Successes : $count"


