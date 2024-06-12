#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
302,
309,
311,
313,
329,
337,
338,
339,
340,
341,
342,
343,
344,
345,
348,
349,
539,
540,
542,
574,
575,
576,
596,
597,
598,
599,
697,
698,
699,
700,
701,
702,
703,
706,
792,
793,
794,
795,
796,
797,
798,
799,
802,
812,
813,
815,
817,
834,
837,
846,
854,
855,
856,
857,
858,
859,
860,
861,
862,
863,
864,
865,
866,
867,
868,
869,
870,
872,
873,
874,
875,
876,
877,
878,
977,
978,
979,
980,
981,
982,
983,
984,
985,
986,
987,
988,
989,
990,
991,
992,
993,
995,
996,
997,
998,
999,
1000,
1001,
1083,
1084,
1089,
1160,
1170,
1173,
1175,
1181,
1182,
1184,
1185,
1189,
1191,
1194,
1195,
1197,
1198,
1201,
1202,
1203,
1206,
1208,
1211,
1213,
1215,
1297,
1300,
1302,
1311,
1312,
1313,
1314,
1316,
1323,
1324,
1325,
1326,
1327,
1335,
1336,
1337,
1341,
1342,
1345,
1350,
1351,
1352,
1624,
1854,
1856,
1886,
1887,
13029,
13030,
13032,
13033,
13034,
13035,
13036,
13037,
13038,
13040,
13041,
13042,
13044,
13045,
13047,
13048,
13049,
13051,
13075,
13077,
13086,
13087,
13089,
13091,
13093,
13095,
13097,
13147,
13156,
13163,
13164,
13165,
13167,
13168,
13169,
13170,
13171,
13173,
13175,
13176,
13177,
15555,
15559,
15563,
15564,
15565,
15566,
20165,
20166,
20167,
20168,
20190,
20191,
20192,
20193,
20194,
20197,
20199,
20200,
20202,
20203,
20419,
20420,
20421,
20422,
21195,
21198,
21215,
21216,
21217,
21218,
21219,
21220,
21221,
21906,
21907,
21908,
21913,
21914,
21990,
22038,
22044,
22051,
22061,
22065,
22121,
22170,
22183,
22185,
22187,
22210,
22212,
22213,
22214,
22215,
22216,
22225,
22241,
22263,
22264,
22275,
22277,
22284,
22285,
22288,
22290,
22295,
22296,
22312,
22313,
22320,
22322,
22333,
22336,
22339,
22340,
22341,
22353,
22363,
22369,
22370,
22371,
22373,
22374,
22393,
22395,
22411,
22457,
22458,
22459,
22460,
22461,
22462,
22463,
22464,
22465,
22466,
22467,
22468,
22485,
22491,
22496,
22497,
22498,
22535,
22536,
23359,
23360,
23361,
23365,
23366,
23466,
23580,
23640,
23974,
23975,
24003,
24004,
24005,
24012,
24113,
24114,
24153,
25198,
25199,
26160,
26162,
26164,
28579,
28600,
28607,
28608,
28610,
};
void ves_icall_System_ArgIterator_Setup (int,int,int);
void ves_icall_System_ArgIterator_IntGetNextArg (int,int);
void ves_icall_System_ArgIterator_IntGetNextArgWithType (int,int,int);
int ves_icall_System_ArgIterator_IntGetNextArgType (int);
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int mono_environment_exitcode_get ();
void mono_environment_exitcode_set (int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_Exit (int);
int ves_icall_System_Environment_GetCommandLineArgs_raw (int);
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
int ves_icall_System_GC_GetMaxGeneration ();
void ves_icall_System_GC_InternalCollect (int);
void ves_icall_System_GC_RecordPressure (int64_t);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
int64_t ves_icall_System_GC_GetAllocatedBytesForCurrentThread ();
int64_t ves_icall_System_GC_GetTotalAllocatedBytes_raw (int,int);
int ves_icall_System_GC_GetGeneration_raw (int,int);
void ves_icall_System_GC_WaitForPendingFinalizers ();
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
int64_t ves_icall_System_GC_GetTotalMemory (int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_System_RuntimeFieldHandle_GetValueDirect_raw (int,int,int,int,int);
void ves_icall_System_RuntimeFieldHandle_SetValueDirect_raw (int,int,int,int,int,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_TypedReference_ToObject_raw (int,int);
void ves_icall_System_TypedReference_InternalMakeTypedReference_raw (int,int,int,int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
float ves_icall_System_Threading_Interlocked_CompareExchange_Single (int,float,float);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Decrement_Long (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
float ves_icall_System_Threading_Interlocked_Exchange_Single (int,float);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
double ves_icall_System_Threading_Interlocked_CompareExchange_Double (int,double,double);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
double ves_icall_System_Threading_Interlocked_Exchange_Double (int,double);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Interlocked_MemoryBarrierProcessWide ();
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_owner_raw (int,int);
int64_t ves_icall_System_Threading_Monitor_Monitor_LockContentionCount ();
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_StartInternal_raw (int,int,int);
uint64_t ves_icall_System_Threading_Thread_GetCurrentOSThreadId_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
int ves_icall_System_Threading_Thread_Join_internal_raw (int,int,int);
void ves_icall_System_Threading_Thread_Interrupt_internal_raw (int,int);
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_DestroyStructure_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_OffsetOf_raw (int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw (int,int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegateInternal_raw (int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_Prelink_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadFromPath_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
void ves_icall_System_Runtime_InteropServices_NativeLibrary_FreeLib_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_GetSymbol_raw (int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_PrepareMethod_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunModuleConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetCallingAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_GetCurrentMethod_raw (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetEntryPoint_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetTopLevelForwardedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInfoInternal_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetReferencedAssemblies_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_FieldInfo_GetTypeModifiers_raw (int,int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_GetGlobalType_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveTypeToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveFieldToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveStringToken_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMemberToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveSignature_raw (int,int,int,int);
void ves_icall_System_Reflection_RuntimeModule_GetPEKind_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_RuntimePropertyInfo_GetTypeModifiers_raw (int,int,int);
int ves_icall_property_info_get_default_value_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_AssemblyExtensions_ApplyUpdateEnabled (int);
int ves_icall_AssemblyExtensions_GetApplyUpdateCapabilities_raw (int);
void ves_icall_AssemblyExtensions_ApplyUpdate (int,int,int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_EnumBuilder_setup_enum_type_raw (int,int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_SignatureHelper_get_signature_local_raw (int,int);
int ves_icall_SignatureHelper_get_signature_field_raw (int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 302,
ves_icall_System_ArgIterator_Setup,
// token 309,
ves_icall_System_ArgIterator_IntGetNextArg,
// token 311,
ves_icall_System_ArgIterator_IntGetNextArgWithType,
// token 313,
ves_icall_System_ArgIterator_IntGetNextArgType,
// token 329,
ves_icall_System_Array_InternalCreate,
// token 337,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 338,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 339,
ves_icall_System_Array_CanChangePrimitive,
// token 340,
ves_icall_System_Array_FastCopy_raw,
// token 341,
ves_icall_System_Array_GetLength_raw,
// token 342,
ves_icall_System_Array_GetLowerBound_raw,
// token 343,
ves_icall_System_Array_GetGenericValue_icall,
// token 344,
ves_icall_System_Array_GetValueImpl_raw,
// token 345,
ves_icall_System_Array_SetGenericValue_icall,
// token 348,
ves_icall_System_Array_SetValueImpl_raw,
// token 349,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 539,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 540,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 542,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 574,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 575,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 576,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 596,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 597,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 598,
ves_icall_System_Enum_InternalGetCorElementType,
// token 599,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 697,
mono_environment_exitcode_get,
// token 698,
mono_environment_exitcode_set,
// token 699,
ves_icall_System_Environment_get_ProcessorCount,
// token 700,
ves_icall_System_Environment_get_TickCount,
// token 701,
ves_icall_System_Environment_get_TickCount64,
// token 702,
ves_icall_System_Environment_Exit,
// token 703,
ves_icall_System_Environment_GetCommandLineArgs_raw,
// token 706,
ves_icall_System_Environment_FailFast_raw,
// token 792,
ves_icall_System_GC_GetCollectionCount,
// token 793,
ves_icall_System_GC_GetMaxGeneration,
// token 794,
ves_icall_System_GC_InternalCollect,
// token 795,
ves_icall_System_GC_RecordPressure,
// token 796,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 797,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 798,
ves_icall_System_GC_GetAllocatedBytesForCurrentThread,
// token 799,
ves_icall_System_GC_GetTotalAllocatedBytes_raw,
// token 802,
ves_icall_System_GC_GetGeneration_raw,
// token 812,
ves_icall_System_GC_WaitForPendingFinalizers,
// token 813,
ves_icall_System_GC_SuppressFinalize_raw,
// token 815,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 817,
ves_icall_System_GC_GetTotalMemory,
// token 834,
ves_icall_System_GC_GetGCMemoryInfo,
// token 837,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 846,
ves_icall_System_Object_MemberwiseClone_raw,
// token 854,
ves_icall_System_Math_Acos,
// token 855,
ves_icall_System_Math_Acosh,
// token 856,
ves_icall_System_Math_Asin,
// token 857,
ves_icall_System_Math_Asinh,
// token 858,
ves_icall_System_Math_Atan,
// token 859,
ves_icall_System_Math_Atan2,
// token 860,
ves_icall_System_Math_Atanh,
// token 861,
ves_icall_System_Math_Cbrt,
// token 862,
ves_icall_System_Math_Ceiling,
// token 863,
ves_icall_System_Math_Cos,
// token 864,
ves_icall_System_Math_Cosh,
// token 865,
ves_icall_System_Math_Exp,
// token 866,
ves_icall_System_Math_Floor,
// token 867,
ves_icall_System_Math_Log,
// token 868,
ves_icall_System_Math_Log10,
// token 869,
ves_icall_System_Math_Pow,
// token 870,
ves_icall_System_Math_Sin,
// token 872,
ves_icall_System_Math_Sinh,
// token 873,
ves_icall_System_Math_Sqrt,
// token 874,
ves_icall_System_Math_Tan,
// token 875,
ves_icall_System_Math_Tanh,
// token 876,
ves_icall_System_Math_FusedMultiplyAdd,
// token 877,
ves_icall_System_Math_Log2,
// token 878,
ves_icall_System_Math_ModF,
// token 977,
ves_icall_System_MathF_Acos,
// token 978,
ves_icall_System_MathF_Acosh,
// token 979,
ves_icall_System_MathF_Asin,
// token 980,
ves_icall_System_MathF_Asinh,
// token 981,
ves_icall_System_MathF_Atan,
// token 982,
ves_icall_System_MathF_Atan2,
// token 983,
ves_icall_System_MathF_Atanh,
// token 984,
ves_icall_System_MathF_Cbrt,
// token 985,
ves_icall_System_MathF_Ceiling,
// token 986,
ves_icall_System_MathF_Cos,
// token 987,
ves_icall_System_MathF_Cosh,
// token 988,
ves_icall_System_MathF_Exp,
// token 989,
ves_icall_System_MathF_Floor,
// token 990,
ves_icall_System_MathF_Log,
// token 991,
ves_icall_System_MathF_Log10,
// token 992,
ves_icall_System_MathF_Pow,
// token 993,
ves_icall_System_MathF_Sin,
// token 995,
ves_icall_System_MathF_Sinh,
// token 996,
ves_icall_System_MathF_Sqrt,
// token 997,
ves_icall_System_MathF_Tan,
// token 998,
ves_icall_System_MathF_Tanh,
// token 999,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 1000,
ves_icall_System_MathF_Log2,
// token 1001,
ves_icall_System_MathF_ModF,
// token 1083,
ves_icall_System_RuntimeFieldHandle_GetValueDirect_raw,
// token 1084,
ves_icall_System_RuntimeFieldHandle_SetValueDirect_raw,
// token 1089,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 1160,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 1170,
ves_icall_RuntimeType_make_array_type_raw,
// token 1173,
ves_icall_RuntimeType_make_byref_type_raw,
// token 1175,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 1181,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 1182,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 1184,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 1185,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 1189,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 1191,
ves_icall_RuntimeType_GetPacking_raw,
// token 1194,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 1195,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 1197,
ves_icall_System_RuntimeType_getFullName_raw,
// token 1198,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 1201,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 1202,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 1203,
ves_icall_RuntimeType_GetFields_native_raw,
// token 1206,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 1208,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 1211,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 1213,
ves_icall_RuntimeType_GetName_raw,
// token 1215,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1297,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1300,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1302,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1311,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1312,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1313,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1314,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1316,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1323,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1324,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1325,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1326,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1327,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1335,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1336,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1337,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1341,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1342,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1345,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1350,
ves_icall_System_String_FastAllocateString_raw,
// token 1351,
ves_icall_System_String_InternalIsInterned_raw,
// token 1352,
ves_icall_System_String_InternalIntern_raw,
// token 1624,
ves_icall_System_Type_internal_from_handle_raw,
// token 1854,
ves_icall_System_TypedReference_ToObject_raw,
// token 1856,
ves_icall_System_TypedReference_InternalMakeTypedReference_raw,
// token 1886,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1887,
ves_icall_System_ValueType_Equals_raw,
// token 13029,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 13030,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 13032,
ves_icall_System_Threading_Interlocked_CompareExchange_Single,
// token 13033,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 13034,
ves_icall_System_Threading_Interlocked_Decrement_Long,
// token 13035,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 13036,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 13037,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 13038,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 13040,
ves_icall_System_Threading_Interlocked_Exchange_Single,
// token 13041,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 13042,
ves_icall_System_Threading_Interlocked_CompareExchange_Double,
// token 13044,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 13045,
ves_icall_System_Threading_Interlocked_Exchange_Double,
// token 13047,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 13048,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 13049,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 13051,
ves_icall_System_Threading_Interlocked_MemoryBarrierProcessWide,
// token 13075,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 13077,
mono_monitor_exit_icall_raw,
// token 13086,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 13087,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 13089,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 13091,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 13093,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 13095,
ves_icall_System_Threading_Monitor_Monitor_test_owner_raw,
// token 13097,
ves_icall_System_Threading_Monitor_Monitor_LockContentionCount,
// token 13147,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 13156,
ves_icall_System_Threading_Thread_StartInternal_raw,
// token 13163,
ves_icall_System_Threading_Thread_GetCurrentOSThreadId_raw,
// token 13164,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 13165,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 13167,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 13168,
ves_icall_System_Threading_Thread_GetState_raw,
// token 13169,
ves_icall_System_Threading_Thread_SetState_raw,
// token 13170,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 13171,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 13173,
ves_icall_System_Threading_Thread_YieldInternal,
// token 13175,
ves_icall_System_Threading_Thread_Join_internal_raw,
// token 13176,
ves_icall_System_Threading_Thread_Interrupt_internal_raw,
// token 13177,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 15555,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 15559,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 15563,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 15564,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 15565,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 15566,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 20165,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 20166,
ves_icall_System_GCHandle_InternalFree_raw,
// token 20167,
ves_icall_System_GCHandle_InternalGet_raw,
// token 20168,
ves_icall_System_GCHandle_InternalSet_raw,
// token 20190,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 20191,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 20192,
ves_icall_System_Runtime_InteropServices_Marshal_DestroyStructure_raw,
// token 20193,
ves_icall_System_Runtime_InteropServices_Marshal_OffsetOf_raw,
// token 20194,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 20197,
ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw,
// token 20199,
ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw,
// token 20200,
ves_icall_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegateInternal_raw,
// token 20202,
ves_icall_System_Runtime_InteropServices_Marshal_Prelink_raw,
// token 20203,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 20419,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadFromPath_raw,
// token 20420,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 20421,
ves_icall_System_Runtime_InteropServices_NativeLibrary_FreeLib_raw,
// token 20422,
ves_icall_System_Runtime_InteropServices_NativeLibrary_GetSymbol_raw,
// token 21195,
mono_object_hash_icall_raw,
// token 21198,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 21215,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_PrepareMethod_raw,
// token 21216,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 21217,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 21218,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 21219,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 21220,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunModuleConstructor_raw,
// token 21221,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 21906,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 21907,
ves_icall_System_Reflection_Assembly_GetCallingAssembly_raw,
// token 21908,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 21913,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 21914,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 21990,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 22038,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 22044,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 22051,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 22061,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 22065,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 22121,
ves_icall_GetCurrentMethod_raw,
// token 22170,
ves_icall_System_Reflection_RuntimeAssembly_GetEntryPoint_raw,
// token 22183,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 22185,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 22187,
ves_icall_System_Reflection_RuntimeAssembly_GetTopLevelForwardedTypes_raw,
// token 22210,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 22212,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInfoInternal_raw,
// token 22213,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 22214,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 22215,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 22216,
ves_icall_System_Reflection_Assembly_InternalGetReferencedAssemblies_raw,
// token 22225,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 22241,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 22263,
ves_icall_reflection_get_token_raw,
// token 22264,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 22275,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 22277,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 22284,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 22285,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 22288,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 22290,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 22295,
ves_icall_reflection_get_token_raw,
// token 22296,
ves_icall_System_Reflection_FieldInfo_GetTypeModifiers_raw,
// token 22312,
ves_icall_get_method_info_raw,
// token 22313,
ves_icall_get_method_attributes,
// token 22320,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 22322,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 22333,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw,
// token 22336,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 22339,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 22340,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 22341,
ves_icall_reflection_get_token_raw,
// token 22353,
ves_icall_InternalInvoke_raw,
// token 22363,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 22369,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 22370,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 22371,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 22373,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 22374,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 22393,
ves_icall_InvokeClassConstructor_raw,
// token 22395,
ves_icall_InternalInvoke_raw,
// token 22411,
ves_icall_reflection_get_token_raw,
// token 22457,
ves_icall_reflection_get_token_raw,
// token 22458,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 22459,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 22460,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 22461,
ves_icall_System_Reflection_RuntimeModule_GetGlobalType_raw,
// token 22462,
ves_icall_System_Reflection_RuntimeModule_ResolveTypeToken_raw,
// token 22463,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 22464,
ves_icall_System_Reflection_RuntimeModule_ResolveFieldToken_raw,
// token 22465,
ves_icall_System_Reflection_RuntimeModule_ResolveStringToken_raw,
// token 22466,
ves_icall_System_Reflection_RuntimeModule_ResolveMemberToken_raw,
// token 22467,
ves_icall_System_Reflection_RuntimeModule_ResolveSignature_raw,
// token 22468,
ves_icall_System_Reflection_RuntimeModule_GetPEKind_raw,
// token 22485,
ves_icall_reflection_get_token_raw,
// token 22491,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 22496,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 22497,
ves_icall_RuntimePropertyInfo_GetTypeModifiers_raw,
// token 22498,
ves_icall_property_info_get_default_value_raw,
// token 22535,
ves_icall_reflection_get_token_raw,
// token 22536,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 23359,
ves_icall_AssemblyExtensions_ApplyUpdateEnabled,
// token 23360,
ves_icall_AssemblyExtensions_GetApplyUpdateCapabilities_raw,
// token 23361,
ves_icall_AssemblyExtensions_ApplyUpdate,
// token 23365,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 23366,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 23466,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 23580,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 23640,
ves_icall_EnumBuilder_setup_enum_type_raw,
// token 23974,
ves_icall_ModuleBuilder_basic_init_raw,
// token 23975,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 24003,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 24004,
ves_icall_ModuleBuilder_getToken_raw,
// token 24005,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 24012,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 24113,
ves_icall_SignatureHelper_get_signature_local_raw,
// token 24114,
ves_icall_SignatureHelper_get_signature_field_raw,
// token 24153,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 25198,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 25199,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 26160,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 26162,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 26164,
ves_icall_System_Diagnostics_Debugger_Log,
// token 28579,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 28600,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 28607,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 28608,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 28610,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
0,
0,
0,
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
0,
0,
0,
1,
1,
0,
0,
0,
0,
1,
1,
0,
1,
1,
0,
1,
1,
0,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
};
