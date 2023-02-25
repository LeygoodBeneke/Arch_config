local status, packer = pcall(require, "packer")
if (not status) then
    print("Packer is not installed")
    return
end

vim.cmd [[packadd packer.nvim]]

packer.startup(function(use)
    use 'wbthomason/packer.nvim'
    --use 'nvim-lualine/lualine.nvim'
    --
    --requires = { 'kyazdani42/nvim-web-devicons', opt = true }
    --}-- Statusline
    use({ 'projekt0n/github-nvim-theme', tag = 'v0.0.7' })
    use {'akinsho/bufferline.nvim', tag = "v3.*", requires = 'nvim-tree/nvim-web-devicons'}
    use 'nvim-tree/nvim-web-devicons'
    use "windwp/nvim-autopairs"
    use 'lewis6991/gitsigns.nvim'
    use "lukas-reineke/indent-blankline.nvim"
    
    use({
      "nvim-treesitter/nvim-treesitter",
      config = function()
        require("config.treesitter")
      end,
      requires = {"nvim-treesitter/playground"}
    })
end)

