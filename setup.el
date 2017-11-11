(defun cpp-setup ()
  (setq flycheck-clang-language-standard "c++17")
  (setq flycheck-clang-args '("-pthread"))
  (setq flycheck-clang-standard-library nil))

((lambda ()
   (add-hook 'c++-mode-hook 'cpp-setup)))  ;; eval here
