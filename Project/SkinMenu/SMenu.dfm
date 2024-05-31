object SkinMenu: TSkinMenu
  Left = 0
  Top = 0
  Caption = 'SkinMenu'
  ClientHeight = 433
  ClientWidth = 622
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = OnCreate
  TextHeight = 15
  object Y: TImage
    Left = 152
    Top = 192
    Width = 105
    Height = 105
    OnClick = YClick
  end
  object X: TImage
    Left = 382
    Top = 192
    Width = 105
    Height = 105
    OnClick = XClick
  end
  object StaticText1: TStaticText
    Left = 152
    Top = 104
    Width = 335
    Height = 41
    Caption = 'Wybierz czym b'#281'dziesz gra'#322':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
end
