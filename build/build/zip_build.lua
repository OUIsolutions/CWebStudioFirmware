
function zip_build()
    os.execute("zip -r release/"..PROJECT_NAME..".zip dependencies docs build src")

end 