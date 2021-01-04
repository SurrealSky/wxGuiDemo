#ifndef HEVCANALYZER_H_INCLUDED
#define HEVCANALYZER_H_INCLUDED

// disable the MSVC specify warnings
#if defined(_MSC_VER)
    #pragma warning(disable:4273)
#endif

#include <cmath>
#include <cassert>

#include <wx/wx.h>
#include <wx/aui/aui.h>
#include <wx/aui/auibook.h>
#include <wx/listctrl.h>
#include <wx/file.h>
#include <wx/rawbmp.h>
#include <wx/thread.h>
#include <wx/imaglist.h>
#include <wx/artprov.h>
#include <wx/fs_mem.h>
#include <wx/htmllbox.h>
#include <wx/imaglist.h>
#include <wx/arrstr.h>
#include <wx/graphics.h>
#include <wx/dcbuffer.h>
#include <wx/regex.h>
#include <wx/stdpaths.h>
#include <wx/wxsqlite3.h>

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
#pragma comment(lib,"sqllite3d.lib")
#pragma comment(lib,"wxsqlite3d.lib")
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
#pragma comment(lib,"sqllite3.lib")
#pragma comment(lib,"wxsqlite3.lib")
#endif



#include "TLibVideoIO/TVideoIOYuv.h"

#define MINDIFF    1e-15

void               g_tranformYUV2RGB(const int w, const int h, TComPicYuv* pcPicYuvOrg, const int iYUVBit,
                        wxBitmap& bmp, wxBitmap& bmp_Y, wxBitmap& bmp_U, wxBitmap& bmp_V, bool bUseYUV = false);
bool               g_parseResolutionFromFilename(const wxString &filename, wxString  &width, wxString &height);
unsigned long long g_getCurrentMS();

#endif // HEVCANALYZER_H_INCLUDED
