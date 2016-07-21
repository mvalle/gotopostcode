function run_tests() {
    while read valid_postcode; do
	./gotopostcode "$valid_postcode"
	result=$?
	if [[ $result -ne 0 ]]; then
	    echo Failed at $valid_postcode
	    return 1
	fi
    done < valid_postcodes.lst
    return 0
}

run_tests
