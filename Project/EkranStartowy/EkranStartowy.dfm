object Start: TStart
  Left = 0
  Top = 0
  Caption = 'Witamy!!!'
  ClientHeight = 443
  ClientWidth = 444
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = StartCreate
  TextHeight = 15
  object Image1: TImage
    Left = -8
    Top = 0
    Width = 577
    Height = 545
  end
  object Label1: TLabel
    Left = 294
    Top = 32
    Width = 115
    Height = 37
    Caption = 'Witamy!!!'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 40
    Top = 288
    Width = 137
    Height = 81
    Caption = 'Graj'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 272
    Top = 288
    Width = 137
    Height = 81
    Caption = 'Zamknij aplikacj'#281
    TabOrder = 1
    OnClick = Button2Click
  end
end
