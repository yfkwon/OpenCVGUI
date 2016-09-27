//
// Created by damiles on 27/09/16.
//

#ifndef OPENCVGUI_OGUICVWINDOW_H
#define OPENCVGUI_OGUICVWINDOW_H

#include "OGUIWindow.h"
#include "OGUIFormArea.h"
#include "OGUILayout.h"
#include "OGUIImageArea.h"
#include "OGUIWidget.h"

namespace OpenCVGUI {

class OGUICVWindow : public OGUIWindow{
public:
    OGUICVWindow(int width,int height,const char* title, int layoutOrientation=0);
    void imshow(string area_title, void* img);
    void addFormWidget(OGUIWidget* widget);

    vector<OGUIArea*> areas_showing;
    vector<OGUILayout*> layout;
    OGUIFormArea *formArea;



private:

};

}

#endif //OPENCVGUI_OGUICVWINDOW_H
