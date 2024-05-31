
object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 662
  ClientWidth = 688
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = OnCreate
  TextHeight = 15
  object XO1: TImage
    Left = 104
    Top = 144
    Width = 105
    Height = 105
    OnClick = XO1Click
  end
  object XO2: TImage
    Left = 240
    Top = 144
    Width = 105
    Height = 105
    OnClick = XO2Click
  end
  object XO3: TImage
    Left = 376
    Top = 144
    Width = 105
    Height = 105
    OnClick = XO3Click
  end
  object XO4: TImage
    Left = 104
    Top = 280
    Width = 105
    Height = 105
    OnClick = XO4Click
  end
  object XO5: TImage
    Left = 240
    Top = 280
    Width = 105
    Height = 105
    OnClick = XO5Click
  end
  object XO6: TImage
    Left = 376
    Top = 280
    Width = 105
    Height = 105
    OnClick = XO6Click
  end
  object XO9: TImage
    Left = 376
    Top = 416
    Width = 105
    Height = 105
    OnClick = XO9Click
  end
  object XO8: TImage
    Left = 240
    Top = 416
    Width = 105
    Height = 105
    OnClick = XO8Click
  end
  object XO7: TImage
    Left = 104
    Top = 416
    Width = 105
    Height = 105
    OnClick = XO7Click
  end
  object CurryPlayer: TLabel
    Left = 599
    Top = 218
    Width = 36
    Height = 15
    Caption = 'Label1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Wyniki: TLabel
    Left = 566
    Top = 321
    Width = 36
    Height = 24
    Caption = 'Wyniki'
  end
  object Label1: TLabel
    Left = 528
    Top = 218
    Width = 99
    Height = 31
    Caption = 'Tura gracza: '
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object MenuExit: TButton
    Left = 520
    Top = 416
    Width = 129
    Height = 33
    Caption = 'Wyj'#347'ce do menu'
    TabOrder = 0
    OnClick = MenuExitClick
  end
end
