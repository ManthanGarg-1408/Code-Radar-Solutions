def process_numbers(num_count, numbers):
    results = []  # This will store our output results
    
    # Process each number
    for number in numbers:
        # Assuming you're expected to sum the absolute value of digits,
        # Modify below logic based on specific requirement.
        abs_num = abs(number)
        digit_sum = sum(int(digit) for digit in str(abs_num))
        
        results.append(digit_sum)

    return results

# Input Handling
num_count = int(input().strip())
numbers = list(map(int, input().strip().split()))

# Get processed results
output = process_numbers(num_count, numbers)

# Print results in the expected format
for result in output:
    print(result)