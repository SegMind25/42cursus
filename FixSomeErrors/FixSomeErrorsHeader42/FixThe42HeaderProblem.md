Perfect! For **Neovim**, here are the correct steps:

---

## Step 1: Download the stdheader plugin

```bash
# Create the plugin directory for Neovim
mkdir -p ~/.config/nvim/plugin

# Download the stdheader.vim file
curl -o ~/.config/nvim/plugin/stdheader.vim https://raw.githubusercontent.com/42Paris/42header/master/plugin/stdheader.vim
```

---

## Step 2: Verify the file was downloaded

```bash
ls ~/.config/nvim/plugin/stdheader.vim
```

You should see: `/home/hadrider/.config/nvim/plugin/stdheader.vim`

---

## Step 3: Add USER and MAIL to `~/.zshrc`

```bash
# Open your zshrc file
nvim ~/.zshrc
```

Add these lines at the **bottom**:

```bash
# 42 Header Configuration
export USER="YourName"
export MAIL="IntraName@student.42.fr"
```

Save and exit: Press `ESC`, type `:wq`, press `ENTER`

---

## Step 4: Apply the changes

```bash
source ~/.zshrc
```

---

## Step 5: Verify it worked

```bash
echo $USER
echo $MAIL
```

Should output:
```
Bekkali
SegMind25@student.42.fr
```

---

## Step 6: Test the header

```bash
nvim test.c
```

In Neovim, press **`F1`** or type **`:Stdheader`** and press `ENTER`

You should see the 42 header appear:

```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bekkali <SegMind25@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 ...                        #+#    #+#             */
/*   Updated: 2025/02/10 ...                        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

---

## Troubleshooting

**If it doesn't work:**

1. Check the file exists:
   ```bash
   ls ~/.config/nvim/plugin/stdheader.vim
   ```

2. Check environment variables:
   ```bash
   echo $USER
   echo $MAIL
   ```

3. Restart Neovim completely (close and reopen)

4. If Ctrl + : opens help instead, you can use `:Stdheader` command directly

---

Done! Now you can use `Ctrl + :` in Neovim to add the 42 header automatically. 🎉
