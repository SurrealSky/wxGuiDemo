#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#ifdef _DEBUG
#pragma comment(lib,"wxmsw31ud_xrc.lib")
#pragma comment(lib,"wxmsw31ud_richtext.lib")
#pragma comment(lib,"wxmsw31ud_ribbon.lib")
#pragma comment(lib,"wxmsw31ud_aui.lib")
#pragma comment(lib,"wxmsw31ud_propgrid.lib")
#pragma comment(lib,"wxmsw31ud_stc.lib")
#pragma comment(lib,"wxmsw31ud_qa.lib")
#pragma comment(lib,"wxmsw31ud_webview.lib")
#pragma comment(lib,"wxmsw31ud_gl.lib")
#pragma comment(lib,"wxmsw31ud_media.lib")
#pragma comment(lib,"wxmsw31ud_html.lib")
#pragma comment(lib,"wxmsw31ud_adv.lib")
#pragma comment(lib,"wxmsw31ud_core.lib")
#pragma comment(lib,"wxbase31ud_net.lib")
#pragma comment(lib,"wxbase31ud_xml.lib")
#pragma comment(lib,"wxbase31ud.lib")
#pragma comment(lib,"wxscintillad.lib")
#pragma comment(lib,"wxregexud.lib")
#pragma comment(lib,"wxpngd.lib")
#pragma comment(lib,"wxtiffd.lib")
#pragma comment(lib,"wxjpegd.lib")
#pragma comment(lib,"wxzlibd.lib")
#pragma comment(lib,"wxexpatd.lib")
#else
#pragma comment(lib,"wxmsw31u_xrc.lib")
#pragma comment(lib,"wxmsw31u_richtext.lib")
#pragma comment(lib,"wxmsw31u_aui.lib")
#pragma comment(lib,"wxmsw31u_propgrid.lib")
#pragma comment(lib,"wxmsw31u_stc.lib")
#pragma comment(lib,"wxmsw31u_ribbon.lib")
#pragma comment(lib,"wxmsw31u_gl.lib")
#pragma comment(lib,"wxmsw31u_html.lib")
#pragma comment(lib,"wxmsw31u_qa.lib")
#pragma comment(lib,"wxmsw31u_webview.lib")
#pragma comment(lib,"wxmsw31u_media.lib")
#pragma comment(lib,"wxmsw31u_adv.lib")
#pragma comment(lib,"wxmsw31u_core.lib")
#pragma comment(lib,"wxbase31u_net.lib")
#pragma comment(lib,"wxbase31u_xml.lib")
#pragma comment(lib,"wxbase31u.lib")
#pragma comment(lib,"wxscintilla.lib")
#pragma comment(lib,"wxregexu.lib")
#pragma comment(lib,"wxpng.lib")
#pragma comment(lib,"wxjpeg.lib")
#pragma comment(lib,"wxtiff.lib")
#pragma comment(lib,"wxzlib.lib")
#pragma comment(lib,"wxexpat.lib")
#endif

class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};
class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    wxDECLARE_EVENT_TABLE();
};
enum
{
    ID_Hello = 1
};
wxBEGIN_EVENT_TABLE(MyFrame, wxFrame)
EVT_MENU(ID_Hello, MyFrame::OnHello)
EVT_MENU(wxID_EXIT, MyFrame::OnExit)
EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    MyFrame* frame = new MyFrame("Hello World", wxPoint(50, 50), wxSize(450, 340));
    frame->Show(true);
    return true;
}
MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
    : wxFrame(NULL, wxID_ANY, title, pos, size)
{
    wxMenu* menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
        "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
}
void MyFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
}
void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets' Hello world sample",
        "About Hello World", wxOK | wxICON_INFORMATION);
}
void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}