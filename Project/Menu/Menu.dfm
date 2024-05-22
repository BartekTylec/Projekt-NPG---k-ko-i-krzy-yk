object Tylec: TTylec
  Left = 0
  Top = 0
  Caption = 'Menu'
  ClientHeight = 433
  ClientWidth = 622
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
  object Button1: TButton
    Left = 256
    Top = 152
    Width = 97
    Height = 25
    Caption = '3x3'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 136
    Top = 152
    Width = 97
    Height = 25
    Caption = '4x4'
    TabOrder = 1
    OnClick = Button2Click
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
    Left = 184
    Top = 344
    Width = 105
    Height = 25
    Caption = 'Dw'#243'ch graczy'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 343
    Top = 344
    Width = 105
    Height = 25
    Caption = 'Z automatem'
    TabOrder = 4
    OnClick = Button5Click
  end
end
