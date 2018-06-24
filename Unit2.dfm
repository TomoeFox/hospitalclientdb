object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 297
  ClientWidth = 650
  Color = clBtnFace
  Constraints.MaxHeight = 336
  Constraints.MaxWidth = 666
  Constraints.MinHeight = 336
  Constraints.MinWidth = 666
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 285
    Top = 271
    Width = 75
    Height = 25
    Caption = 'Action'
    TabOrder = 0
    OnClick = Button1Click
  end
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 655
    Height = 129
    Caption = #1057#1090#1072#1088#1099#1077' '#1076#1072#1085#1085#1099#1077
    TabOrder = 1
    object Label5: TLabel
      Left = 536
      Top = 16
      Width = 73
      Height = 13
      Caption = #1043#1086#1076' '#1088#1086#1078#1076#1077#1085#1080#1103
    end
    object Label4: TLabel
      Left = 432
      Top = 16
      Width = 31
      Height = 13
      Caption = #1040#1076#1088#1077#1089
    end
    object Label3: TLabel
      Left = 267
      Top = 16
      Width = 100
      Height = 13
      Caption = #1054#1090#1095#1077#1089#1090#1074#1086' '#1087#1072#1094#1080#1077#1085#1090#1072
    end
    object Label2: TLabel
      Left = 160
      Top = 16
      Width = 70
      Height = 13
      Caption = #1048#1084#1103' '#1087#1072#1094#1080#1077#1085#1090#1072
    end
    object Label1: TLabel
      Left = 16
      Top = 16
      Width = 95
      Height = 13
      Caption = #1060#1072#1084#1080#1083#1080#1103' '#1087#1072#1094#1080#1077#1085#1090#1072
    end
    object Label6: TLabel
      Left = 16
      Top = 62
      Width = 64
      Height = 13
      Caption = #1060'.'#1048'.'#1054' '#1074#1088#1072#1095#1072
    end
    object Label13: TLabel
      Left = 159
      Top = 81
      Width = 3
      Height = 13
    end
    object Edit5: TEdit
      Left = 389
      Top = 35
      Width = 121
      Height = 21
      TabOrder = 0
      TextHint = #1052#1080#1088#1072' 13'
    end
    object Edit6: TEdit
      Left = 516
      Top = 35
      Width = 114
      Height = 21
      TabOrder = 1
      TextHint = '1970'
    end
    object Edit3: TEdit
      Left = 262
      Top = 35
      Width = 121
      Height = 21
      TabOrder = 2
      TextHint = #1048#1074#1072#1085#1086#1074#1080#1095
    end
    object Edit2: TEdit
      Left = 135
      Top = 35
      Width = 121
      Height = 21
      TabOrder = 3
      TextHint = #1048#1074#1072#1085
    end
    object Edit1: TEdit
      Left = 8
      Top = 35
      Width = 121
      Height = 21
      TabOrder = 4
      TextHint = #1048#1074#1072#1085#1086#1074
    end
    object DBCB1: TDBLookupComboBox
      Left = 8
      Top = 81
      Width = 145
      Height = 21
      Hint = #1060'.'#1048'.'#1054'. '#1074#1088#1072#1095#1072
      DropDownRows = 15
      KeyField = 'DocName'
      ListField = 'DocName'
      ListSource = Form1.DataSource2
      ParentShowHint = False
      ShowHint = True
      TabOrder = 5
      OnCloseUp = DBCB1CloseUp
    end
    object Edit4: TEdit
      Left = 8
      Top = 81
      Width = 126
      Height = 21
      ReadOnly = True
      TabOrder = 6
      TextHint = #1060'.'#1048'.'#1054'. '#1074#1088#1072#1095#1072
    end
  end
  object GroupBox2: TGroupBox
    Left = 3
    Top = 143
    Width = 652
    Height = 122
    Caption = #1053#1086#1074#1099#1077' '#1076#1072#1085#1085#1099#1077
    TabOrder = 2
    object Label7: TLabel
      Left = 13
      Top = 16
      Width = 95
      Height = 13
      Caption = #1060#1072#1084#1080#1083#1080#1103' '#1087#1072#1094#1080#1077#1085#1090#1072
    end
    object Label8: TLabel
      Left = 165
      Top = 16
      Width = 70
      Height = 13
      Caption = #1048#1084#1103' '#1087#1072#1094#1080#1077#1085#1090#1072
    end
    object Label9: TLabel
      Left = 293
      Top = 16
      Width = 49
      Height = 13
      Caption = #1054#1090#1095#1077#1089#1090#1074#1086
    end
    object Label10: TLabel
      Left = 421
      Top = 16
      Width = 31
      Height = 13
      Caption = #1040#1076#1088#1077#1089
    end
    object Label11: TLabel
      Left = 541
      Top = 16
      Width = 73
      Height = 13
      Caption = #1043#1086#1076' '#1088#1086#1078#1076#1077#1085#1080#1103
    end
    object Label12: TLabel
      Left = 13
      Top = 69
      Width = 64
      Height = 13
      Caption = #1060'.'#1048'.'#1054' '#1074#1088#1072#1095#1072
    end
    object Edit7: TEdit
      Left = 13
      Top = 35
      Width = 121
      Height = 21
      TabOrder = 0
      TextHint = #1048#1074#1072#1085#1086#1074
    end
    object Edit8: TEdit
      Left = 140
      Top = 35
      Width = 121
      Height = 21
      TabOrder = 1
      TextHint = #1048#1074#1072#1085
    end
    object Edit9: TEdit
      Left = 267
      Top = 35
      Width = 121
      Height = 21
      TabOrder = 2
      TextHint = #1048#1074#1072#1085#1086#1074#1080#1095
    end
    object Edit11: TEdit
      Left = 394
      Top = 35
      Width = 121
      Height = 21
      TabOrder = 3
      TextHint = #1052#1080#1088#1072' 13'
    end
    object Edit12: TEdit
      Left = 521
      Top = 35
      Width = 114
      Height = 21
      TabOrder = 4
      TextHint = '1970'
    end
    object DBCB2: TDBLookupComboBox
      Left = 14
      Top = 88
      Width = 145
      Height = 21
      Hint = #1060'.'#1048'.'#1054'. '#1074#1088#1072#1095#1072
      DropDownRows = 15
      KeyField = 'DocName'
      ListField = 'DocName'
      ListSource = Form1.DataSource2
      ParentShowHint = False
      ShowHint = True
      TabOrder = 5
      OnClick = DBCB2Click
    end
    object Edit10: TEdit
      Left = 14
      Top = 88
      Width = 126
      Height = 21
      ReadOnly = True
      TabOrder = 6
      TextHint = #1060'.'#1048'.'#1054'. '#1074#1088#1072#1095#1072
    end
  end
end
