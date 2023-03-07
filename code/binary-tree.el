;;; binary-tree.el --- Description -*- lexical-binding: t; -*-
;;
;; Copyright (C) 2023 John Doe
;;
;; Author: John Doe <john@doe.com>
;; Maintainer: John Doe <john@doe.com>
;; Created: February 28, 2023
;; Modified: February 28, 2023
;; Version: 0.0.1
;; Keywords: abbrev bib c calendar comm convenience data docs emulations extensions faces files frames games hardware help hypermedia i18n internal languages lisp local maint mail matching mouse multimedia news outlines processes terminals tex tools unix vc wp
;; Homepage: https://github.com/henrik/binary-tree
;; Package-Requires: ((emacs "24.3"))
;;
;; This file is not part of GNU Emacs.
;;
;;; Commentary:
;;
;;  Description
;;
;;; Code:



;; (provide 'binary-tree)

(defun binary-tree
    (l)
  (let ((el (car l))(rest (cdr l)))
       (message el)))

(binary-tree '("a", "b"))
;;; binary-tree.el ends here
