def pr(n):
    if n % 2 == 0 and n != 2:
        return False
    if n % 2 == 0 and n == 2:
        return True
    i = 3
    limit = int(math.sqrt(n))
    while i <= limit:
        if n % i == 0:
            return False
        i += 2
    return True
 
def main():
    input_file = open("input.txt", "r")
    output_file = open("output.txt", "w")
    line = input_file.readline().split()
    n = int(line[0])
    a = []
    for i in range(2, n - 1):
        if pr(i) == True:
            a.append(i)
    print(a)
    flag = False
    for i in range (len(a)):
        for j in range(len(a)):
            if a[i] + a[j] == n:
                output_file.write(str(a[i]) + " " + str(a[j]) + '\n')
                flag = True
                break
        if flag == True:
            break
 
    input_file.close()
    output_file.close()
 
 