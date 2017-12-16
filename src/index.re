let cases: list((string, int)) = [("1122", 3), ("1111", 4), ("1234", 4), ("91212129", 9)];

let solve = (input: string, answer: int) => {
  Printf.printf(
    "Recieved input: %s\nExpected answer: %d\nComputed answer: %d\n",
    input,
    answer,
    0
  );
  (-1)
};

Printf.printf(
  "%s\n",
  string_of_bool @@
  List.(cases |> map(((input, answer)) => solve(input, answer) == answer) |> for_all((v) => v))
);