object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 96
  ClientWidth = 508
  Color = clBtnFace
  Constraints.MaxHeight = 135
  Constraints.MaxWidth = 524
  Constraints.MinHeight = 135
  Constraints.MinWidth = 524
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
    Left = 40
    Top = 13
    Width = 77
    Height = 13
    Caption = #1060#1072#1084#1080#1083#1080#1103' '#1074#1088#1072#1095#1072
  end
  object Label2: TLabel
    Left = 208
    Top = 13
    Width = 86
    Height = 13
    Caption = #1060'.'#1048'.'#1054'. '#1087#1072#1094#1080#1077#1085#1090#1072
  end
  object Label3: TLabel
    Left = 384
    Top = 13
    Width = 73
    Height = 13
    Caption = #1043#1086#1076' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object Edit1: TEdit
    Left = 16
    Top = 32
    Width = 121
    Height = 21
    TabOrder = 0
    TextHint = #1048#1074#1072#1085#1086#1074
  end
  object Edit2: TEdit
    Left = 192
    Top = 32
    Width = 121
    Height = 21
    TabOrder = 1
    TextHint = #1048#1074#1072#1085#1086#1074' '#1048'. '#1048'.'
  end
  object Edit3: TEdit
    Left = 368
    Top = 32
    Width = 121
    Height = 21
    TabOrder = 2
    TextHint = '1970'
  end
  object DBGrid1: TDBGrid
    Left = -3
    Top = -2
    Width = 316
    Height = 135
    DataSource = DataSource1
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Button1: TButton
    Left = 219
    Top = 68
    Width = 75
    Height = 25
    BiDiMode = bdLeftToRight
    Caption = #1055#1086#1080#1089#1082
    ParentBiDiMode = False
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 320
    Top = 592
    Width = 75
    Height = 25
    Caption = #1053#1072#1079#1072#1076
    TabOrder = 5
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 304
  end
  object ADOTable1: TADOTable
    Connection = Form3.ADOConnection1
    Left = 144
    Top = 8
  end
end