from collections import defaultdict

if __name__ == "__main__":
    n, m = list(map(int, input().split()))
    nlist = defaultdict(list)

    for i in range(1, n+1): nlist[input()].append(i)
    for i in range(1, m+1):
        word = input()
        if word in nlist.keys():
            print(' '.join(str(i) for i in nlist[word]))
        else:
            print('-1')
