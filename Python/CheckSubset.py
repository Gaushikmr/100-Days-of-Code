# Enter your code here. Read input from STDIN. Print output to STDOUT
for i in range(int(input())):
    _, a = input(), set(map(int, input().split()))
    _, b = input(), set(map(int, input().split()))
    print(a.issubset(b))
