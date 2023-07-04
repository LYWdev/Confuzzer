##!/bin/bash
#files=(*_test_result.txt)
#success_count=0
#for file in "${files[@]}"; do
#    success=$(grep -o "Successes: [1-9][0-9]*" "$file")
#    if [ ! -z "$success" ]; then
#        success_count=$((success_count+1))
#    fi
#done
#echo "Files with Successes greater than 0: $success_count"

#!/bin/bash
# 파일 이름 패턴에 맞는 파일들을 찾습니다.
files=(*_test_result.txt)
success_count=0
# 각 파일에서 Successes: 부분이 0보다 큰지 확인하고 개수를 셉니다.
for file in "${files[@]}"; do
    success=$(grep -o "Successes: (1000[0-9]|10009|0*[1-9][0-9]{0,2})" "$file")
    if [ ! -z "$success" ]; then
        success_count=$((success_count+1))
        echo "$file" >> list.txt
    fi
done
echo "Files with Successes greater than 0: $success_count"
