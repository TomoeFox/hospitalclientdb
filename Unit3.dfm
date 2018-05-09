object Form3: TForm3
  Left = 0
  Top = 0
  AlphaBlend = True
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
  DesignSize = (
    828
    614)
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
    Left = 32
    Top = 104
    Width = 73
    Height = 13
    Caption = #1043#1086#1076' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object Label4: TLabel
    Left = 161
    Top = 102
    Width = 77
    Height = 13
    Caption = #1060#1072#1084#1080#1083#1080#1103' '#1074#1088#1072#1095#1072
  end
  object Label5: TLabel
    Left = 32
    Top = 11
    Width = 95
    Height = 13
    Caption = #1060#1072#1084#1080#1083#1080#1103' '#1087#1072#1094#1080#1077#1085#1090#1072
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
    Left = 56
    Top = 58
    Width = 31
    Height = 13
    Caption = #1059#1083#1080#1094#1072
  end
  object Label9: TLabel
    Left = 176
    Top = 11
    Width = 70
    Height = 13
    Caption = #1048#1084#1103' '#1087#1072#1094#1080#1077#1085#1090#1072
  end
  object Label10: TLabel
    Left = 283
    Top = 11
    Width = 100
    Height = 13
    Caption = #1054#1090#1095#1077#1089#1090#1074#1086' '#1087#1072#1094#1080#1077#1085#1090#1072
  end
  object Label12: TLabel
    Left = 185
    Top = 58
    Width = 20
    Height = 13
    Caption = #1044#1086#1084
  end
  object Label13: TLabel
    Left = 312
    Top = 58
    Width = 49
    Height = 13
    Caption = #1050#1074#1072#1088#1090#1080#1088#1072
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 192
    Width = 812
    Height = 414
    Cursor = crHandPoint
    TabStop = False
    Anchors = [akLeft, akTop, akRight, akBottom]
    Constraints.MaxHeight = 414
    Constraints.MaxWidth = 812
    Constraints.MinHeight = 414
    Constraints.MinWidth = 812
    DataSource = DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgTabs]
    ParentShowHint = False
    ReadOnly = True
    ShowHint = False
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Edit1: TEdit
    Left = 142
    Top = 121
    Width = 121
    Height = 21
    TabOrder = 1
    TextHint = #1048#1074#1072#1085#1086#1074
  end
  object Edit2: TEdit
    Left = 15
    Top = 30
    Width = 121
    Height = 21
    TabOrder = 2
    TextHint = #1048#1074#1072#1085#1086#1074
  end
  object Edit3: TEdit
    Left = 15
    Top = 121
    Width = 121
    Height = 21
    TabOrder = 3
    TextHint = '1970'
  end
  object Edit4: TEdit
    Left = 15
    Top = 77
    Width = 121
    Height = 21
    TabOrder = 4
    TextHint = #1052#1080#1088#1072
  end
  object GroupBox1: TGroupBox
    Left = 675
    Top = 10
    Width = 145
    Height = 157
    Caption = #1044#1077#1081#1089#1090#1074#1080#1103
    TabOrder = 5
    object Label11: TLabel
      Left = 127
      Top = 6
      Width = 15
      Height = 30
      Caption = #8226
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 40
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Button4: TButton
      Left = 0
      Top = 109
      Width = 145
      Height = 25
      Caption = #1055#1086#1080#1089#1082
      TabOrder = 0
      OnClick = Button4Click
    end
    object Button8: TButton
      Left = 0
      Top = 132
      Width = 146
      Height = 25
      Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1074#1089#1077
      TabOrder = 1
      OnClick = Button8Click
    end
    object Button9: TButton
      Left = 0
      Top = 87
      Width = 146
      Height = 25
      Caption = #1059#1076#1072#1083#1077#1085#1080#1077
      TabOrder = 2
      OnClick = Button3Click
    end
    object Button10: TButton
      Left = 0
      Top = 65
      Width = 146
      Height = 25
      Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077
      TabOrder = 3
    end
    object Button11: TButton
      Left = 0
      Top = 42
      Width = 146
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077
      TabOrder = 4
      OnClick = Button2Click
    end
    object Button1: TButton
      Left = 0
      Top = 15
      Width = 81
      Height = 25
      Caption = #1055#1086#1076#1082#1083#1102#1095#1077#1085#1080#1077
      TabOrder = 5
      OnClick = Button1Click
    end
  end
  object Edit5: TEdit
    Left = 142
    Top = 30
    Width = 121
    Height = 21
    TabOrder = 6
    TextHint = #1048#1074#1072#1085
  end
  object Edit6: TEdit
    Left = 269
    Top = 30
    Width = 121
    Height = 21
    TabOrder = 7
    TextHint = #1048#1074#1072#1085#1086#1074#1080#1095
  end
  object Edit7: TEdit
    Left = 142
    Top = 77
    Width = 121
    Height = 21
    TabOrder = 8
    TextHint = '13'
  end
  object Edit8: TEdit
    Left = 269
    Top = 77
    Width = 121
    Height = 21
    TabOrder = 9
    TextHint = '10'
  end
  object Panel1: TPanel
    Left = 432
    Top = 57
    Width = 185
    Height = 41
    Caption = #1044#1077#1081#1089#1090#1074#1080#1077
    TabOrder = 10
  end
  object ADOConnection1: TADOConnection
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;User ID=hosp;Data' +
      ' Source=hosp;Initial Catalog=hosp'
    LoginPrompt = False
    Provider = 'MSDASQL.1'
    AfterConnect = ADOConnection1AfterConnect
    AfterDisconnect = ADOConnection1AfterDisconnect
    Left = 40
    Top = 576
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Top = 576
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 88
    Top = 576
  end
end
