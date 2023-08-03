class Cookie:
    def __init__(self, color: str) -> None:
        self.color = color

    def get_color(self) -> str:
        return self.color

    def set_color(self, color: str) -> None:
        self.color = color


cookie_one = Cookie("green")
cookie_two = Cookie("Red")

print("Cookie one is: ", cookie_one.get_color())
print("Cookie two is: ", cookie_two.get_color())

cookie_one.set_color("yellow")

print("\nCookie one is now: ", cookie_one.get_color())
