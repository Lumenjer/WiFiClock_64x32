#ifndef _MATRIX_H
#define _MATRIX_H

#include "config.h"
#include "main.h"
#include <RGBmatrixPanel.h>
#include <Adafruit_GFX.h>
#include <Fonts/FreeMonoBold12pt7b.h>
#include <Fonts/kongtext4pt7b.h>
#include <Fonts/FreeSansBold9pt7b.h>
#include <Fonts/TomThumb.h>
#include <Fonts/Picopixel.h>
#include <FontsCustomRu/Heebo7pt8b.h>
#include <FontsRus/FreeSerif7.h>
#include "EmbUI.h"
#include <Wire.h>
#include <SPI.h>
#include "sensors.h"
#include "timerMinim.h"


class MTX : public RGBmatrixPanel {
public:
    MTX(uint8_t a=MTX_A, uint8_t b=MTX_B, uint8_t c=MTX_C, uint8_t d=MTX_D, uint8_t clk=MTX_CLK, uint8_t lat=MTX_LAT, uint8_t oe=MTX_OE, boolean dbuf=true, uint8_t width=64, uint8_t *pinlist = rgbpin) : RGBmatrixPanel(a, b, c, d, clk, lat, oe, dbuf, width, rgbpin){} ;
    void init();
    void handle();
    bool isNightMode() {return nightMode;}
    bool isStringPrint() {return isStringPrinting;}
private:

    uint8_t frameDelay = 10;
    uint8_t oldSec = 0;
    uint16_t  animInterv = ANIM_INTERVAL;
    bool isStringPrinting;
    String &prepareText(String &source);
    int8_t textOffset;
    DynamicJsonDocument *docArrMessages = nullptr;
    byte txtOffset = 0;
    bool mtxStarted = false;
    bool nightMode;
    bool showMorning = false;
    bool showPoints;
    bool switchAnim;
    bool displayForecastNow = true;
    uint16_t myRED = Color333(3, 0, 0);
    uint16_t myGREEN = Color333(0, 3, 0);
    uint16_t myBLUE = Color333(0, 0, 3);
    uint16_t myWHITE = Color333(3, 3, 3);
    uint16_t myYELLOW = Color333(3, 3, 0);
    uint16_t myCYAN = Color333(0, 3, 3);
    uint16_t myMAGENTA = Color333(3, 0, 3);
    uint16_t myShadow = Color333(5, 0, 3);
    uint16_t myROSE = Color333(3, 0, 5);
    uint16_t myBLACK = Color333(0, 0, 0);
    bool showTod = true;
    bool showWthTxt = true;
    bool switchHome;
    String getTime();
    int getHour(){const tm* t = localtime(embui.timeProcessor.now()); return t->tm_hour;}
    int getMin(){const tm* t = localtime(embui.timeProcessor.now()); return t->tm_min;}
    int getSec(){const tm* t = localtime(embui.timeProcessor.now()); return t->tm_sec;}
    int getMonth(){const tm* t = localtime(embui.timeProcessor.now()); return t->tm_mon + 1;}
    int getMDay(){const tm* t = localtime(embui.timeProcessor.now()); return t->tm_mday;}
    int getWDay(){const tm* t = localtime(embui.timeProcessor.now()); return t->tm_wday;}
    int getYear(){const tm* t = localtime(embui.timeProcessor.now()); return t->tm_year + 1900;}
    String getMonthTxt(){ 
        String result;
        switch (getMonth()) {
            case 1: result = "????????????"; break;
            case 2: result = "??????????????"; break;
            case 3: result = "??????????"; break;
            case 4: result = "????????????"; break;
            case 5: result = "??????"; break;
            case 6: result = "????????"; break;
            case 7: result = "????????"; break;
            case 8: result = "??????????????"; break;
            case 9: result = "????????????????"; break;
            case 10: result = "??????????????"; break;
            case 11: result = "????????????"; break;
            case 12: result = "??????????????"; break;
    }
    return result;
    }
    String getWDayShort(){
        String result;
        switch (getWDay()) {
            case 0: result = "Bc"; break;
            case 1: result = "Kn"; break;
            case 2: result = "Bt"; break;
            case 3: result = "Cp"; break;
            case 4: result = "Ht"; break;
            case 5: result = "Kt"; break;
            case 6: result = "Cb"; break;
        }
        return result;
    }
    String getWDayTxt(){
        String result;
        switch (getWDay()) {
            case 0: result = " ??????????????????????"; break;
            case 1: result = " ??????????????????????"; break;
            case 2: result = " ??????????????"; break;
            case 3: result = " ??????????"; break;
            case 4: result = " ??????????????"; break;
            case 5: result = " ??????????????"; break;
            case 6: result = " ??????????????"; break;
        }
    return result;
    }
    int getTomorrow(){
        int tommorrow;
        if (((getMonth() == 4 || getMonth() == 6 || getMonth() == 9 || getMonth() == 11) && getMDay() == 30) || ((getMonth() == 1 || getMonth() == 3 || getMonth() == 5 || getMonth() == 7 || getMonth() == 8 || getMonth() == 10 || getMonth() == 12) && getMDay() == 31) || ((getMonth() == 2) && getMDay() == 28))  //?? ???????? ???????????????????? ???????
        {
        tommorrow = 1; 
        } else { 
        tommorrow = getMDay() + 1;
        }
        return tommorrow;
    };
    void start();
    void getClock();
    void getHome();
    void getWeather();
    void getNightMode();
    void getScreen();
    void getImage();
    void sendStringToMtx(const char* text = nullptr, bool forcePrint = false, bool clearQueue = false, const int8_t textOffset = -128, const int16_t fixedPos = 0);
    void doPrintStringToMtx(const char* text = nullptr, const int8_t textOffset = -128, const int16_t fixedPos = 0);
    void setTextOffset(uint8_t val) { txtOffset=val;}                   /// ???????? ?????????? ???? ??????????????????????????
    uint16_t _letterColor;
    timerMinim tmStringStepTime;    // ?????? ???????????????? ????????????, ?? ????
    timerMinim screenAnimInterv;    // ???????????????? ???????????????? ?????????????? Home ?? Weather
    bool fillStringManual(const char* text,  bool stopText = false, bool isInverse = false, int32_t pos = 0, int8_t letSpace = 1, int8_t txtOffset = 0, int8_t letWidth = 5, int8_t letHeight = 8); // -2147483648

};



extern MTX matrix;
#endif