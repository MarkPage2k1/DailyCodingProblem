def sum_of_three(s):
    try:
        lenStr = len(s)
        sumNumber = 0
        while(lenStr > 0):
            sumNumber += int(s[lenStr - 1])
            lenStr = lenStr - 1
        if sumNumber > 0 and sumNumber % 3 == 0:
            return True
        return False
    except:
        return False

if __name__ == '__main__':
    print(sum_of_three(input('Enter number: ')))