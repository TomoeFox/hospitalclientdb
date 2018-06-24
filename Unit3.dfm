object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 337
  ClientWidth = 794
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 778
    Height = 153
    Caption = 'Action'
    TabOrder = 0
    object Label1: TLabel
      Left = 16
      Top = 21
      Width = 77
      Height = 13
      Caption = #1060#1072#1084#1080#1083#1080#1103' '#1074#1088#1072#1095#1072
    end
    object Label2: TLabel
      Left = 143
      Top = 21
      Width = 52
      Height = 13
      Caption = #1048#1084#1103' '#1074#1088#1072#1095#1072
    end
    object Label3: TLabel
      Left = 270
      Top = 21
      Width = 82
      Height = 13
      Caption = #1054#1090#1095#1077#1089#1090#1074#1086' '#1074#1088#1072#1095#1072
    end
    object Edit1: TEdit
      Left = 16
      Top = 40
      Width = 121
      Height = 21
      TabOrder = 0
      TextHint = #1048#1074#1072#1085#1086#1074
    end
    object Edit2: TEdit
      Left = 143
      Top = 40
      Width = 121
      Height = 21
      TabOrder = 1
      TextHint = #1048#1074#1072#1085
    end
    object Edit3: TEdit
      Left = 270
      Top = 40
      Width = 121
      Height = 21
      TabOrder = 2
      TextHint = #1048#1074#1072#1085#1086#1074#1080#1095
    end
    object Button1: TButton
      Left = 304
      Top = 120
      Width = 75
      Height = 25
      Caption = 'Action'
      TabOrder = 3
    end
    object Edit4: TEdit
      Left = 56
      Top = 104
      Width = 121
      Height = 21
      TabOrder = 4
      Text = 'Edit4'
    end
    object DBLookupComboBox1: TDBLookupComboBox
      Left = 415
      Top = 80
      Width = 145
      Height = 21
      KeyField = 'DocName'
      ListField = 'DocName'
      ListSource = DataSource1
      ParentShowHint = False
      ShowHint = True
      TabOrder = 5
    end
  end
  object ADOQuery1: TADOQuery
    Connection = Form1.ADOConnection1
    Parameters = <>
    Left = 80
    Top = 176
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 128
    Top = 176
  end
end
