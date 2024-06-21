/* 1.0.0 VERSION */

#include "ddtds.h"

DDTDS::DDTDS(){}

DDTDSVal DDTDS::convertValue(float v, float tempComp = 25){
    
    DDTDSVal ret;
    float compensationCoefficient=1.0+0.02*(tempComp-25.0);    //temperature compensation formula: fFinalResult(25^C) = fFinalResult(current)/(1.0+0.02*(fTP-25.0));
    float compensationVoltage=v/compensationCoefficient;  //temperature compensation
    ret.value = (133.42*compensationVoltage*compensationVoltage*compensationVoltage - 255.86*compensationVoltage*compensationVoltage + 857.39*compensationVoltage)*0.5; //convert voltage value to tds value
    ret.voltage = v;
    return ret;
}