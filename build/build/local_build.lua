
function local_build()

    os.execute(COMPILER.." src/main.c -ldl -o "..PROJECT_NAME)
end