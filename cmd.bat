@echo off
echo Copying...
xcopy F:\homework\C-PrimerPlus_3.7\cpluswork\cpluswork  F:\Github\C-PrimerPlus_4\cpluswork /e /h /y
xcopy F:\homework\C-PrimerPlus_3.7\cpluswork\Debug  F:\Github\C-PrimerPlus_4\Debug /e /h /y
xcopy F:\homework\C-PrimerPlus_3.7\cpluswork\cpluswork.sln  F:\Github\C-PrimerPlus_4 /e /h /y
xcopy F:\homework\C-PrimerPlus_3.7\cpluswork\cpluswork.VC.db  F:\Github\C-PrimerPlus_4 /e /h /y
xcopy F:\homework\C-PrimerPlus_3.7\cpluswork\cpluswork.VC.VC.opendb  F:\Github\C-PrimerPlus_4 /e /h /y

echo Completed!!!
