object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 614
  ClientWidth = 828
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 173
    Width = 77
    Height = 13
    Caption = #1060#1072#1084#1080#1083#1080#1103' '#1074#1088#1072#1095#1072
  end
  object Label2: TLabel
    Left = 283
    Top = 173
    Width = 86
    Height = 13
    Caption = #1060'.'#1048'.'#1054'. '#1087#1072#1094#1080#1077#1085#1090#1072
  end
  object Label3: TLabel
    Left = 28
    Top = 88
    Width = 73
    Height = 13
    Caption = #1043#1086#1076' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object Label4: TLabel
    Left = 24
    Top = 8
    Width = 77
    Height = 13
    Caption = #1060#1072#1084#1080#1083#1080#1103' '#1074#1088#1072#1095#1072
  end
  object Label5: TLabel
    Left = 15
    Top = 46
    Width = 86
    Height = 13
    Caption = #1060'.'#1048'.'#1054'. '#1087#1072#1094#1080#1077#1085#1090#1072
  end
  object Label6: TLabel
    Left = 568
    Top = 173
    Width = 31
    Height = 13
    Caption = #1040#1076#1088#1077#1089
  end
  object Label7: TLabel
    Left = 747
    Top = 173
    Width = 73
    Height = 13
    Caption = #1043#1086#1076' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object Label8: TLabel
    Left = 70
    Top = 118
    Width = 31
    Height = 13
    Caption = #1040#1076#1088#1077#1089
  end
  object Label9: TLabel
    Left = 439
    Top = 29
    Width = 15
    Height = 40
    Caption = #8226
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 40
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 192
    Width = 812
    Height = 414
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Edit1: TEdit
    Left = 107
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 1
    TextHint = #1048#1074#1072#1085#1086#1074
  end
  object Edit2: TEdit
    Left = 107
    Top = 43
    Width = 121
    Height = 21
    TabOrder = 2
    TextHint = #1048#1074#1072#1085#1086#1074' '#1048'.'#1048'.'
  end
  object Edit3: TEdit
    Left = 107
    Top = 80
    Width = 121
    Height = 21
    TabOrder = 3
    TextHint = '1970'
  end
  object Button1: TButton
    Left = 688
    Top = 70
    Width = 75
    Height = 25
    Caption = #1055#1086#1080#1089#1082
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 602
    Top = 39
    Width = 161
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077'/'#1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077
    TabOrder = 5
  end
  object Button3: TButton
    Left = 688
    Top = 8
    Width = 75
    Height = 25
    Caption = #1059#1076#1072#1083#1077#1085#1080#1077
    TabOrder = 6
  end
  object Button4: TButton
    Left = 352
    Top = 8
    Width = 105
    Height = 25
    Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1092#1086#1088#1084#1099
    TabOrder = 7
    OnClick = Button4Click
  end
  object Edit4: TEdit
    Left = 107
    Top = 115
    Width = 121
    Height = 21
    TabOrder = 8
    TextHint = #1052#1080#1088#1072' 14'
  end
  object Button5: TButton
    Left = 352
    Top = 39
    Width = 81
    Height = 25
    Caption = #1055#1086#1076#1082#1083#1102#1095#1077#1085#1080#1077
    TabOrder = 9
    OnClick = Button5Click
  end
  object ADOConnection1: TADOConnection
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;User ID=root;Data' +
      ' Source=hosp;Initial Catalog=hosp'
    LoginPrompt = False
    Provider = 'MSDASQL.1'
    AfterConnect = ADOConnection1AfterConnect
    AfterDisconnect = ADOConnection1AfterDisconnect
    Left = 792
    Top = 56
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 792
    Top = 8
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 792
    Top = 104
  end
end
