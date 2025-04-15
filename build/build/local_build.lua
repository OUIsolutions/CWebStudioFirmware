
function local_build()

    os.execute(COMPILER.." src/main.c -o "..PROJECT_NAME)
end