class Box{
    private:
        int width, height;
    public:
    // void setDims(int w,int h){
    //     width=w;height=h;
    // }
    // int area(){
    //     return width*height;
    // }

    Box (int w,int h){
        this->height=h;
        this->width=w;
    }
    Box ():width(0),height(0){}
    void setDims(int w,int h){
        this->height=h;
        this->width=w;
    }
    int area(){
        return this->width*this->height;
    }
};