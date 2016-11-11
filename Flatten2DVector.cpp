ass Vector2D {
public:
    vector<vector<int>>::iterator vit;
    vector<int>::iterator it;
    vector<vector<int>> d2;
    Vector2D(vector<vector<int>>& vec2d) {
        d2 = vec2d;
        vit = d2.begin();
        if(vit != d2.end()){
            it = (*vit).begin();
            while(it == (*vit).end()){
                vit++; 
                if(vit == d2.end()) break;
                it = (*vit).begin();
            }
        }
    }
    int next() {
        int re = *it; it++;
        while(it == (*vit).end()){
            vit++;
            if(vit == d2.end()) break;
            it = (*vit).begin();
        }
        return re;
    }
    bool hasNext() {
        if ((vit)==d2.end()) return false;
        return true;
    }
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i(vec2d);
 * while (i.hasNext()) cout << i.next();
 */
