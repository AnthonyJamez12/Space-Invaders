import cv2
import numpy as np

img = cv2.imread("Resources/Nets court.jpg")

width, height = 400, 225
pts1 = np.float32([[59, 56], [336, 56], [11, 137], [385, 135]])
pts2 = np.float32([[0, 0], [width, 0], [0, height], [width, height]])
matrix = cv2.getPerspectiveTransform(pts1, pts2)
imgOutput = cv2.warpPerspective(img, matrix, (width, height))

cv2.imshow("Image", img)
cv2.imshow("Output", imgOutput)
cv2.waitKey(0)