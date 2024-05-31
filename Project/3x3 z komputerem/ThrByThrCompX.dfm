object Form3: TForm3
  Left = 0
  Top = 0
  Caption = '2'
  ClientHeight = 623
  ClientWidth = 671
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = OnCreate
  TextHeight = 15
  object XO1: TImage
    Left = 160
    Top = 96
    Width = 105
    Height = 105
    OnClick = XO1Click
  end
  object XO2: TImage
    Left = 296
    Top = 96
    Width = 105
    Height = 105
    OnClick = XO2Click
  end
  object XO3: TImage
    Left = 432
    Top = 96
    Width = 105
    Height = 105
    OnClick = XO3Click
  end
  object XO4: TImage
    Left = 160
    Top = 232
    Width = 105
    Height = 105
    OnClick = XO4Click
  end
  object XO5: TImage
    Left = 296
    Top = 232
    Width = 105
    Height = 105
    OnClick = XO5Click
  end
  object XO6: TImage
    Left = 432
    Top = 232
    Width = 105
    Height = 105
    OnClick = XO6Click
  end
  object XO9: TImage
    Left = 432
    Top = 368
    Width = 105
    Height = 105
    OnClick = XO9Click
  end
  object XO8: TImage
    Left = 296
    Top = 368
    Width = 105
    Height = 105
    OnClick = XO8Click
  end
  object XO7: TImage
    Left = 160
    Top = 368
    Width = 105
    Height = 105
    OnClick = XO7Click
  end
  object Tura: TLabel
    Left = 160
    Top = 44
    Width = 178
    Height = 37
    Caption = 'Symbol gracza:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Wyniki: TLabel
    Left = 216
    Top = 544
    Width = 73
    Height = 37
    Caption = 'Wynik'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object MenuExit: TButton
    Left = 22
    Top = 192
    Width = 107
    Height = 25
    Caption = 'Wyj'#347'ce do menu'
    TabOrder = 0
    OnClick = MenuExitClick
  end
  object CurryPlayer: TStaticText
    Left = 354
    Top = 44
    Width = 16
    Height = 41
    Caption = 'x'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object Cofnij: TButton
    Left = 16
    Top = 360
    Width = 129
    Height = 41
    Caption = 'Cofnij ruch'
    TabOrder = 2
  end
end
