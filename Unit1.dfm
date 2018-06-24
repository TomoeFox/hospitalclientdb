object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1057#1059#1041#1044' '#1087#1086#1083#1080#1082#1083#1080#1085#1080#1082#1072
  ClientHeight = 660
  ClientWidth = 1126
  Color = clBtnFace
  Constraints.MaxHeight = 719
  Constraints.MaxWidth = 1142
  Constraints.MinHeight = 719
  Constraints.MinWidth = 1142
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label3: TLabel
    Left = 72
    Top = 96
    Width = 77
    Height = 13
    Caption = #1060#1072#1084#1080#1083#1080#1103' '#1074#1088#1072#1095#1072
  end
  object Label4: TLabel
    Left = 427
    Top = 96
    Width = 86
    Height = 13
    Caption = #1060'.'#1048'.'#1054'. '#1087#1072#1094#1080#1077#1085#1090#1072
  end
  object Label5: TLabel
    Left = 840
    Top = 93
    Width = 31
    Height = 13
    Caption = #1040#1076#1088#1077#1089
  end
  object Label6: TLabel
    Left = 1028
    Top = 93
    Width = 73
    Height = 13
    Caption = #1043#1086#1076' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object Label7: TLabel
    Left = 799
    Top = 53
    Width = 72
    Height = 13
    Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090#1086#1074': '
  end
  object Label8: TLabel
    Left = 872
    Top = 53
    Width = 3
    Height = 13
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 112
    Width = 1110
    Height = 560
    DataSource = DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit, dgTitleClick]
    PopupMenu = PopupMenu1
    ReadOnly = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnTitleClick = DBGrid1TitleClick
  end
  object GroupBox1: TGroupBox
    Left = 997
    Top = 22
    Width = 121
    Height = 65
    Caption = #1055#1086#1076#1082#1083#1102#1095#1077#1085#1080#1077
    TabOrder = 1
    object Label1: TLabel
      Left = 18
      Top = 18
      Width = 61
      Height = 13
      Caption = #1057#1086#1089#1090#1086#1103#1085#1080#1077': '
    end
    object Label2: TLabel
      Left = 85
      Top = 10
      Width = 10
      Height = 25
      Caption = #8226
      Color = clMedGray
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clRed
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentColor = False
      ParentFont = False
    end
    object Button2: TButton
      Left = 3
      Top = 37
      Width = 114
      Height = 25
      Caption = #1055#1086#1076#1082#1083#1102#1095#1080#1090#1100#1089#1103
      TabOrder = 0
      OnClick = Button2Click
    end
  end
  object GroupBox2: TGroupBox
    Left = 0
    Top = 8
    Width = 513
    Height = 90
    Caption = #1044#1077#1081#1089#1090#1074#1080#1103
    TabOrder = 2
    object Button1: TButton
      Left = 0
      Top = 45
      Width = 217
      Height = 34
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button3: TButton
      Left = 0
      Top = 13
      Width = 217
      Height = 34
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 1
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 215
      Top = 13
      Width = 217
      Height = 34
      Caption = #1048#1089#1082#1072#1090#1100
      TabOrder = 2
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 215
      Top = 45
      Width = 217
      Height = 34
      Caption = #1048#1079#1084#1077#1085#1080#1090#1100
      TabOrder = 3
      OnClick = Button5Click
    end
  end
  object Button6: TButton
    Left = 430
    Top = 21
    Width = 83
    Height = 67
    Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1074#1089#1077
    TabOrder = 3
    OnClick = Button6Click
  end
  object GroupBox3: TGroupBox
    Left = 519
    Top = 4
    Width = 233
    Height = 88
    Caption = #1042#1088#1072#1095
    TabOrder = 4
    object Button7: TButton
      Left = 0
      Top = 17
      Width = 233
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 0
      OnClick = Button7Click
    end
    object Button8: TButton
      Left = 0
      Top = 40
      Width = 233
      Height = 25
      Caption = #1059#1076#1072#1083#1080#1090#1100
      TabOrder = 1
    end
    object Button9: TButton
      Left = 0
      Top = 63
      Width = 233
      Height = 25
      Caption = #1048#1079#1084#1077#1085#1080#1090#1100
      TabOrder = 2
    end
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=hosp;' +
      'Initial Catalog=hosp;'
    LoginPrompt = False
    AfterConnect = ADOConnection1AfterConnect
    AfterDisconnect = ADOConnection1AfterDisconnect
    Left = 24
    Top = 136
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    Left = 72
    Top = 136
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 120
    Top = 136
  end
  object MainMenu1: TMainMenu
    Left = 536
    Top = 40
    object N1: TMenuItem
      Caption = #1055#1088#1086#1075#1088#1072#1084#1084#1072
      object N2: TMenuItem
        Caption = #1055#1086#1076#1082#1083#1102#1095#1080#1090#1100
      end
      object N3: TMenuItem
        Caption = #1042#1099#1081#1090#1080
        OnClick = N3Click
      end
    end
    object N4: TMenuItem
      Caption = #1044#1077#1081#1089#1090#1074#1080#1103
      object N5: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100
        OnClick = N5Click
      end
      object N6: TMenuItem
        Caption = #1059#1076#1072#1083#1080#1090#1100
        OnClick = N6Click
      end
      object N7: TMenuItem
        Caption = #1048#1089#1082#1072#1090#1100
        OnClick = N7Click
      end
      object N8: TMenuItem
        Caption = #1048#1079#1084#1077#1085#1080#1090#1100
        OnClick = N8Click
      end
      object N9: TMenuItem
        Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1074#1089#1077
        OnClick = N9Click
      end
    end
    object N10: TMenuItem
      Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
      object N11: TMenuItem
        Caption = #1055#1086#1084#1086#1097#1100
        OnClick = N11Click
      end
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 536
    object N12: TMenuItem
      Caption = #1059#1076#1072#1083#1080#1090#1100
      OnClick = N12Click
    end
    object N13: TMenuItem
      Caption = #1048#1079#1084#1077#1085#1080#1090#1100
      object N14: TMenuItem
        Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1074#1089#1105
        OnClick = N14Click
      end
      object N15: TMenuItem
        Caption = #1060'.'#1048'.'#1054'.'
      end
      object N16: TMenuItem
        Caption = #1044#1086#1082#1090#1086#1088#1072
      end
      object N17: TMenuItem
        Caption = #1043#1086#1076
      end
      object N18: TMenuItem
        Caption = #1040#1076#1088#1077#1089
      end
    end
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery2
    Left = 208
    Top = 136
  end
  object ADOQuery2: TADOQuery
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    Left = 160
    Top = 136
  end
end
