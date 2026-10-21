Form 2025q3 branch of Keychron/qmk_firmware
https://github.com/BenoitPerron/qmk_firmware_C1.git

python -m venv venv
vact
pip install qmk
qmk setup BenoitPerron/qmk_firmware_C1.git -b 2025q3 -H keychron_qmk
Yes
cd keychron_qmk
git switch -c hrm-c1-pro-8k
git submodule update --init --recursive

qmk compile -kb keychron/c1_pro_8k/ansi -km keychron
cp -r keyboards/keychron/c1_pro_8k/ansi/keymaps/keychron keyboards/keychron/c1_pro_8k/ansi/keymaps/hrm

modify code in keyboards/keychron/c1_pro_8k/ansi/keymaps/hrm

qmk compile -kb keychron/c1_pro_8k/ansi -km hrm

git add keyboards/keychron/*/ansi/keymaps/hrm
git commit -m "Add Windows home row mods keymap"
git push -u origin HEAD

qmk flash -kb keychron/c1_pro_8k/ansi -km hrm
unplug
press and hold esc
plug
