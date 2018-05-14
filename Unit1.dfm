object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 680
  ClientWidth = 1126
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Edit1: TEdit
    Left = 8
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 0
    TextHint = #1060#1072#1084#1080#1083#1080#1103
  end
  object Edit2: TEdit
    Left = 8
    Top = 35
    Width = 121
    Height = 21
    TabOrder = 1
    TextHint = #1048#1084#1103
  end
  object Edit3: TEdit
    Left = 8
    Top = 62
    Width = 121
    Height = 21
    TabOrder = 2
    TextHint = #1054#1090#1095#1077#1089#1090#1074#1086
  end
  object Button1: TButton
    Left = 8
    Top = 89
    Width = 121
    Height = 25
    Caption = 'Button1'
    TabOrder = 3
    OnClick = Button1Click
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 200
    Width = 1110
    Height = 472
    DataSource = DataSource1
    TabOrder = 4
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Edit4: TEdit
    Left = 144
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 5
    TextHint = #1060#1072#1084#1080#1083#1080#1103' '#1074#1088#1072#1095#1072
  end
  object Edit5: TEdit
    Left = 271
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 6
    TextHint = #1040#1076#1088#1077#1089#1089
  end
  object Edit6: TEdit
    Left = 398
    Top = 8
    Width = 121
    Height = 21
    TabOrder = 7
    TextHint = #1043#1086#1076' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object ADOConnection1: TADOConnection
    ConnectionString = 
      'Provider=MSDASQL.1;Persist Security Info=False;Data Source=hosp;' +
      'Initial Catalog=hosp'
    LoginPrompt = False
    Provider = 'MSDASQL.1'
    Left = 32
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
    Left = 112
    Top = 136
  end
end
