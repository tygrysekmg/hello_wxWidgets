/***************************************************************
 * Name:      hello4App.cpp
 * Purpose:   Code for Application Class
 * Author:    Grzegorz (w.luk1972@wp.pl)
 * Created:   2018-02-18
 * Copyright: Grzegorz (http://tygrysekmg.usermd.net/)
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "hello4App.h"
#include "hello4Main.h"

IMPLEMENT_APP(hello4App);

bool hello4App::OnInit()
{
    
    hello4Dialog* dlg = new hello4Dialog(0L, _("wxWidgets Application Template"));
    
    dlg->Show();
    return true;
}
