namespace SharpLang.CompilerServices
{
    /// <summary>
    /// Describes the field indices in RTTI structure.
    /// </summary>
    enum RuntimeTypeInfoFields
    {
        Base = 0,
        InterfaceMethodTable,
        VirtualTable,
        StaticFields,
    }
}