from kivy.app  import App
from kivy.uix.button import Button
from kivy.uix.popup import Popup
from kivy.uix.gridlayout import GridLayout

class TicTacToe(GridLayout):
    #to dispaly a register interface
    def __init__(self):
        super(TicTacToe, self).__init__(cols=3, spacing=2)
        self.count = 0 #number of moves
        self.symbols = ('X', 'O')
        self.symbolsNum = 0

        self.grid = [[None for col in range(self.cols)] for row in range(self.cols)]
        for row in range(self.cols):
            for col in range(self.cols):
                title = Button(font_size = 20, on_press = self.action)
                self.grid[row][col] = title
                self.add_widget(title)

    def action(self, button1):
        button1.text = self.symbols[self.symbolNum]
        self.symbolsNum = (self.symbolsNum+1)%2
        self.count +=1
        self.checkResult()

    def checkResult(self):
        winner = self.getWinner()
        if winner:
            closeButton = Button(text = ' ' + '+winner+'' won !! \n Click here to start')

        else:
            return

        myPopUp = Popup(title = 'Result of game', content = closeButton,size_hint = (.5 , .5))
        myPopUp.open()
        clsoeButton.bind_press = myPopUp.dismiss, on_release = self.restartGame

    def getWinner(self):
        gridValues = [[self.grid[row][col].text for col in range(self.cols)] for row in range(self.cols)]
        #check row wise
        for row in range(self.cols):
            result = self.sameSymbol(gridValues[row])
            if result:
                return result

        #check column wise
        for row in range(self.cols):
            column = [row[col] for row in gridValues]
            result = self.sameSymbol(column)
            if result:
                return result

        #check forward diagonal
        daig = [gridValues[i][j] for i in range(self.cols)]
        result = self.sameSymbol(diag)
        if result:
            return result

        #check backward diagonal
        daig = [gridValues[i][(self.cols-1)-i] for i in range(self.cols)]
        result = self.sameSymbol(diag)
        if result:
            return result


        return False

    def sameSymbol(self, ValueList):
        symbol = ValueList[0]
        for element in ValueList:
            if element != symbol:
                return False
        return symbol

    def restartGame(self, btn):
        self.count = 0  #no moves taken in new game
        for row in range(self.cols):
            for col in range(self.cols):
                self.grid[row][col].txt = ''


class TicTacToeApp(App):
    #main class instantiated for running application
    def build(self):
        return TicTacToe()

if __name__ == '__main__':
    TicTacToeApp().run()


