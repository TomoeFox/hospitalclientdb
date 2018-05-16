object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1057#1059#1041#1044' '#1087#1086#1083#1080#1082#1083#1080#1085#1080#1082#1072
  ClientHeight = 680
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
    Left = 784
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
  object DBGrid1: TDBGrid
    Left = 8
    Top = 112
    Width = 1110
    Height = 560
    DataSource = DataSource1
    Options = [dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit, dgTitleClick]
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object GroupBox1: TGroupBox
    Left = 992
    Top = 8
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
    Top = 0
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
    Top = 13
    Width = 83
    Height = 66
    Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1074#1089#1077
    TabOrder = 3
    OnClick = Button6Click
  end
  object ADOConnection1: TADOConnection
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=hosp;' +
      'Initial Catalog=hosp;'
    LoginPrompt = False
    Provider = 'MSDASQL.1'
    AfterConnect = ADOConnection1AfterConnect
    AfterDisconnect = ADOConnection1AfterDisconnect
    Left = 24
    Top = 136
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 72
    Top = 136
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 120
    Top = 136
  end
end
