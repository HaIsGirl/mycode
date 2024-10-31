def remove_annoying_substrings(s: str) -> str:
    # List to store the result string s'
    result = []
    
    # Iterate through the string
    for char in s:
        result.append(char)
        
        # Check if we need to remove characters to avoid "annoying" patterns
        if len(result) >= 3 and result[-1] == result[-2] == result[-3]:
            # Remove the last character if it would make three consecutive identical characters
            result.pop()
        
        if len(result) >= 4 and result[-1] == result[-2] and result[-3] == result[-4]:
            # Remove the last character if it would make two pairs of consecutive identical characters
            result.pop()
    
    # Join the list into a string and return
    return ''.join(result)

# Example usage
s = input()
print(remove_annoying_substrings(s))  # Output: aaccvv
