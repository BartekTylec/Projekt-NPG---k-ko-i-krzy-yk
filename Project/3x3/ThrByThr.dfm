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
  object XO10: TImage
    Left = 22
    Top = 296
    Width = 105
    Height = 161
  end
  object CurryPlayer: TLabel
    Left = 200
    Top = 48
    Width = 34
    Height = 15
    Caption = 'Label1'
  end
  object Wyniki: TLabel
    Left = 216
    Top = 544
    Width = 36
    Height = 15
    Caption = 'Wyniki'
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
end
