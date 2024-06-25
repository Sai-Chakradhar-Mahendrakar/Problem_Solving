from math import gcd

# Function to calculate LCM
def lcm(x, y):
    return abs(x * y) // gcd(x, y)

def primeFactors(n):
    spf = [0 for i in range(n+1)]
    spf[1] = 1
    for i in range(2, n+1):
        spf[i] = i
    for i in range(4, n+1, 2):
        spf[i] = 2
  
    for i in range(3, int(n**0.5)+1):
        if spf[i] == i:
            for j in range(i*i, n+1, i):
                if spf[j] == j:
                    spf[j] = i

    a = []
    while n != 1:
        a.append(spf[n])
        n = n // spf[n]
    return a



# Main function to find the maximum number of valid pairs
def find_max_pairs(N, A):
    # Create a set of the array elements for quick lookup
    
    for i in A:
        a = primeFactors(i)
        A = a+A
    

    element_set = set(A)
    element_set.add(1)
    
    # Initialize count of valid pairs
    valid_pairs_count = 0
    
    # Loop through all pairs (i, j) where i and j can be the same
    for i in range(N):
        for j in range(N):
            # Calculate LCM and GCD
            l = lcm(A[i], A[j])
            h = gcd(A[i], A[j])
            
            # Calculate the product of LCM and GCD
            product = l * h
            
            # Check if the product is in the array
            if product in element_set:
                valid_pairs_count += 1
                
    return valid_pairs_count

# Test case 1
N1 = 5
A1 = [1, 2, 3, 4, 5]
print(find_max_pairs(N1, A1))  # Expected output: 10

# Test case 2
N2 = 2
A2 = [10, 2]
print(find_max_pairs(N2, A2))  # Expected output: 4 (pairs (2, 2), (10, 1), (1, 10), (2, 2))

# Additional test cases
N3 = 4
A3 = [1, 10, 2, 5]
print(find_max_pairs(N3, A3))  # Expected output: 8 (pairs (1,1), (1,2), (2,1), (2,5), (5,2), (10,1), (1,10), (10,10))

N4 = 3
A4 = [6, 2, 3]
print(find_max_pairs(N4, A4))  # Expected output: 5 (pairs (6,6), (2,3), (3,2), (2,2), (3,3))
