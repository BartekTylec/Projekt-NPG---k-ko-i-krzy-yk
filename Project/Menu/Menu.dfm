object Tylec: TTylec
  Left = 0
  Top = 0
  Caption = 'Menu'
  ClientHeight = 403
  ClientWidth = 586
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 160
    Top = 88
    Width = 288
    Height = 37
    Caption = 'Wybierz rozmiar planszy'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 184
    Top = 248
    Width = 224
    Height = 37
    Caption = 'Wybiez tryb graczy'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Button2: TButton
    Left = 256
    Top = 152
    Width = 97
    Height = 25
    Caption = '4x4'
    TabOrder = 0
    OnClick = Button2Click
  end
  object Button1: TButton
    Left = 136
    Top = 152
    Width = 97
    Height = 25
    Caption = '3x3'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button3: TButton
    Left = 376
    Top = 152
    Width = 97
    Height = 25
    Caption = '5x5'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 168
    Top = 320
    Width = 105
    Height = 25
    Caption = 'Dw'#243'ch graczy'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 327
    Top = 320
    Width = 105
    Height = 25
    Caption = 'Z automatem'
    TabOrder = 4
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 216
    Top = 368
    Width = 169
    Height = 25
    Caption = 'Rozpocznij gr'#281
    TabOrder = 5
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 464
    Top = 24
    Width = 107
    Height = 25
    Caption = 'Resetuj ustawienia'
    TabOrder = 6
    OnClick = Button7Click
  end
end
