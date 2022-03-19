# Assignment 1
# Asmaa Ismael Heikal
# ID: 20210067
# Game 6 : 100 Game Graghics


from tkinter import *
from tkinter import messagebox

# building the window
app = Tk()
app.title("Reach 100 Game")
app.configure(bg="cadetblue")
app.geometry("400x300")
a=StringVar()
a.set("0")
u=StringVar()
u.set("PLAYER 1")


# what will happen when you press the button
def action():
    # get the input from the Entry box
    v = e.get()

    try:
        int(v)

        if int(v)<1 or int(v)>10:
            messagebox.showinfo("ERROR","Invalid input")
            e.delete(0, "end")
            return 0
        # adding user input to the sum
        z=int(s["text"])+int(v)
        a.set(z)

        i=p["text"]
        line = f"The Winner is {i}"

        # changing label content
        if p["text"]=="PLAYER 1":
            u.set("PLAYER 2")
        elif p["text"]=="PLAYER 2":
            u.set("PLAYER 1")

        # check for the winner and show message box
        if z== 100:
            messagebox.showinfo("** Congratulations **",line)
            a.set(0)

        # deleting the old input in the Entry box
        e.delete(0, "end")

    except ValueError:
        messagebox.showinfo("ERROR", "Invalid input \n Please,Enter a number ")
        e.delete(0, "end")


# putting labels and buttons and Entry on the screen
w = Label(app, text="\n   The sum is : ",fg="black",bg="cadetblue",font=("Arial",16))
w.place(x=0,y=0)
y = Label(app,text="\n   *add a number from 1 to 10 to the sum to reach 100*\n   *the first who reaches 100 wins*",font="10",bg="cadetblue")
y.place(x=0, y=50)
s = Label(app,width=3,fg="darkred",bg="cadetblue",font=("Arial",16),textvariable=a)
s.place(x=150,y=25)
p = Label(app,width=8,fg="darkred",bg="cadetblue",font=("Arial",16),textvariable=u)
p.place(x=140,y=120)
e = Entry(app,width=2,font=("Arial",16),bg="azure3",bd=6)
e.place(x=170,y=165)
n = Button(app,bg="azure3",font=("Arial",16),text="ADD",command=action)
n.place(x=160,y=225)

app.mainloop()
