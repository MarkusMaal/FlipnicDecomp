#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010a930
// Address: 0x10a930 - 0x10abe8
void FUN_0010a930_0x10a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010a930_0x10a930");
#endif

    switch (ctx->pc) {
        case 0x10a930u: goto label_10a930;
        case 0x10a934u: goto label_10a934;
        case 0x10a938u: goto label_10a938;
        case 0x10a93cu: goto label_10a93c;
        case 0x10a940u: goto label_10a940;
        case 0x10a944u: goto label_10a944;
        case 0x10a948u: goto label_10a948;
        case 0x10a94cu: goto label_10a94c;
        case 0x10a950u: goto label_10a950;
        case 0x10a954u: goto label_10a954;
        case 0x10a958u: goto label_10a958;
        case 0x10a95cu: goto label_10a95c;
        case 0x10a960u: goto label_10a960;
        case 0x10a964u: goto label_10a964;
        case 0x10a968u: goto label_10a968;
        case 0x10a96cu: goto label_10a96c;
        case 0x10a970u: goto label_10a970;
        case 0x10a974u: goto label_10a974;
        case 0x10a978u: goto label_10a978;
        case 0x10a97cu: goto label_10a97c;
        case 0x10a980u: goto label_10a980;
        case 0x10a984u: goto label_10a984;
        case 0x10a988u: goto label_10a988;
        case 0x10a98cu: goto label_10a98c;
        case 0x10a990u: goto label_10a990;
        case 0x10a994u: goto label_10a994;
        case 0x10a998u: goto label_10a998;
        case 0x10a99cu: goto label_10a99c;
        case 0x10a9a0u: goto label_10a9a0;
        case 0x10a9a4u: goto label_10a9a4;
        case 0x10a9a8u: goto label_10a9a8;
        case 0x10a9acu: goto label_10a9ac;
        case 0x10a9b0u: goto label_10a9b0;
        case 0x10a9b4u: goto label_10a9b4;
        case 0x10a9b8u: goto label_10a9b8;
        case 0x10a9bcu: goto label_10a9bc;
        case 0x10a9c0u: goto label_10a9c0;
        case 0x10a9c4u: goto label_10a9c4;
        case 0x10a9c8u: goto label_10a9c8;
        case 0x10a9ccu: goto label_10a9cc;
        case 0x10a9d0u: goto label_10a9d0;
        case 0x10a9d4u: goto label_10a9d4;
        case 0x10a9d8u: goto label_10a9d8;
        case 0x10a9dcu: goto label_10a9dc;
        case 0x10a9e0u: goto label_10a9e0;
        case 0x10a9e4u: goto label_10a9e4;
        case 0x10a9e8u: goto label_10a9e8;
        case 0x10a9ecu: goto label_10a9ec;
        case 0x10a9f0u: goto label_10a9f0;
        case 0x10a9f4u: goto label_10a9f4;
        case 0x10a9f8u: goto label_10a9f8;
        case 0x10a9fcu: goto label_10a9fc;
        case 0x10aa00u: goto label_10aa00;
        case 0x10aa04u: goto label_10aa04;
        case 0x10aa08u: goto label_10aa08;
        case 0x10aa0cu: goto label_10aa0c;
        case 0x10aa10u: goto label_10aa10;
        case 0x10aa14u: goto label_10aa14;
        case 0x10aa18u: goto label_10aa18;
        case 0x10aa1cu: goto label_10aa1c;
        case 0x10aa20u: goto label_10aa20;
        case 0x10aa24u: goto label_10aa24;
        case 0x10aa28u: goto label_10aa28;
        case 0x10aa2cu: goto label_10aa2c;
        case 0x10aa30u: goto label_10aa30;
        case 0x10aa34u: goto label_10aa34;
        case 0x10aa38u: goto label_10aa38;
        case 0x10aa3cu: goto label_10aa3c;
        case 0x10aa40u: goto label_10aa40;
        case 0x10aa44u: goto label_10aa44;
        case 0x10aa48u: goto label_10aa48;
        case 0x10aa4cu: goto label_10aa4c;
        case 0x10aa50u: goto label_10aa50;
        case 0x10aa54u: goto label_10aa54;
        case 0x10aa58u: goto label_10aa58;
        case 0x10aa5cu: goto label_10aa5c;
        case 0x10aa60u: goto label_10aa60;
        case 0x10aa64u: goto label_10aa64;
        case 0x10aa68u: goto label_10aa68;
        case 0x10aa6cu: goto label_10aa6c;
        case 0x10aa70u: goto label_10aa70;
        case 0x10aa74u: goto label_10aa74;
        case 0x10aa78u: goto label_10aa78;
        case 0x10aa7cu: goto label_10aa7c;
        case 0x10aa80u: goto label_10aa80;
        case 0x10aa84u: goto label_10aa84;
        case 0x10aa88u: goto label_10aa88;
        case 0x10aa8cu: goto label_10aa8c;
        case 0x10aa90u: goto label_10aa90;
        case 0x10aa94u: goto label_10aa94;
        case 0x10aa98u: goto label_10aa98;
        case 0x10aa9cu: goto label_10aa9c;
        case 0x10aaa0u: goto label_10aaa0;
        case 0x10aaa4u: goto label_10aaa4;
        case 0x10aaa8u: goto label_10aaa8;
        case 0x10aaacu: goto label_10aaac;
        case 0x10aab0u: goto label_10aab0;
        case 0x10aab4u: goto label_10aab4;
        case 0x10aab8u: goto label_10aab8;
        case 0x10aabcu: goto label_10aabc;
        case 0x10aac0u: goto label_10aac0;
        case 0x10aac4u: goto label_10aac4;
        case 0x10aac8u: goto label_10aac8;
        case 0x10aaccu: goto label_10aacc;
        case 0x10aad0u: goto label_10aad0;
        case 0x10aad4u: goto label_10aad4;
        case 0x10aad8u: goto label_10aad8;
        case 0x10aadcu: goto label_10aadc;
        case 0x10aae0u: goto label_10aae0;
        case 0x10aae4u: goto label_10aae4;
        case 0x10aae8u: goto label_10aae8;
        case 0x10aaecu: goto label_10aaec;
        case 0x10aaf0u: goto label_10aaf0;
        case 0x10aaf4u: goto label_10aaf4;
        case 0x10aaf8u: goto label_10aaf8;
        case 0x10aafcu: goto label_10aafc;
        case 0x10ab00u: goto label_10ab00;
        case 0x10ab04u: goto label_10ab04;
        case 0x10ab08u: goto label_10ab08;
        case 0x10ab0cu: goto label_10ab0c;
        case 0x10ab10u: goto label_10ab10;
        case 0x10ab14u: goto label_10ab14;
        case 0x10ab18u: goto label_10ab18;
        case 0x10ab1cu: goto label_10ab1c;
        case 0x10ab20u: goto label_10ab20;
        case 0x10ab24u: goto label_10ab24;
        case 0x10ab28u: goto label_10ab28;
        case 0x10ab2cu: goto label_10ab2c;
        case 0x10ab30u: goto label_10ab30;
        case 0x10ab34u: goto label_10ab34;
        case 0x10ab38u: goto label_10ab38;
        case 0x10ab3cu: goto label_10ab3c;
        case 0x10ab40u: goto label_10ab40;
        case 0x10ab44u: goto label_10ab44;
        case 0x10ab48u: goto label_10ab48;
        case 0x10ab4cu: goto label_10ab4c;
        case 0x10ab50u: goto label_10ab50;
        case 0x10ab54u: goto label_10ab54;
        case 0x10ab58u: goto label_10ab58;
        case 0x10ab5cu: goto label_10ab5c;
        case 0x10ab60u: goto label_10ab60;
        case 0x10ab64u: goto label_10ab64;
        case 0x10ab68u: goto label_10ab68;
        case 0x10ab6cu: goto label_10ab6c;
        case 0x10ab70u: goto label_10ab70;
        case 0x10ab74u: goto label_10ab74;
        case 0x10ab78u: goto label_10ab78;
        case 0x10ab7cu: goto label_10ab7c;
        case 0x10ab80u: goto label_10ab80;
        case 0x10ab84u: goto label_10ab84;
        case 0x10ab88u: goto label_10ab88;
        case 0x10ab8cu: goto label_10ab8c;
        case 0x10ab90u: goto label_10ab90;
        case 0x10ab94u: goto label_10ab94;
        case 0x10ab98u: goto label_10ab98;
        case 0x10ab9cu: goto label_10ab9c;
        case 0x10aba0u: goto label_10aba0;
        case 0x10aba4u: goto label_10aba4;
        case 0x10aba8u: goto label_10aba8;
        case 0x10abacu: goto label_10abac;
        case 0x10abb0u: goto label_10abb0;
        case 0x10abb4u: goto label_10abb4;
        case 0x10abb8u: goto label_10abb8;
        case 0x10abbcu: goto label_10abbc;
        case 0x10abc0u: goto label_10abc0;
        case 0x10abc4u: goto label_10abc4;
        case 0x10abc8u: goto label_10abc8;
        case 0x10abccu: goto label_10abcc;
        case 0x10abd0u: goto label_10abd0;
        case 0x10abd4u: goto label_10abd4;
        case 0x10abd8u: goto label_10abd8;
        case 0x10abdcu: goto label_10abdc;
        case 0x10abe0u: goto label_10abe0;
        case 0x10abe4u: goto label_10abe4;
        default: break;
    }

    ctx->pc = 0x10a930u;

label_10a930:
    // 0x10a930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_10a934:
    // 0x10a934: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_10a938:
    // 0x10a938: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10a93c:
    // 0x10a93c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10a93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10a940:
    // 0x10a940: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10a940u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10a944:
    // 0x10a944: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10a944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10a948:
    // 0x10a948: 0xc043210  jal         func_10C840
label_10a94c:
    if (ctx->pc == 0x10A94Cu) {
        ctx->pc = 0x10A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A948u;
        // 0x10a94c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A950u;
        goto label_10a950;
    }
    ctx->pc = 0x10A948u;
    SET_GPR_U32(ctx, 31, 0x10A950u);
    ctx->pc = 0x10A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A948u;
    // 0x10a94c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C840u, 0x10A948u, 0x10A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A950u;
label_10a950:
    // 0x10a950: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10a950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_10a954:
    // 0x10a954: 0xc046458  jal         func_119160
label_10a958:
    if (ctx->pc == 0x10A958u) {
        ctx->pc = 0x10A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A954u;
        // 0x10a958: 0x2484e290  addiu       $a0, $a0, -0x1D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A95Cu;
        goto label_10a95c;
    }
    ctx->pc = 0x10A954u;
    SET_GPR_U32(ctx, 31, 0x10A95Cu);
    ctx->pc = 0x10A958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A954u;
    // 0x10a958: 0x2484e290  addiu       $a0, $a0, -0x1D70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10A954u, 0x10A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A95Cu;
label_10a95c:
    // 0x10a95c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x10a95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_10a960:
    // 0x10a960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a964:
    // 0x10a964: 0xc046458  jal         func_119160
label_10a968:
    if (ctx->pc == 0x10A968u) {
        ctx->pc = 0x10A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A964u;
        // 0x10a968: 0x2484e2a0  addiu       $a0, $a0, -0x1D60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A96Cu;
        goto label_10a96c;
    }
    ctx->pc = 0x10A964u;
    SET_GPR_U32(ctx, 31, 0x10A96Cu);
    ctx->pc = 0x10A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A964u;
    // 0x10a968: 0x2484e2a0  addiu       $a0, $a0, -0x1D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119160u, 0x10A964u, 0x10A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A96Cu;
label_10a96c:
    // 0x10a96c: 0xa6702748  sh          $s0, 0x2748($s3)
    ctx->pc = 0x10a96cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10056), (uint16_t)GPR_U32(ctx, 16));
label_10a970:
    // 0x10a970: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10a970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_10a974:
    // 0x10a974: 0xa662274a  sh          $v0, 0x274A($s3)
    ctx->pc = 0x10a974u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10058), (uint16_t)GPR_U32(ctx, 2));
label_10a978:
    // 0x10a978: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x10a978u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_10a97c:
    // 0x10a97c: 0xa6702b58  sh          $s0, 0x2B58($s3)
    ctx->pc = 0x10a97cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 11096), (uint16_t)GPR_U32(ctx, 16));
label_10a980:
    // 0x10a980: 0x26640260  addiu       $a0, $s3, 0x260
    ctx->pc = 0x10a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 608));
label_10a984:
    // 0x10a984: 0xa6622b5a  sh          $v0, 0x2B5A($s3)
    ctx->pc = 0x10a984u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 11098), (uint16_t)GPR_U32(ctx, 2));
label_10a988:
    // 0x10a988: 0x24a5e2b0  addiu       $a1, $a1, -0x1D50
    ctx->pc = 0x10a988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959792));
label_10a98c:
    // 0x10a98c: 0xa6702f68  sh          $s0, 0x2F68($s3)
    ctx->pc = 0x10a98cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12136), (uint16_t)GPR_U32(ctx, 16));
label_10a990:
    // 0x10a990: 0x24c6e2c0  addiu       $a2, $a2, -0x1D40
    ctx->pc = 0x10a990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959808));
label_10a994:
    // 0x10a994: 0xa6622f6a  sh          $v0, 0x2F6A($s3)
    ctx->pc = 0x10a994u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12138), (uint16_t)GPR_U32(ctx, 2));
label_10a998:
    // 0x10a998: 0xa6703378  sh          $s0, 0x3378($s3)
    ctx->pc = 0x10a998u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 13176), (uint16_t)GPR_U32(ctx, 16));
label_10a99c:
    // 0x10a99c: 0xa662337a  sh          $v0, 0x337A($s3)
    ctx->pc = 0x10a99cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 13178), (uint16_t)GPR_U32(ctx, 2));
label_10a9a0:
    // 0x10a9a0: 0xa6703788  sh          $s0, 0x3788($s3)
    ctx->pc = 0x10a9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14216), (uint16_t)GPR_U32(ctx, 16));
label_10a9a4:
    // 0x10a9a4: 0xa662378a  sh          $v0, 0x378A($s3)
    ctx->pc = 0x10a9a4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14218), (uint16_t)GPR_U32(ctx, 2));
label_10a9a8:
    // 0x10a9a8: 0xa6703b98  sh          $s0, 0x3B98($s3)
    ctx->pc = 0x10a9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 15256), (uint16_t)GPR_U32(ctx, 16));
label_10a9ac:
    // 0x10a9ac: 0xa6623b9a  sh          $v0, 0x3B9A($s3)
    ctx->pc = 0x10a9acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 15258), (uint16_t)GPR_U32(ctx, 2));
label_10a9b0:
    // 0x10a9b0: 0xa6703fa8  sh          $s0, 0x3FA8($s3)
    ctx->pc = 0x10a9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16296), (uint16_t)GPR_U32(ctx, 16));
label_10a9b4:
    // 0x10a9b4: 0xa6623faa  sh          $v0, 0x3FAA($s3)
    ctx->pc = 0x10a9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16298), (uint16_t)GPR_U32(ctx, 2));
label_10a9b8:
    // 0x10a9b8: 0xa67043b8  sh          $s0, 0x43B8($s3)
    ctx->pc = 0x10a9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 17336), (uint16_t)GPR_U32(ctx, 16));
label_10a9bc:
    // 0x10a9bc: 0xc042bc8  jal         func_10AF20
label_10a9c0:
    if (ctx->pc == 0x10A9C0u) {
        ctx->pc = 0x10A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9BCu;
        // 0x10a9c0: 0xa66243ba  sh          $v0, 0x43BA($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 17338), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9C4u;
        goto label_10a9c4;
    }
    ctx->pc = 0x10A9BCu;
    SET_GPR_U32(ctx, 31, 0x10A9C4u);
    ctx->pc = 0x10A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9BCu;
    // 0x10a9c0: 0xa66243ba  sh          $v0, 0x43BA($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 17338), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AF20u, 0x10A9BCu, 0x10A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9C4u;
label_10a9c4:
    // 0x10a9c4: 0xae602328  sw          $zero, 0x2328($s3)
    ctx->pc = 0x10a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 9000), GPR_U32(ctx, 0));
label_10a9c8:
    // 0x10a9c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10a9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10a9cc:
    // 0x10a9cc: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x10a9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_10a9d0:
    // 0x10a9d0: 0x86060030  lh          $a2, 0x30($s0)
    ctx->pc = 0x10a9d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_10a9d4:
    // 0x10a9d4: 0xc042afc  jal         func_10ABF0
label_10a9d8:
    if (ctx->pc == 0x10A9D8u) {
        ctx->pc = 0x10A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9D4u;
        // 0x10a9d8: 0x26652330  addiu       $a1, $s3, 0x2330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 9008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9DCu;
        goto label_10a9dc;
    }
    ctx->pc = 0x10A9D4u;
    SET_GPR_U32(ctx, 31, 0x10A9DCu);
    ctx->pc = 0x10A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9D4u;
    // 0x10a9d8: 0x26652330  addiu       $a1, $s3, 0x2330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 9008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ABF0u, 0x10A9D4u, 0x10A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9DCu;
label_10a9dc:
    // 0x10a9dc: 0xc05fe4c  jal         func_17F930
label_10a9e0:
    if (ctx->pc == 0x10A9E0u) {
        ctx->pc = 0x10A9E4u;
        goto label_10a9e4;
    }
    ctx->pc = 0x10A9DCu;
    SET_GPR_U32(ctx, 31, 0x10A9E4u);
    ctx->pc = 0x17F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F930u, 0x10A9DCu, 0x10A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9E4u;
label_10a9e4:
    // 0x10a9e4: 0x86030030  lh          $v1, 0x30($s0)
    ctx->pc = 0x10a9e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_10a9e8:
    // 0x10a9e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10a9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a9ec:
    // 0x10a9ec: 0xc05fec0  jal         func_17FB00
label_10a9f0:
    if (ctx->pc == 0x10A9F0u) {
        ctx->pc = 0x10A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9ECu;
        // 0x10a9f0: 0x24650002  addiu       $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9F4u;
        goto label_10a9f4;
    }
    ctx->pc = 0x10A9ECu;
    SET_GPR_U32(ctx, 31, 0x10A9F4u);
    ctx->pc = 0x10A9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9ECu;
    // 0x10a9f0: 0x24650002  addiu       $a1, $v1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB00u, 0x10A9ECu, 0x10A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9F4u;
label_10a9f4:
    // 0x10a9f4: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_10a9f8:
    // 0x10a9f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10a9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_10a9fc:
    // 0x10a9fc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10aa00:
    // 0x10aa00: 0x24a5e2d0  addiu       $a1, $a1, -0x1D30
    ctx->pc = 0x10aa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959824));
label_10aa04:
    // 0x10aa04: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x10aa04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_10aa08:
    // 0x10aa08: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x10aa08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_10aa0c:
    // 0x10aa0c: 0xae6443d0  sw          $a0, 0x43D0($s3)
    ctx->pc = 0x10aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17360), GPR_U32(ctx, 4));
label_10aa10:
    // 0x10aa10: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x10aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_10aa14:
    // 0x10aa14: 0xae6243ec  sw          $v0, 0x43EC($s3)
    ctx->pc = 0x10aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17388), GPR_U32(ctx, 2));
label_10aa18:
    // 0x10aa18: 0xa66343f0  sh          $v1, 0x43F0($s3)
    ctx->pc = 0x10aa18u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 17392), (uint16_t)GPR_U32(ctx, 3));
label_10aa1c:
    // 0x10aa1c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10aa20:
    // 0x10aa20: 0xc057118  jal         func_15C460
label_10aa24:
    if (ctx->pc == 0x10AA24u) {
        ctx->pc = 0x10AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA20u;
        // 0x10aa24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA28u;
        goto label_10aa28;
    }
    ctx->pc = 0x10AA20u;
    SET_GPR_U32(ctx, 31, 0x10AA28u);
    ctx->pc = 0x10AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA20u;
    // 0x10aa24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C460u, 0x10AA20u, 0x10AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA28u;
label_10aa28:
    // 0x10aa28: 0xae622300  sw          $v0, 0x2300($s3)
    ctx->pc = 0x10aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8960), GPR_U32(ctx, 2));
label_10aa2c:
    // 0x10aa2c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_10aa30:
    // 0x10aa30: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10aa34:
    // 0x10aa34: 0x24a5e2e0  addiu       $a1, $a1, -0x1D20
    ctx->pc = 0x10aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959840));
label_10aa38:
    // 0x10aa38: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x10aa38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_10aa3c:
    // 0x10aa3c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x10aa3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10aa40:
    // 0x10aa40: 0xc057118  jal         func_15C460
label_10aa44:
    if (ctx->pc == 0x10AA44u) {
        ctx->pc = 0x10AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA40u;
        // 0x10aa44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA48u;
        goto label_10aa48;
    }
    ctx->pc = 0x10AA40u;
    SET_GPR_U32(ctx, 31, 0x10AA48u);
    ctx->pc = 0x10AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA40u;
    // 0x10aa44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C460u, 0x10AA40u, 0x10AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA48u;
label_10aa48:
    // 0x10aa48: 0xae622304  sw          $v0, 0x2304($s3)
    ctx->pc = 0x10aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8964), GPR_U32(ctx, 2));
label_10aa4c:
    // 0x10aa4c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10aa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_10aa50:
    // 0x10aa50: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10aa54:
    // 0x10aa54: 0x24a5e2f0  addiu       $a1, $a1, -0x1D10
    ctx->pc = 0x10aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959856));
label_10aa58:
    // 0x10aa58: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x10aa58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_10aa5c:
    // 0x10aa5c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x10aa5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10aa60:
    // 0x10aa60: 0xc057118  jal         func_15C460
label_10aa64:
    if (ctx->pc == 0x10AA64u) {
        ctx->pc = 0x10AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA60u;
        // 0x10aa64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA68u;
        goto label_10aa68;
    }
    ctx->pc = 0x10AA60u;
    SET_GPR_U32(ctx, 31, 0x10AA68u);
    ctx->pc = 0x10AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA60u;
    // 0x10aa64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C460u, 0x10AA60u, 0x10AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA68u;
label_10aa68:
    // 0x10aa68: 0xae622308  sw          $v0, 0x2308($s3)
    ctx->pc = 0x10aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8968), GPR_U32(ctx, 2));
label_10aa6c:
    // 0x10aa6c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x10aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_10aa70:
    // 0x10aa70: 0x8e6301d8  lw          $v1, 0x1D8($s3)
    ctx->pc = 0x10aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
label_10aa74:
    // 0x10aa74: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x10aa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_10aa78:
    // 0x10aa78: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10aa7c:
    // 0x10aa7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10aa7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10aa80:
    // 0x10aa80: 0x9070003f  lbu         $s0, 0x3F($v1)
    ctx->pc = 0x10aa80u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 63)));
label_10aa84:
    // 0x10aa84: 0x24512c00  addiu       $s1, $v0, 0x2C00
    ctx->pc = 0x10aa84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
label_10aa88:
    // 0x10aa88: 0xc0583b8  jal         func_160EE0
label_10aa8c:
    if (ctx->pc == 0x10AA8Cu) {
        ctx->pc = 0x10AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA88u;
        // 0x10aa8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA90u;
        goto label_10aa90;
    }
    ctx->pc = 0x10AA88u;
    SET_GPR_U32(ctx, 31, 0x10AA90u);
    ctx->pc = 0x10AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA88u;
    // 0x10aa8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x10AA88u, 0x10AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA90u;
label_10aa90:
    // 0x10aa90: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x10aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_10aa94:
    // 0x10aa94: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10aa98:
    // 0x10aa98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10aa9c:
    // 0x10aa9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10aaa0:
    // 0x10aaa0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10aaa4:
    // 0x10aaa4: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x10aaa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
label_10aaa8:
    // 0x10aaa8: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
label_10aaac:
    if (ctx->pc == 0x10AAACu) {
        ctx->pc = 0x10AAB0u;
        goto label_10aab0;
    }
    ctx->pc = 0x10AAA8u;
    {
        const bool branch_taken_0x10aaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x10aaa8) {
            ctx->pc = 0x10AAB8u;
            goto label_10aab8;
        }
    }
    ctx->pc = 0x10AAB0u;
label_10aab0:
    // 0x10aab0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10aab4:
    // 0x10aab4: 0xae622300  sw          $v0, 0x2300($s3)
    ctx->pc = 0x10aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8960), GPR_U32(ctx, 2));
label_10aab8:
    // 0x10aab8: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10aabc:
    // 0x10aabc: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x10aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_10aac0:
    // 0x10aac0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x10aac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10aac4:
    // 0x10aac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10aac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10aac8:
    // 0x10aac8: 0x24512c00  addiu       $s1, $v0, 0x2C00
    ctx->pc = 0x10aac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
label_10aacc:
    // 0x10aacc: 0xc0583b8  jal         func_160EE0
label_10aad0:
    if (ctx->pc == 0x10AAD0u) {
        ctx->pc = 0x10AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AACCu;
        // 0x10aad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AAD4u;
        goto label_10aad4;
    }
    ctx->pc = 0x10AACCu;
    SET_GPR_U32(ctx, 31, 0x10AAD4u);
    ctx->pc = 0x10AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AACCu;
    // 0x10aad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x10AACCu, 0x10AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AAD4u;
label_10aad4:
    // 0x10aad4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x10aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_10aad8:
    // 0x10aad8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10aadc:
    // 0x10aadc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10aae0:
    // 0x10aae0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10aae4:
    // 0x10aae4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10aae8:
    // 0x10aae8: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x10aae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
label_10aaec:
    // 0x10aaec: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
label_10aaf0:
    if (ctx->pc == 0x10AAF0u) {
        ctx->pc = 0x10AAF4u;
        goto label_10aaf4;
    }
    ctx->pc = 0x10AAECu;
    {
        const bool branch_taken_0x10aaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x10aaec) {
            ctx->pc = 0x10AAFCu;
            goto label_10aafc;
        }
    }
    ctx->pc = 0x10AAF4u;
label_10aaf4:
    // 0x10aaf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10aaf8:
    // 0x10aaf8: 0xae622304  sw          $v0, 0x2304($s3)
    ctx->pc = 0x10aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8964), GPR_U32(ctx, 2));
label_10aafc:
    // 0x10aafc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ab00:
    // 0x10ab00: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x10ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_10ab04:
    // 0x10ab04: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x10ab04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10ab08:
    // 0x10ab08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10ab08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ab0c:
    // 0x10ab0c: 0x24512c00  addiu       $s1, $v0, 0x2C00
    ctx->pc = 0x10ab0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
label_10ab10:
    // 0x10ab10: 0xc0583b8  jal         func_160EE0
label_10ab14:
    if (ctx->pc == 0x10AB14u) {
        ctx->pc = 0x10AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB10u;
        // 0x10ab14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB18u;
        goto label_10ab18;
    }
    ctx->pc = 0x10AB10u;
    SET_GPR_U32(ctx, 31, 0x10AB18u);
    ctx->pc = 0x10AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB10u;
    // 0x10ab14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EE0u, 0x10AB10u, 0x10AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB18u;
label_10ab18:
    // 0x10ab18: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x10ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_10ab1c:
    // 0x10ab1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10ab20:
    // 0x10ab20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10ab24:
    // 0x10ab24: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10ab28:
    // 0x10ab28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10ab2c:
    // 0x10ab2c: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x10ab2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
label_10ab30:
    // 0x10ab30: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
label_10ab34:
    if (ctx->pc == 0x10AB34u) {
        ctx->pc = 0x10AB38u;
        goto label_10ab38;
    }
    ctx->pc = 0x10AB30u;
    {
        const bool branch_taken_0x10ab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x10ab30) {
            ctx->pc = 0x10AB40u;
            goto label_10ab40;
        }
    }
    ctx->pc = 0x10AB38u;
label_10ab38:
    // 0x10ab38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ab3c:
    // 0x10ab3c: 0xae622308  sw          $v0, 0x2308($s3)
    ctx->pc = 0x10ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8968), GPR_U32(ctx, 2));
label_10ab40:
    // 0x10ab40: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10ab40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ab44:
    // 0x10ab44: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_10ab48:
    // 0x10ab48: 0x8e6601d8  lw          $a2, 0x1D8($s3)
    ctx->pc = 0x10ab48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
label_10ab4c:
    // 0x10ab4c: 0x24a5e300  addiu       $a1, $a1, -0x1D00
    ctx->pc = 0x10ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959872));
label_10ab50:
    // 0x10ab50: 0xc0570f4  jal         func_15C3D0
label_10ab54:
    if (ctx->pc == 0x10AB54u) {
        ctx->pc = 0x10AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB50u;
        // 0x10ab54: 0x240704b1  addiu       $a3, $zero, 0x4B1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1201));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB58u;
        goto label_10ab58;
    }
    ctx->pc = 0x10AB50u;
    SET_GPR_U32(ctx, 31, 0x10AB58u);
    ctx->pc = 0x10AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB50u;
    // 0x10ab54: 0x240704b1  addiu       $a3, $zero, 0x4B1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C3D0u, 0x10AB50u, 0x10AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB58u;
label_10ab58:
    // 0x10ab58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10ab58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ab5c:
    // 0x10ab5c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x10ab5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ab60:
    // 0x10ab60: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x10ab60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10ab64:
    // 0x10ab64: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_10ab68:
    if (ctx->pc == 0x10AB68u) {
        ctx->pc = 0x10AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB64u;
        // 0x10ab68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB6Cu;
        goto label_10ab6c;
    }
    ctx->pc = 0x10AB64u;
    {
        const bool branch_taken_0x10ab64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB64u;
        // 0x10ab68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab64) {
            ctx->pc = 0x10ABA8u;
            goto label_10aba8;
        }
    }
    ctx->pc = 0x10AB6Cu;
label_10ab6c:
    // 0x10ab6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10ab6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ab70:
    // 0x10ab70: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10ab74:
    // 0x10ab74: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_10ab78:
    // 0x10ab78: 0x8e6601d8  lw          $a2, 0x1D8($s3)
    ctx->pc = 0x10ab78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 472)));
label_10ab7c:
    // 0x10ab7c: 0x24a5e300  addiu       $a1, $a1, -0x1D00
    ctx->pc = 0x10ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959872));
label_10ab80:
    // 0x10ab80: 0xc0570b4  jal         func_15C2D0
label_10ab84:
    if (ctx->pc == 0x10AB84u) {
        ctx->pc = 0x10AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB80u;
        // 0x10ab84: 0x240804b1  addiu       $t0, $zero, 0x4B1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1201));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB88u;
        goto label_10ab88;
    }
    ctx->pc = 0x10AB80u;
    SET_GPR_U32(ctx, 31, 0x10AB88u);
    ctx->pc = 0x10AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB80u;
    // 0x10ab84: 0x240804b1  addiu       $t0, $zero, 0x4B1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C2D0u, 0x10AB80u, 0x10AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB88u;
label_10ab88:
    // 0x10ab88: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x10ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_10ab8c:
    // 0x10ab8c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10ab8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10ab90:
    // 0x10ab90: 0xa462230c  sh          $v0, 0x230C($v1)
    ctx->pc = 0x10ab90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8972), (uint16_t)GPR_U32(ctx, 2));
label_10ab94:
    // 0x10ab94: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x10ab94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_10ab98:
    // 0x10ab98: 0x8463230c  lh          $v1, 0x230C($v1)
    ctx->pc = 0x10ab98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8972)));
label_10ab9c:
    // 0x10ab9c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x10ab9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_10aba0:
    // 0x10aba0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_10aba4:
    if (ctx->pc == 0x10ABA4u) {
        ctx->pc = 0x10ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABA0u;
        // 0x10aba4: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABA8u;
        goto label_10aba8;
    }
    ctx->pc = 0x10ABA0u;
    {
        const bool branch_taken_0x10aba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABA0u;
        // 0x10aba4: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aba0) {
            ctx->pc = 0x10AB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ab70;
        }
    }
    ctx->pc = 0x10ABA8u;
label_10aba8:
    // 0x10aba8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x10aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_10abac:
    // 0x10abac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10abacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10abb0:
    // 0x10abb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10abb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10abb4:
    // 0x10abb4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x10abb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10abb8:
    // 0x10abb8: 0x320f809  jalr        $t9
label_10abbc:
    if (ctx->pc == 0x10ABBCu) {
        ctx->pc = 0x10ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB8u;
        // 0x10abbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABC0u;
        goto label_10abc0;
    }
    ctx->pc = 0x10ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10ABC0u);
        ctx->pc = 0x10ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB8u;
        // 0x10abbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ABB8u, 0x10ABC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10ABC0u;
label_10abc0:
    // 0x10abc0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x10abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_10abc4:
    // 0x10abc4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10abc8:
    // 0x10abc8: 0xa064002b  sb          $a0, 0x2B($v1)
    ctx->pc = 0x10abc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 4));
label_10abcc:
    // 0x10abcc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10abccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10abd0:
    // 0x10abd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10abd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10abd4:
    // 0x10abd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10abd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10abd8:
    // 0x10abd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10abd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10abdc:
    // 0x10abdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10abdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10abe0:
    // 0x10abe0: 0x3e00008  jr          $ra
label_10abe4:
    if (ctx->pc == 0x10ABE4u) {
        ctx->pc = 0x10ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABE0u;
        // 0x10abe4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABE8u;
        goto label_fallthrough_0x10abe0;
    }
    ctx->pc = 0x10ABE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABE0u;
        // 0x10abe4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ABE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10abe0:
    ctx->pc = 0x10ABE8u;
}
