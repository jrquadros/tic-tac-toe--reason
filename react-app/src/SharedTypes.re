type player =
  | Cross
  | Circle;

type field =
  | Empity
  | Marked(player);

type row = list(field);

type board = list(row);

type gameState =
  | Playing(player)
  | Winner(player)
  | Draw;

type state = {
  board,
  gameState,
};