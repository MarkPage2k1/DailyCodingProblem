#include <iostream>
#include <Vector>
#include <Queue>

std::vector<long long> sequenceNumber(long long, long long);

int main(){
    long long l, r;
    std::vector<long long> result;
    std:: cout << "Enter the number 1: ";   std:: cin >> l;
    std:: cout << "Enter the number 2: ";   std:: cin >> r;
    result = sequenceNumber(l, r);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}
std::vector<long long> sequenceNumber(long long l, long long r)
{
    std::queue<long long> q;
    std::vector<long long> result;
    for(int i = 1; i <= 9; i++) {
        q.push(i);
    }

    while(!q.empty()) {
        long long tmp = q.front();
        if(tmp >= l && tmp <= r) {
            result.push_back(tmp);
            if(tmp < r && tmp % 10 != 9)
                q.push(tmp * 10 + (tmp % 10 + 1));
        }   
        else if(tmp < l && tmp % 10 != 9)
            q.push(tmp * 10 + (tmp % 10 + 1));  
        q.pop();
    }
    return result;
}