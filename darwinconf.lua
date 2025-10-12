
function amalgamation_build()
    local runtime = darwin.camalgamator.generate_amalgamation("src/main.c")
    darwin.dtw.write_file("release/CWebStudioFirmware.c", runtime)
end

darwin.add_recipe({
    name="amalgamation",
    inputs={"dependencies","src"},
    description="make a single file amalgamation of the project",
    outs={"release/CWebStudioFirmware.c"},
    callback=amalgamation_build
})


function zip_build()
    os.execute("zip -r release/CWebStudioFirmware.zip dependencies docs build src")
end

darwin.add_recipe({
    name="zip",
    inputs={"dependencies","docs","build","src"},
    description="make a zip file of the project",
    outs={"release/CWebStudioFirmware.zip"},
    callback=zip_build
})
