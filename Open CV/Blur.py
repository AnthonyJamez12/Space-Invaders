import cv2
import numpy as np

img = cv2.imread("Resources/Patrick Mahomes.jpg")
kernel = np.ones((5, 5), np.uint8)

imgGray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
imgBlur = cv2.GaussianBlur(imgGray, (7, 7), 0)

cv2.imshow("Blur", imgBlur)


cv2.waitKey(0)