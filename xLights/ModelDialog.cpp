#include "ModelDialog.h"
#include "ModelClass.h"
#include <wx/msgdlg.h>
#include <wx/clipbrd.h>

//(*InternalHeaders(ModelDialog)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(ModelDialog)
const long ModelDialog::ID_STATICTEXT1 = wxNewId();
const long ModelDialog::ID_TEXTCTRL1 = wxNewId();
const long ModelDialog::ID_STATICTEXT5 = wxNewId();
const long ModelDialog::ID_CHOICE_DisplayAs = wxNewId();
const long ModelDialog::ID_STATICTEXT12 = wxNewId();
const long ModelDialog::ID_CHOICE_STRING_TYPE = wxNewId();
const long ModelDialog::ID_STATICTEXT2 = wxNewId();
const long ModelDialog::ID_SPINCTRL1 = wxNewId();
const long ModelDialog::ID_STATICTEXT3 = wxNewId();
const long ModelDialog::ID_SPINCTRL2 = wxNewId();
const long ModelDialog::ID_STATICTEXT4 = wxNewId();
const long ModelDialog::ID_SPINCTRL3 = wxNewId();
const long ModelDialog::ID_STATICTEXT6 = wxNewId();
const long ModelDialog::ID_SPINCTRL4 = wxNewId();
const long ModelDialog::ID_STATICTEXT8 = wxNewId();
const long ModelDialog::ID_RADIOBUTTON1 = wxNewId();
const long ModelDialog::ID_RADIOBUTTON2 = wxNewId();
const long ModelDialog::ID_STATICTEXT11 = wxNewId();
const long ModelDialog::ID_RADIOBUTTON4 = wxNewId();
const long ModelDialog::ID_RADIOBUTTON3 = wxNewId();
const long ModelDialog::ID_STATICTEXT9 = wxNewId();
const long ModelDialog::ID_CHOICE3 = wxNewId();
const long ModelDialog::ID_STATICTEXT10 = wxNewId();
const long ModelDialog::ID_CHECKBOX1 = wxNewId();
const long ModelDialog::ID_STATICTEXT7 = wxNewId();
const long ModelDialog::ID_Slider_Model_Brightness = wxNewId();
const long ModelDialog::ID_SPINCTRL5 = wxNewId();
const long ModelDialog::ID_STATICTEXT13 = wxNewId();
const long ModelDialog::ID_CHECKBOX2 = wxNewId();
const long ModelDialog::ID_GRID_START_CHANNELS = wxNewId();
const long ModelDialog::ID_SCROLLEDWINDOW1 = wxNewId();
const long ModelDialog::ID_STATICTEXT14 = wxNewId();
const long ModelDialog::ID_BITMAPBUTTON_CUSTOM_CUT = wxNewId();
const long ModelDialog::ID_BITMAPBUTTON_CUSTOM_COPY = wxNewId();
const long ModelDialog::ID_BITMAPBUTTON_CUSTOM_PASTE = wxNewId();
const long ModelDialog::ID_BUTTON_CUSTOM_MODEL_HELP = wxNewId();
const long ModelDialog::ID_GRID_Custom = wxNewId();
const long ModelDialog::ID_SCROLLEDWINDOW2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ModelDialog,wxDialog)
    //(*EventTable(ModelDialog)
    //*)
END_EVENT_TABLE()

ModelDialog::ModelDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(ModelDialog)
    wxFlexGridSizer* FlexGridSizer4;
    wxFlexGridSizer* FlexGridSizer3;
    wxFlexGridSizer* FlexGridSizer5;
    wxFlexGridSizer* FlexGridSizer2;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer1;
    wxFlexGridSizer* FlexGridSizer6;
    wxFlexGridSizer* FlexGridSizer1;
    wxStdDialogButtonSizer* StdDialogButtonSizer1;

    Create(parent, wxID_ANY, _("Model"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    SetHelpText(_("Pixels Start in the upper left and go right or down depending on Vertical or Horizontal orientation.  Trees are always Vertical."));
    FlexGridSizer1 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer2 = new wxFlexGridSizer(0, 2, 0, 0);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Model Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer2->Add(StaticText1, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Name = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    FlexGridSizer2->Add(TextCtrl_Name, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Display As"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    FlexGridSizer2->Add(StaticText5, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_DisplayAs = new wxChoice(this, ID_CHOICE_DisplayAs, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_DisplayAs"));
    Choice_DisplayAs->SetSelection( Choice_DisplayAs->Append(_("Tree 360")) );
    Choice_DisplayAs->Append(_("Tree 270"));
    Choice_DisplayAs->Append(_("Tree 180"));
    Choice_DisplayAs->Append(_("Tree 90"));
    Choice_DisplayAs->Append(_("Vert Matrix"));
    Choice_DisplayAs->Append(_("Horiz Matrix"));
    Choice_DisplayAs->Append(_("Single Line"));
    Choice_DisplayAs->Append(_("Arches"));
    Choice_DisplayAs->Append(_("Window Frame"));
    Choice_DisplayAs->Append(_("Star"));
    Choice_DisplayAs->Append(_("Wreath"));
    Choice_DisplayAs->Append(_("Custom"));
    FlexGridSizer2->Add(Choice_DisplayAs, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText9 = new wxStaticText(this, ID_STATICTEXT12, _("Type of String"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    FlexGridSizer2->Add(StaticText9, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_StringType = new wxChoice(this, ID_CHOICE_STRING_TYPE, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_STRING_TYPE"));
    Choice_StringType->SetSelection( Choice_StringType->Append(_("RGB Nodes")) );
    Choice_StringType->Append(_("RBG Nodes"));
    Choice_StringType->Append(_("GBR Nodes"));
    Choice_StringType->Append(_("GRB Nodes"));
    Choice_StringType->Append(_("BRG Nodes"));
    Choice_StringType->Append(_("BGR Nodes"));
    Choice_StringType->Append(_("3 Channel RGB"));
    Choice_StringType->Append(_("Single Color Red"));
    Choice_StringType->Append(_("Single Color Green"));
    Choice_StringType->Append(_("Single Color Blue"));
    Choice_StringType->Append(_("Single Color White"));
    Choice_StringType->Append(_("Strobes White 3fps"));
    FlexGridSizer2->Add(Choice_StringType, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText_Strings = new wxStaticText(this, ID_STATICTEXT2, _("Actual # of Strings"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    FlexGridSizer2->Add(StaticText_Strings, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    SpinCtrl_parm1 = new wxSpinCtrl(this, ID_SPINCTRL1, _T("1"), wxDefaultPosition, wxSize(60,21), 0, 1, 500, 1, _T("ID_SPINCTRL1"));
    SpinCtrl_parm1->SetValue(_T("1"));
    FlexGridSizer2->Add(SpinCtrl_parm1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText_Nodes = new wxStaticText(this, ID_STATICTEXT3, _("# of RGB Nodes per String"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    FlexGridSizer2->Add(StaticText_Nodes, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    SpinCtrl_parm2 = new wxSpinCtrl(this, ID_SPINCTRL2, _T("50"), wxDefaultPosition, wxSize(60,21), 0, 1, 65535, 50, _T("ID_SPINCTRL2"));
    SpinCtrl_parm2->SetValue(_T("50"));
    FlexGridSizer2->Add(SpinCtrl_parm2, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText_Strands = new wxStaticText(this, ID_STATICTEXT4, _("# of Strands per String"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText_Strands->SetHelpText(_("How many times is a string folded\?"));
    FlexGridSizer2->Add(StaticText_Strands, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    SpinCtrl_parm3 = new wxSpinCtrl(this, ID_SPINCTRL3, _T("1"), wxDefaultPosition, wxSize(60,21), 0, 1, 100, 1, _T("ID_SPINCTRL3"));
    SpinCtrl_parm3->SetValue(_T("1"));
    FlexGridSizer2->Add(SpinCtrl_parm3, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Start Channel"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    FlexGridSizer2->Add(StaticText6, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    SpinCtrl_StartChannel = new wxSpinCtrl(this, ID_SPINCTRL4, _T("1"), wxDefaultPosition, wxSize(90,21), 0, 1, 99999, 1, _T("ID_SPINCTRL4"));
    SpinCtrl_StartChannel->SetValue(_T("1"));
    FlexGridSizer2->Add(SpinCtrl_StartChannel, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT8, _("Starting Corner"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    StaticText3->SetHelpText(_("The point at which pixels in your model start."));
    FlexGridSizer2->Add(StaticText3, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    RadioButton_TopLeft = new wxRadioButton(this, ID_RADIOBUTTON1, _("Top Left"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP, wxDefaultValidator, _T("ID_RADIOBUTTON1"));
    RadioButton_TopLeft->SetValue(true);
    BoxSizer1->Add(RadioButton_TopLeft, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    RadioButton_TopRight = new wxRadioButton(this, ID_RADIOBUTTON2, _("Top Right"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON2"));
    BoxSizer1->Add(RadioButton_TopRight, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2->Add(BoxSizer1, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText8 = new wxStaticText(this, ID_STATICTEXT11, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    FlexGridSizer2->Add(StaticText8, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    RadioButton_BotLeft = new wxRadioButton(this, ID_RADIOBUTTON4, _("Bottom Left"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON4"));
    BoxSizer2->Add(RadioButton_BotLeft, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    RadioButton_BotRight = new wxRadioButton(this, ID_RADIOBUTTON3, _("Bottom Right"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_RADIOBUTTON3"));
    BoxSizer2->Add(RadioButton_BotRight, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2->Add(BoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT9, _("Smooth Edges - antialias\n(future capability)"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    FlexGridSizer2->Add(StaticText4, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Antialias = new wxChoice(this, ID_CHOICE3, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
    Choice_Antialias->SetSelection( Choice_Antialias->Append(_("None")) );
    Choice_Antialias->Append(_("2x"));
    Choice_Antialias->Disable();
    FlexGridSizer2->Add(Choice_Antialias, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText7 = new wxStaticText(this, ID_STATICTEXT10, _("Part of my display"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    FlexGridSizer2->Add(StaticText7, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_MyDisplay = new wxCheckBox(this, ID_CHECKBOX1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    CheckBox_MyDisplay->SetValue(true);
    FlexGridSizer2->Add(CheckBox_MyDisplay, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT7, _("Model Brightness\nAdjustment"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    FlexGridSizer2->Add(StaticText2, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer6 = new wxFlexGridSizer(0, 2, 0, 0);
    Slider_Model_Brightness = new wxSlider(this, ID_Slider_Model_Brightness, 0, -100, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_Slider_Model_Brightness"));
    FlexGridSizer6->Add(Slider_Model_Brightness, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SpinCtrl1 = new wxSpinCtrl(this, ID_SPINCTRL5, _T("0"), wxDefaultPosition, wxSize(52,21), 0, -100, 100, 0, _T("ID_SPINCTRL5"));
    SpinCtrl1->SetValue(_T("0"));
    FlexGridSizer6->Add(SpinCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2->Add(FlexGridSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText10 = new wxStaticText(this, ID_STATICTEXT13, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
    FlexGridSizer2->Add(StaticText10, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3 = new wxFlexGridSizer(2, 1, 0, 0);
    FlexGridSizer3->AddGrowableRow(1);
    cbIndividualStartNumbers = new wxCheckBox(this, ID_CHECKBOX2, _("Individual Start Chans"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
    cbIndividualStartNumbers->SetValue(false);
    FlexGridSizer3->Add(cbIndividualStartNumbers, 1, wxTOP|wxBOTTOM|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 10);
    ScrolledWindow1 = new wxScrolledWindow(this, ID_SCROLLEDWINDOW1, wxDefaultPosition, wxDefaultSize, wxVSCROLL, _T("ID_SCROLLEDWINDOW1"));
    gridStartChannels = new wxGrid(ScrolledWindow1, ID_GRID_START_CHANNELS, wxPoint(-1,-3), wxSize(232,323), wxVSCROLL|wxHSCROLL|wxFULL_REPAINT_ON_RESIZE, _T("ID_GRID_START_CHANNELS"));
    gridStartChannels->CreateGrid(0,2);
    gridStartChannels->EnableEditing(true);
    gridStartChannels->EnableGridLines(true);
    gridStartChannels->SetColLabelSize(20);
    gridStartChannels->SetRowLabelSize(25);
    gridStartChannels->SetDefaultColSize(90, true);
    gridStartChannels->SetColLabelValue(0, _("Start Ch."));
    gridStartChannels->SetColLabelValue(1, _("End Ch."));
    gridStartChannels->SetDefaultCellFont( gridStartChannels->GetFont() );
    gridStartChannels->SetDefaultCellTextColour( gridStartChannels->GetForegroundColour() );
    FlexGridSizer3->Add(ScrolledWindow1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4 = new wxFlexGridSizer(2, 1, 0, 0);
    FlexGridSizer4->AddGrowableRow(1);
    FlexGridSizer5 = new wxFlexGridSizer(0, 5, 0, 0);
    StaticTextCustomModel = new wxStaticText(this, ID_STATICTEXT14, _("Custom Model"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
    FlexGridSizer5->Add(StaticTextCustomModel, 1, wxTOP|wxBOTTOM|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButtonCustomCut = new wxBitmapButton(this, ID_BITMAPBUTTON_CUSTOM_CUT, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_CUT")),wxART_BUTTON), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON_CUSTOM_CUT"));
    FlexGridSizer5->Add(BitmapButtonCustomCut, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButtonCustomCopy = new wxBitmapButton(this, ID_BITMAPBUTTON_CUSTOM_COPY, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_COPY")),wxART_BUTTON), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON_CUSTOM_COPY"));
    BitmapButtonCustomCopy->SetDefault();
    FlexGridSizer5->Add(BitmapButtonCustomCopy, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButtonCustomPaste = new wxBitmapButton(this, ID_BITMAPBUTTON_CUSTOM_PASTE, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_PASTE")),wxART_BUTTON), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON_CUSTOM_PASTE"));
    BitmapButtonCustomPaste->SetDefault();
    FlexGridSizer5->Add(BitmapButtonCustomPaste, 1, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    ButtonCustomModelHelp = new wxButton(this, ID_BUTTON_CUSTOM_MODEL_HELP, _("Help"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON_CUSTOM_MODEL_HELP"));
    FlexGridSizer5->Add(ButtonCustomModelHelp, 1, wxLEFT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4->Add(FlexGridSizer5, 1, wxTOP|wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    ScrolledWindow2 = new wxScrolledWindow(this, ID_SCROLLEDWINDOW2, wxDefaultPosition, wxSize(430,323), wxVSCROLL|wxHSCROLL, _T("ID_SCROLLEDWINDOW2"));
    ScrolledWindow2->SetMinSize(wxSize(504,-1));
    GridCustom = new wxGrid(ScrolledWindow2, ID_GRID_Custom, wxPoint(6,5), wxSize(484,318), 0, _T("ID_GRID_Custom"));
    GridCustom->CreateGrid(1,1);
    GridCustom->EnableEditing(true);
    GridCustom->EnableGridLines(true);
    GridCustom->SetColLabelSize(20);
    GridCustom->SetRowLabelSize(30);
    GridCustom->SetDefaultColSize(30, true);
    GridCustom->SetDefaultCellFont( GridCustom->GetFont() );
    GridCustom->SetDefaultCellTextColour( GridCustom->GetForegroundColour() );
    FlexGridSizer4->Add(ScrolledWindow2, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(FlexGridSizer4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StdDialogButtonSizer1 = new wxStdDialogButtonSizer();
    StdDialogButtonSizer1->AddButton(new wxButton(this, wxID_OK, wxEmptyString));
    StdDialogButtonSizer1->AddButton(new wxButton(this, wxID_CANCEL, wxEmptyString));
    StdDialogButtonSizer1->Realize();
    FlexGridSizer1->Add(StdDialogButtonSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);
    Center();

    Connect(ID_CHOICE_DisplayAs,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&ModelDialog::OnChoice_DisplayAsSelect);
    Connect(ID_CHOICE_STRING_TYPE,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&ModelDialog::OnChoice_StringTypeSelect);
    Connect(ID_SPINCTRL1,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&ModelDialog::OnSpinCtrl_parm1Change);
    Connect(ID_SPINCTRL2,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&ModelDialog::OnSpinCtrl_parm2Change);
    Connect(ID_SPINCTRL3,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&ModelDialog::OnSpinCtrl_parm3Change);
    Connect(ID_SPINCTRL4,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&ModelDialog::OnSpinCtrl_StartChannelChange);
    Connect(ID_Slider_Model_Brightness,wxEVT_SCROLL_TOP|wxEVT_SCROLL_BOTTOM|wxEVT_SCROLL_LINEUP|wxEVT_SCROLL_LINEDOWN|wxEVT_SCROLL_PAGEUP|wxEVT_SCROLL_PAGEDOWN|wxEVT_SCROLL_THUMBTRACK|wxEVT_SCROLL_THUMBRELEASE|wxEVT_SCROLL_CHANGED,(wxObjectEventFunction)&ModelDialog::OnSlider_Model_BrightnessCmdScroll);
    Connect(ID_Slider_Model_Brightness,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&ModelDialog::OnSlider_Model_BrightnessCmdScroll);
    Connect(ID_CHECKBOX2,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&ModelDialog::OncbIndividualStartNumbersClick);
    Connect(ID_GRID_START_CHANNELS,wxEVT_GRID_CELL_CHANGE,(wxObjectEventFunction)&ModelDialog::OngridStartChannelsCellChange);
    Connect(ID_BITMAPBUTTON_CUSTOM_CUT,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ModelDialog::OnBitmapButtonCustomCutClick);
    Connect(ID_BITMAPBUTTON_CUSTOM_COPY,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ModelDialog::OnBitmapButtonCustomCopyClick);
    Connect(ID_BITMAPBUTTON_CUSTOM_PASTE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ModelDialog::OnBitmapButtonCustomPasteClick);
    Connect(ID_BUTTON_CUSTOM_MODEL_HELP,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ModelDialog::OnButtonCustomModelHelpClick);
    Connect(ID_GRID_Custom,wxEVT_GRID_CELL_CHANGE,(wxObjectEventFunction)&ModelDialog::OnGridCustomCellChange);
    //*)

    gridStartChannels->SetDefaultEditor(new wxGridCellNumberEditor());
    GridCustom->SetDefaultEditor(new wxGridCellNumberEditor());
    HasCustomData = false;
}

ModelDialog::~ModelDialog()
{
    //(*Destroy(ModelDialog)
    //*)
}


// make grid the size specified by the spin controls
void ModelDialog::ResizeCustomGrid()
{
    int numCols=SpinCtrl_parm1->GetValue();
    int numRows=SpinCtrl_parm2->GetValue();
    int deltaCols=numCols - GridCustom->GetNumberCols();
    int deltaRows=numRows - GridCustom->GetNumberRows();
    if (deltaCols > 0) GridCustom->AppendCols(deltaCols);
    if (deltaRows > 0) GridCustom->AppendRows(deltaRows);
    if (deltaCols < 0) GridCustom->DeleteCols(numCols,-deltaCols);
    if (deltaRows < 0) GridCustom->DeleteRows(numRows,-deltaRows);
}

bool ModelDialog::IsCustom()
{
    return Choice_DisplayAs->GetStringSelection() == "Custom";
}

// initialize grid with saved values
wxString ModelDialog::GetCustomGridData()
{
    wxString customChannelData, value;
    if (IsCustom())
    {
        int numCols=GridCustom->GetNumberCols();
        int numRows=GridCustom->GetNumberRows();
        for(int row=0; row < numRows; row++)
        {
            if (row > 0) customChannelData+=";";
            for(int col=0; col<numCols; col++)
            {
                if (col > 0) customChannelData+=",";
                value = GridCustom->GetCellValue(row,col);
                if (value == "0" || value.StartsWith("-")) value.clear();
                customChannelData += value;
            }
        }
    }
    return customChannelData;
}

// Initialize custom grid with saved values
// Must be called AFTER Choice_DisplayAs & SpinCtrl_parm1 & SpinCtrl_parm2 have been set
void ModelDialog::SetCustomGridData(const wxString& customChannelData)
{
    wxString value;
    wxArrayString cols;

    if (!IsCustom()) return;

    HasCustomData = true;
    if (customChannelData.IsEmpty())
    {
        ResizeCustomGrid();
        return;
    }

    wxArrayString rows=wxSplit(customChannelData,';');
    for(size_t row=0; row < rows.size(); row++)
    {
        if (row >= GridCustom->GetNumberRows()) GridCustom->AppendRows();
        cols=wxSplit(rows[row],',');
        for(size_t col=0; col < cols.size(); col++)
        {
            if (col >= GridCustom->GetNumberCols()) GridCustom->AppendCols();
            value=cols[col];
            if (!value.IsEmpty() && value != "0")
            {
                GridCustom->SetCellValue(row,col,value);
            }
        }
    }
    SpinCtrl_parm1->SetValue(GridCustom->GetNumberCols());
    SpinCtrl_parm2->SetValue(GridCustom->GetNumberRows());
}


int ModelDialog::GetCustomMaxChannel()
{
    // find max node number
    int numCols=GridCustom->GetNumberCols();
    int numRows=GridCustom->GetNumberRows();
    long val,maxval=0;
    wxString valstr;
    for(int row=0; row < numRows; row++)
    {
        for(int col=0; col<numCols; col++)
        {
            valstr = GridCustom->GetCellValue(row,col);
            if (valstr.ToLong(&val))
            {
                maxval=std::max(val,maxval);
            }
        }
    }
    return maxval;
}

// for models that are not custom
int ModelDialog::GetChannelsPerStringStd()
{
    wxString StringType=Choice_StringType->GetStringSelection();
    wxString DisplayAs=Choice_DisplayAs->GetStringSelection();
    bool SingleChannel = ModelClass::HasSingleChannel(StringType);
    if (SingleChannel) return 1;
    if (ModelClass::HasSingleNode(StringType)) return 3;
    if (DisplayAs != "Window Frame")
    {
        return SpinCtrl_parm2->GetValue()*3;
    }
    else
    {
        return (SpinCtrl_parm1->GetValue()+2*SpinCtrl_parm2->GetValue()+SpinCtrl_parm3->GetValue())*3;
    }
}


int ModelDialog::GetNumberOfStrings()
{
    wxString DisplayAs=Choice_DisplayAs->GetStringSelection();
    return (ModelClass::HasOneString(DisplayAs)) ? 1 : SpinCtrl_parm1->GetValue();
}


void ModelDialog::UpdateLabels()
{
    wxString DisplayAs=Choice_DisplayAs->GetStringSelection();
    wxString StringType=Choice_StringType->GetStringSelection();
    wxString NodeLabel = ModelClass::HasSingleChannel(StringType) ? _("lights") : _("RGB Nodes");
    wxString s;

    if (DisplayAs == "Arches")
    {
        StaticText_Strings->SetLabelText(_("# of Arches"));
        s=_("# of ") + NodeLabel + _(" per Arch");
        StaticText_Nodes->SetLabelText(s);
        StaticText_Strands->SetLabelText(_("n/a"));
        SpinCtrl_parm3->SetValue(1);
        SpinCtrl_parm3->Enable(false);
    }
    else if (DisplayAs == "Window Frame")
    {
        s=_("# of ") + NodeLabel + _(" Top");
        StaticText_Strings->SetLabelText(s);
        s=_("# of ") + NodeLabel + _(" Left/Right");
        StaticText_Nodes->SetLabelText(s);
        s=_("# of ") + NodeLabel + _(" Bottom");
        StaticText_Strands->SetLabelText(s);
        SpinCtrl_parm3->Enable(true);
    }
    else if (DisplayAs == "Star"
            )
    {
        StaticText_Strings->SetLabelText(_("Actual # of Strings"));
        s=_("# of ") + NodeLabel + _(" per String");
        StaticText_Nodes->SetLabelText(s);
        StaticText_Strands->SetLabelText(_("# of points"));
        SpinCtrl_parm3->Enable(true);
    }
    else if (DisplayAs == "Single Line" || DisplayAs == "Wreath")
    {
        StaticText_Strings->SetLabelText(_("Actual # of Strings"));
        s=_("# of ") + NodeLabel + _(" per String");
        StaticText_Nodes->SetLabelText(s);
        StaticText_Strands->SetLabelText(_("n/a"));
        SpinCtrl_parm3->SetValue(1);
        SpinCtrl_parm3->Enable(false);
    }
    else if (DisplayAs == "Custom")
    {
        StaticText_Strings->SetLabelText(_("Model Width"));
        StaticText_Nodes->SetLabelText(_("Model Height"));
        StaticText_Strands->SetLabelText(_("n/a"));
        SpinCtrl_parm3->SetValue(1);
        SpinCtrl_parm3->Enable(false);
    }
    else
    {
        // matrix or tree or wreath
        StaticText_Strings->SetLabelText(_("Actual # of Strings"));
        s=_("# of ") + NodeLabel + _(" per String");
        StaticText_Nodes->SetLabelText(s);
        StaticText_Strands->SetLabelText(_("# of Strands per String"));
        SpinCtrl_parm3->Enable(true);
    }
    UpdateStartChannels();
    bool CustomFlag = IsCustom();
    GridCustom->Show(CustomFlag);

    // set start corner text
    if (DisplayAs == "Wreath" || DisplayAs == "Star")
    {
        RadioButton_BotRight->SetLabelText(_("Btm ctr, CCW"));
        RadioButton_TopRight->SetLabelText(_("Top ctr, CW"));
        RadioButton_BotLeft->SetLabelText (_("Btm ctr, CW"));
        RadioButton_TopLeft->SetLabelText (_("Top ctr, CCW"));
    }
    else if (CustomFlag)
    {
        RadioButton_BotRight->SetLabelText(_("n/a"));
        RadioButton_TopRight->SetLabelText(_("n/a"));
        RadioButton_BotLeft->SetLabelText (_("n/a"));
        RadioButton_TopLeft->SetLabelText (_("n/a"));
    }
    else
    {
        RadioButton_BotRight->SetLabelText(_("Bottom Right"));
        RadioButton_TopRight->SetLabelText(_("Top Right"));
        RadioButton_BotLeft->SetLabelText (_("Bottom Left"));
        RadioButton_TopLeft->SetLabelText (_("Top Left"));
    }
    RadioButton_BotRight->Enable(!CustomFlag);
    RadioButton_TopRight->Enable(!CustomFlag);
    RadioButton_BotLeft->Enable(!CustomFlag);
    RadioButton_TopLeft->Enable(!CustomFlag);
    if (CustomFlag && !HasCustomData) ResizeCustomGrid();
}


void ModelDialog::OnChoice_DisplayAsSelect(wxCommandEvent& event)
{
    UpdateLabels();
}

void ModelDialog::OncbIndividualStartNumbersClick(wxCommandEvent& event)
{
    UpdateStartChannels();
}

void ModelDialog::UpdateStartChannels()
{
    int StringStartChan,StringEndChan;
    long StringStartChanLong;
    wxString tmpStr;
    int StringCnt = GetNumberOfStrings();
    bool OneString = StringCnt == 1;
    int ChannelsPerString = GetChannelsPerStringStd();
    if (IsCustom())
    {
        int maxval = GetCustomMaxChannel();
        switch (ChannelsPerString)
        {
        case 1:
            // traditional strings
            StringCnt = maxval;
            break;
        case 3:
            // dumb rgb
            StringCnt = maxval;
            break;
        default:
            // rgb pixels
            ChannelsPerString = maxval*3;
            break;
        }
    }

    // Update number of grid rows
    int curRowCnt = gridStartChannels->GetNumberRows();
    if (StringCnt > curRowCnt )
    {
        gridStartChannels->AppendRows(StringCnt - curRowCnt);
    }
    else if ( StringCnt < curRowCnt )
    {
        gridStartChannels->DeleteRows(StringCnt, curRowCnt - StringCnt);
    }

    // if only 1 string, then disable individual string start channels
    if (OneString) cbIndividualStartNumbers->SetValue(false);
    cbIndividualStartNumbers->Enable(!OneString);

    // update grid
    if(cbIndividualStartNumbers->IsChecked())
    {
        // update end channel numbers only
        for (int stringnum=0; stringnum<StringCnt; stringnum++)
        {
            tmpStr = gridStartChannels->GetCellValue(stringnum,0);
            if (tmpStr.ToLong(&StringStartChanLong) && StringStartChanLong > 0)
            {
                StringEndChan=StringStartChanLong + ChannelsPerString - 1;
                gridStartChannels->SetCellValue(stringnum,1, wxString::Format("%i",StringEndChan));
            }
        }
        SetReadOnly(false);
    }
    else
    {
        // update start and end channel numbers
        int startchan = SpinCtrl_StartChannel->GetValue();
        for (int stringnum=0; stringnum<StringCnt; stringnum++)
        {
            StringStartChan=startchan + (stringnum*ChannelsPerString);
            StringEndChan=StringStartChan + ChannelsPerString - 1;
            gridStartChannels->SetCellValue(stringnum,0, wxString::Format("%i",StringStartChan));
            gridStartChannels->SetCellValue(stringnum,1, wxString::Format("%i",StringEndChan));
        }
        SetReadOnly(true);
    }

}

void ModelDialog::SetReadOnly(bool readonly)
{
    int ii;

    for(ii=0; ii < gridStartChannels->GetNumberRows(); ii++)
    {
        gridStartChannels->SetReadOnly(ii,0,readonly);
        //End channel is always read only.
        gridStartChannels->SetReadOnly(ii,1,true);
    }
}
void ModelDialog::OnSpinCtrl_parm1Change(wxSpinEvent& event)
{
    if (IsCustom())
    {
        ResizeCustomGrid();
    }
    else
    {
        UpdateStartChannels();
    }
}

void ModelDialog::OnSpinCtrl_parm2Change(wxSpinEvent& event)
{
    if (IsCustom())
    {
        ResizeCustomGrid();
    }
    else
    {
        UpdateStartChannels();
    }
}

void ModelDialog::OnSpinCtrl_StartChannelChange(wxSpinEvent& event)
{
    UpdateStartChannels();
}

void ModelDialog::OngridStartChannelsCellChange(wxGridEvent& event)
{
    int row = event.GetRow(),
        col = event.GetCol();
    wxString tmpStr;
    long val;

    if (col==0)
    {
        tmpStr = gridStartChannels->GetCellValue(row,col);
        if ( (!tmpStr.ToLong(&val) || val <= 0) )
        {
            wxMessageBox(_("Cell value must be a positive numeric value"));
            gridStartChannels->SetCellValue(row,col,"1");
        }
        else
        {
            UpdateStartChannels();
        }
    }
    event.Skip();
}

// does not update name
void ModelDialog::UpdateXml(wxXmlNode* e)
{
    int ii;
    long numStrings;
    wxString tempStr;
    if(e->HasAttribute("Advanced"))
    {
        e->DeleteAttribute("Advanced");
        tempStr = e->GetAttribute("parm1");
        tempStr.ToLong(&numStrings);
        for(ii=0; ii < numStrings; ii++)
        {
            e->DeleteAttribute(ModelClass::StartChanAttrName(ii));
        }
    }
    if (e->HasAttribute("CustomModel"))
    {
        e->DeleteAttribute("CustomModel");
    }
    if (cbIndividualStartNumbers->IsChecked())
    {
        e->AddAttribute("Advanced", "1");
        for(ii=0; ii < gridStartChannels->GetNumberRows(); ii++)
        {
            e->AddAttribute(ModelClass::StartChanAttrName(ii),gridStartChannels->GetCellValue(ii,0));
        }
    }
    if (e->HasAttribute("StartSide")) e->DeleteAttribute("StartSide");
    e->DeleteAttribute("DisplayAs");
    e->DeleteAttribute("StringType");
    e->DeleteAttribute("parm1");
    e->DeleteAttribute("parm2");
    e->DeleteAttribute("parm3");
     e->DeleteAttribute("ModelBrightness");
    e->DeleteAttribute("StartChannel");
    e->DeleteAttribute("Order");
    e->DeleteAttribute("Dir");
    e->DeleteAttribute("Antialias");
    e->AddAttribute("DisplayAs", Choice_DisplayAs->GetStringSelection());
    e->AddAttribute("StringType", Choice_StringType->GetStringSelection());
    e->AddAttribute("parm1", wxString::Format("%d",SpinCtrl_parm1->GetValue()));
    e->AddAttribute("parm2", wxString::Format("%d",SpinCtrl_parm2->GetValue()));
    e->AddAttribute("parm3", wxString::Format("%d",SpinCtrl_parm3->GetValue()));
    e->AddAttribute("StartChannel", wxString::Format("%d",SpinCtrl_StartChannel->GetValue()));
    //e->AddAttribute("Order", Choice_Order->GetStringSelection());
    if (RadioButton_TopLeft->GetValue() || RadioButton_TopRight->GetValue() )
        e->AddAttribute("StartSide","T");
    else
        e->AddAttribute("StartSide","B");
    if (RadioButton_TopLeft->GetValue() || RadioButton_BotLeft->GetValue() )
        e->AddAttribute("Dir","L");
    else
        e->AddAttribute("Dir","R");

    e->AddAttribute("Antialias", wxString::Format("%d",Choice_Antialias->GetSelection()));

    e->AddAttribute("ModelBrightness", wxString::Format("%d",Slider_Model_Brightness->GetValue()));
    if (Choice_DisplayAs->GetStringSelection() == "Custom")
    {
        e->AddAttribute("CustomModel",GetCustomGridData());
    }
    ModelClass::SetMyDisplay(e,CheckBox_MyDisplay->GetValue());
}

void ModelDialog::SetFromXml(wxXmlNode* e, const wxString& NameSuffix)
{
    long n;
    wxString name, direction, startSide, tempStr;
    name=e->GetAttribute("name") + NameSuffix;
    TextCtrl_Name->SetValue(name);
    Choice_DisplayAs->SetStringSelection(e->GetAttribute("DisplayAs"));
    Choice_StringType->SetStringSelection(e->GetAttribute("StringType","RGB Nodes"));
    SpinCtrl_parm1->SetValue(e->GetAttribute("parm1"));
    SpinCtrl_parm2->SetValue(e->GetAttribute("parm2"));
    SpinCtrl_parm3->SetValue(e->GetAttribute("parm3"));
    SpinCtrl_StartChannel->SetValue(e->GetAttribute("StartChannel"));
    //Choice_Order->SetStringSelection(e->GetAttribute("Order"));
    tempStr=e->GetAttribute("Antialias","0");
    tempStr.ToLong(&n);
    Choice_Antialias->SetSelection(n);


    if(e->HasAttribute("ModelBrightness"))
    {
        tempStr=e->GetAttribute("ModelBrightness","0");
        tempStr.ToLong(&n);
        Slider_Model_Brightness->SetValue(n);
    }
    direction=e->GetAttribute("Dir");
    if(e->HasAttribute("StartSide"))
    {
        startSide=e->GetAttribute("StartSide");
    }
    else
    {
        startSide = "B";
    }
    if(e->HasAttribute("Advanced"))
    {
        cbIndividualStartNumbers->SetValue(true);
        tempStr = e->GetAttribute("parm1");
        tempStr.ToLong(&n);  // number of strings
        for(int ii=0; ii < n; ii++)
        {
            gridStartChannels->AppendRows();
            gridStartChannels->SetCellValue(ii,0,e->GetAttribute(ModelClass::StartChanAttrName(ii)));
        }
    }

    if (direction == "R" )
    {
        if(startSide == "B")
            RadioButton_BotRight->SetValue(true);
        else
            RadioButton_TopRight->SetValue(true);
    }
    else
    {
        if(startSide == "B")
            RadioButton_BotLeft->SetValue(true);
        else
            RadioButton_TopLeft->SetValue(true);
    }
    if (e->HasAttribute("CustomModel"))
    {
        e->GetAttribute("CustomModel",&tempStr);
        SetCustomGridData(tempStr);
    }
    CheckBox_MyDisplay->SetValue(ModelClass::IsMyDisplay(e));
    UpdateLabels();
    Fit();
}

void ModelDialog::OnButtonCustomModelHelpClick(wxCommandEvent& event)
{
    wxMessageBox(_("To create a custom model, set 'Display As' to 'Custom';\nthen set the model width and model height values.\n\nA custom model allows you to represent almost any display element \ncreated from RGB lights. If your element has 12 RGB nodes in it, then \nyou will need to place the numbers 1 through 12 in the grid. \nPlace the numbers so that they are in the shape of your display \nelement. If you enter a number and then need to erase it, enter a 0.\n\nNode 1 will be assigned:\n  StartChannel\n  StartChannel+1\n  StartChannel+2\nNode 2 will be assigned:\n  StartChannel+3\n  StartChannel+4\n  StartChannel+5\netc.\n\nFor example, to model a candy cane with 12 nodes, you could \nstart with a grid 4 columns wide and 10 rows high. You would place the \nnumbers 1-9 up the right-hand side, 10 and 11 would go in the middle \ncells in the top row, and then 12 would go in column A, row 2.\n\n     11 10\n12           9\n               8\n               7\n               6\n               5\n               4\n               3\n               2\n               1"));
}

void ModelDialog::OnChoice_StringTypeSelect(wxCommandEvent& event)
{
    UpdateLabels();
}

void ModelDialog::OnGridCustomCellChange(wxGridEvent& event)
{
    UpdateStartChannels();
}

void ModelDialog::OnBitmapButtonCustomPasteClick(wxCommandEvent& event)
{
    wxString copy_data;
    wxString cur_line;
    wxArrayString fields;
    int i,k,fieldnum;
    long val;

    if (wxTheClipboard->Open())
    {
        if (wxTheClipboard->IsSupported(wxDF_TEXT))
        {
            wxTextDataObject data;

            if (wxTheClipboard->GetData(data))
            {
                copy_data = data.GetText();
            }
            else
            {
                wxMessageBox(_("Unable to copy data from clipboard."), _("Error"));
            }
        }
        else
        {
            wxMessageBox(_("Non-Text data in clipboard."), _("Error"));
        }
        wxTheClipboard->Close();
    }
    else
    {
        wxMessageBox(_("Error opening clipboard."), _("Error"));
        return;
    }

    i = GridCustom->GetGridCursorRow();
    k = GridCustom->GetGridCursorCol();
    int numrows=GridCustom->GetNumberRows();
    int numcols=GridCustom->GetNumberCols();
    bool errflag=false;
    wxString errdetails; //-DJ

    do
    {
        cur_line = copy_data.BeforeFirst('\n');
        copy_data = copy_data.AfterFirst('\n');
        fields = wxSplit(cur_line, (cur_line.Find(',') != wxNOT_FOUND)? ',': '\t'); //allow comma or tab delim -DJ
        for(fieldnum=0; fieldnum<fields.Count(); fieldnum++)
        {
            if (i < numrows && k+fieldnum < numcols)
            {
                if (fields[fieldnum].IsEmpty() || fields[fieldnum].ToLong(&val))
                {
                    GridCustom->SetCellValue(i, k+fieldnum, fields[fieldnum].Trim(true).Trim(false)); //strip surrounding spaces -DJ
                }
                else
                {
                    errflag=true;
                    errdetails += wxString::Format("\n'%s' row %d/col %d of %d", fields[fieldnum].c_str(), i - GridCustom->GetGridCursorRow(), fieldnum, fields.Count()); //tell the user what was wrong; show relative row#, col# (more user friendly) -DJ
                }
            }
        }
        i++;
    }
    while (copy_data.IsEmpty() == false);
    UpdateStartChannels();
    if (errflag)
    {
        wxMessageBox(_("One or more of the values were not pasted because they did not contain a number") + errdetails,_("Paste Error")); //-DJ
    }
}

// pass true for cutting, false for copying
void ModelDialog::CutOrCopyToClipboard(bool IsCut)
{
    int i,k;
    wxString copy_data;
    bool something_in_this_line;

    for (i=0; i< GridCustom->GetRows(); i++)        // step through all lines
    {
        something_in_this_line = false;             // nothing found yet
        for (k=0; k<GridCustom->GetCols(); k++)     // step through all colums
        {
            if (GridCustom->IsInSelection(i,k))     // this field is selected!!!
            {
                if (!something_in_this_line)        // first field in this line => may need a linefeed
                {
                    if (!copy_data.IsEmpty())       // ... if it is not the very first field
                    {
                        copy_data += "\n";     // next LINE
                    }
                    something_in_this_line = true;
                }
                else                                    // if not the first field in this line we need a field seperator (TAB)
                {
                    copy_data += "\t";  // next COLUMN
                }
                copy_data += GridCustom->GetCellValue(i,k);    // finally we need the field value
                if (IsCut) GridCustom->SetCellValue(i,k,wxEmptyString);
            }
        }
    }

    if (wxTheClipboard->Open())
    {
        if (!wxTheClipboard->SetData(new wxTextDataObject(copy_data)))
        {
            wxMessageBox(_("Unable to copy data to clipboard."), _("Error"));
        }
        wxTheClipboard->Close();
    }
    else
    {
        wxMessageBox(_("Error opening clipboard."), _("Error"));
    }
}

void ModelDialog::OnBitmapButtonCustomCopyClick(wxCommandEvent& event)
{
    CutOrCopyToClipboard(false);
}

void ModelDialog::OnBitmapButtonCustomCutClick(wxCommandEvent& event)
{
    CutOrCopyToClipboard(true);
    UpdateStartChannels();
}

void ModelDialog::OnSpinCtrl_parm3Change(wxSpinEvent& event)
{
    UpdateStartChannels();
}

void ModelDialog::OnSlider_Model_BrightnessCmdScroll(wxScrollEvent& event)
{
    SpinCtrl1->SetValue(wxString::Format("%d",Slider_Model_Brightness->GetValue()));
}



