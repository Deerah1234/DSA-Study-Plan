row1 = ["X", "X", "X"]
row2 = ["X", "X", "X"]
row3 = ["X", "X", "X"]

#   c0  c1  c2
#   0   1   2
# ['X','X','X'] -> row 0
# ['X','X','X'] -> row 1
# ['X','X','X'] -> row 2

matrix = [row1, row2, row3]

print(f"{row1}\n{row2}\n{row3}")
position = input("Enter the position where you want to hide money: ")  # 32

# SECTION - The amount of money the user will hide
amount = input("Enter the amount you want to hide: ")  # 500

row_number = int(position[0])  # 3
colum_number = int(position[1])  # 2

row_selected = row_number - 1  # 3-1 = 2
colum_selected = colum_number - 1  # 2-1 = 1

#     0              1              2
#   0   1   2      0   1   2      0   1   2
# ['X','X','X'], ['X','X','X'], ['X','500','X']

#           2             1
matrix[row_selected][colum_selected] = amount

print(f"{row1}\n{row2}\n{row3}")
