object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 632
  ClientWidth = 677
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
    Left = 200
    Top = 48
    Width = 142
    Height = 37
    Caption = 'Tura gracza:'
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
    Width = 80
    Height = 37
    Caption = 'Wyniki'
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
  end
  object CurryPlayer: TStaticText
    Left = 360
    Top = 44
    Width = 225
    Height = 41
    Caption = 'CurryPlayerSymbol'
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

