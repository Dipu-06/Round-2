// 1️⃣ Reverse a String (without built-in)
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    string s = "hello", rev = "";

    for (int i = 0; i <= s.length(); i++)
        rev = s[i] + rev;

    cout << rev;
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    string s = "hello", rev = "";

    for (int i = s.length() - 1; i >= 0; i--)
        rev += s[i];

    cout << rev;
    return 0;
}

// 2️⃣ Check String Palindrome
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    string s = "madam", r = s;
    reverse(s.begin(), s.end());                      

    if (s == r)
        cout << "Palindrome";

    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    string s = "madam";
    int i = 0, j = s.length() - 1;
    bool isPal = true;

    while (i < j) {
        if (s[i] != s[j]) {
            isPal = false;
            break;
        }
        i++; j--;
    }

    cout << (isPal ? "Palindrome" : "Not Palindrome");
    return 0;
}

// 3️⃣ Count Vowels in a String
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    int count = 0;

    for (int i = 0; i < s.length(); i++)
        if (s[i] == 'a' || 'e' || 'i' || 'o' || 'u')
            count++;

    cout << count;
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    int count = 0;

    for (char c : s)
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;

    cout << count;
    return 0;
}

// 4️⃣ Largest Element in Array
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {3, 7, 2, 9};
    int max = 0;

    for (int i = 0; i < 4; i++)
        if (a[i] > max)
            max = a[i];

    cout << max;
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {3, 7, 2, 9};
    int max = a[0];

    for (int i = 1; i < 4; i++)
        if (a[i] > max)
            max = a[i];

    cout << max;
    return 0;
}

// 5️⃣ Second Largest Element in Array
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {4, 1, 7, 3};
    int first = 0, second = 0;

    for (int i = 0; i < 4; i++)
        if (a[i] > first) {
            second = first;
            first = a[i];
        }

    cout << second;
    return 0;
}

// ✅ Correct Code
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int a[] = {4, 1, 7, 3};
    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < 4; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        } else if (a[i] > second && a[i] != first) {
            second = a[i];
        }
    }

    cout << second;
    return 0;
}

// 6️⃣ Sort Array in Ascending Order
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {3, 1, 2};

    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 3; j++)
            if (a[i] < a[j])
                swap(a[i], a[j]);

    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {3, 1, 2};

    for (int i = 0; i < 3; i++)
        for (int j = i + 1; j < 3; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);

    for (int i = 0; i < 3; i++)
        cout << a[i] << " ";

    return 0;
}

// 7️⃣ Remove Duplicates from Array
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 2, 3};

    for (int i = 0; i < 4; i++)
        cout << a[i] << " ";

    return 0;
}

// ✅ Correct Code
#include <iostream>
#include <set>
using namespace std;

int main() {
    int a[] = {1, 2, 2, 3};
    set<int> s(a, a + 4);

    for (int x : s)
        cout << x << " ";

    return 0;
}

// 8️⃣ Character Frequency in String
// ❌ Buggy Code
#include <iostream>
#include <map>
using namespace std;

int main() {
    string s = "aab";
    map<char,int> m;

    for (int i = 0; i <= s.length(); i++)
        m[s[i]]++;

    return 0;
}

// ✅ Correct Code
#include <iostream>
#include <map>
using namespace std;

int main() {
    string s = "aab";
    map<char,int> m;

    for (char c : s)
        m[c]++;

    for (auto p : m)
        cout << p.first << " : " << p.second << endl;

    return 0;
}

// 9️⃣ Sum of Array Elements
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3}, sum;

    for (int i = 0; i < 3; i++)
        sum += a[i];

    cout << sum;
    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3}, sum = 0;

    for (int i = 0; i < 3; i++)
        sum += a[i];

    cout << sum;
    return 0;
}

// 🔟 Merge Two Arrays
// ❌ Buggy Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3}, b[] = {2, 4};
    int c[4];

    for (int i = 0; i < 2; i++)
        c[i] = a[i];

    for (int i = 0; i < 2; i++)
        c[i] = b[i];

    return 0;
}

// ✅ Correct Code
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 3}, b[] = {2, 4};
    int c[4], k = 0;

    for (int i = 0; i < 2; i++)
        c[k++] = a[i];

    for (int i = 0; i < 2; i++)
        c[k++] = b[i];

    for (int i = 0; i < 4; i++)
        cout << c[i] << " ";

    return 0;
}