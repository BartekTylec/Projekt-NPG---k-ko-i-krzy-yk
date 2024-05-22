object Start: TStart
  Left = 0
  Top = 0
  Caption = 'Witamy!!!'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 248
    Top = 120
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
    Left = 136
    Top = 192
    Width = 137
    Height = 81
    Caption = 'Graj'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 368
    Top = 192
    Width = 137
    Height = 81
    Caption = 'Zamknij aplikacj'#281
    TabOrder = 1
    OnClick = Button2Click
  end
end
