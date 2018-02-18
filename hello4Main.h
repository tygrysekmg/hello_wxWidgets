/***************************************************************
 * Name:      hello4Main.h
 * Purpose:   Defines Application Frame
 * Author:    Grzegorz (w.luk1972@wp.pl)
 * Created:   2018-02-18
 * Copyright: Grzegorz (http://tygrysekmg.usermd.net/)
 * License:
 **************************************************************/

#ifndef HELLO4MAIN_H
#define HELLO4MAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "hello4App.h"


#include <wx/button.h>
#include <wx/statline.h>
class hello4Dialog: public wxDialog
{
    public:
        hello4Dialog(wxDialog *dlg, const wxString& title);
        ~hello4Dialog();

    protected:
        enum
        {
            idBtnQuit = 1000,
            idBtnAbout
        };
        wxStaticText* m_staticText1;
        wxButton* BtnAbout;
        wxStaticLine* m_staticline1;
        wxButton* BtnQuit;

    private:
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};

#endif // HELLO4MAIN_H
