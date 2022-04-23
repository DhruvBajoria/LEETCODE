class Solution {
public:

    // Encodes a URL to a shortened URL.
    unordered_map<string, string> mp;
    int c = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        c++;
        string shortUrl = to_string(c);
        mp[shortUrl] = longUrl;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));