local player = game.Players.LocalPlayer
local OrionLib = loadstring(game:HttpGet(('https://raw.githubusercontent.com/shlexware/Orion/main/source')))()
local Window = OrionLib:MakeWindow({Name = "insidehub", HidePremium = false, SaveConfig = true, ConfigFolder = "InsideTest"})

local Tab = Window:MakeTab({
	Name = "Player",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})

local Section = Tab:AddSection({
	Name = "Player setings"
})
--[[
Name = <string> - The name of the section.
]]
OrionLib:MakeNotification({
	Name = "INSIDE HUB LOAD...",
	Content = "by blizzard (Arceus X)",
	Image = "rbxassetid://4483345998",
	Time = 6
})

Tab:AddButton({
	Name = "SpeedHack-16",
	Callback = function()
      		player.Character.Humanoid.WalkSpeed = 16
  	end    
})
Tab:AddButton({
	Name = "SpeedHack-50",
	Callback = function()
      		player.Character.Humanoid.WalkSpeed = 50
  	end    
})
Tab:AddButton({
	Name = "SpeedHack-100",
	Callback = function()
      		player.Character.Humanoid.WalkSpeed = 100
  	end    
})
Tab:AddButton({
	Name = "SpeedHack-150",
	Callback = function()
      		player.Character.Humanoid.WalkSpeed = 150
  	end    
})
Tab:AddButton({
	Name = "SpeedHack-200",
	Callback = function()
      		player.Character.Humanoid.WalkSpeed = 200
  	end    
})

Tab:AddButton({
	Name = "jumphack-50",
	Callback = function()
      		player.Character.Humanoid.JumpPower = 50
  	end    
})
Tab:AddButton({
	Name = "jumphack-100",
	Callback = function()
      		player.Character.Humanoid.JumpPower = 100
  	end    
})
Tab:AddButton({
	Name = "jumphack-150",
	Callback = function()
      		player.Character.Humanoid.JumpPower = 150
  	end    
})
Tab:AddButton({
	Name = "jumphack-200",
	Callback = function()
      		player.Character.Humanoid.JumpPower = 200
  	end    
})

local Tab = Window:MakeTab({
	Name = "ESP (development)",
	Icon = "rbxassetid://4483345998",
	PremiumOnly = false
})
local Section = Tab:AddSection({
	Name = "Esp"
    
})