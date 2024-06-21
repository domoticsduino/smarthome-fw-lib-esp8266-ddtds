/* 1.0.0 VERSION */

#ifndef ddtds_h
#define ddtds_h

struct DDTDSVal{
    float value = 0.0;
    float voltage = 0.0;
};

class DDTDS{

    private:
        int getMedianNum(int, int);

    public:
        DDTDS();
        DDTDSVal convertValue(float, float);

};

#endif