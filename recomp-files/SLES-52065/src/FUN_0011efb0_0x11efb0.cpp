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

// Function: FUN_0011efb0
// Address: 0x11efb0 - 0x11f288
void FUN_0011efb0_0x11efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011efb0_0x11efb0");
#endif

    switch (ctx->pc) {
        case 0x11efb0u: goto label_11efb0;
        case 0x11efb4u: goto label_11efb4;
        case 0x11efb8u: goto label_11efb8;
        case 0x11efbcu: goto label_11efbc;
        case 0x11efc0u: goto label_11efc0;
        case 0x11efc4u: goto label_11efc4;
        case 0x11efc8u: goto label_11efc8;
        case 0x11efccu: goto label_11efcc;
        case 0x11efd0u: goto label_11efd0;
        case 0x11efd4u: goto label_11efd4;
        case 0x11efd8u: goto label_11efd8;
        case 0x11efdcu: goto label_11efdc;
        case 0x11efe0u: goto label_11efe0;
        case 0x11efe4u: goto label_11efe4;
        case 0x11efe8u: goto label_11efe8;
        case 0x11efecu: goto label_11efec;
        case 0x11eff0u: goto label_11eff0;
        case 0x11eff4u: goto label_11eff4;
        case 0x11eff8u: goto label_11eff8;
        case 0x11effcu: goto label_11effc;
        case 0x11f000u: goto label_11f000;
        case 0x11f004u: goto label_11f004;
        case 0x11f008u: goto label_11f008;
        case 0x11f00cu: goto label_11f00c;
        case 0x11f010u: goto label_11f010;
        case 0x11f014u: goto label_11f014;
        case 0x11f018u: goto label_11f018;
        case 0x11f01cu: goto label_11f01c;
        case 0x11f020u: goto label_11f020;
        case 0x11f024u: goto label_11f024;
        case 0x11f028u: goto label_11f028;
        case 0x11f02cu: goto label_11f02c;
        case 0x11f030u: goto label_11f030;
        case 0x11f034u: goto label_11f034;
        case 0x11f038u: goto label_11f038;
        case 0x11f03cu: goto label_11f03c;
        case 0x11f040u: goto label_11f040;
        case 0x11f044u: goto label_11f044;
        case 0x11f048u: goto label_11f048;
        case 0x11f04cu: goto label_11f04c;
        case 0x11f050u: goto label_11f050;
        case 0x11f054u: goto label_11f054;
        case 0x11f058u: goto label_11f058;
        case 0x11f05cu: goto label_11f05c;
        case 0x11f060u: goto label_11f060;
        case 0x11f064u: goto label_11f064;
        case 0x11f068u: goto label_11f068;
        case 0x11f06cu: goto label_11f06c;
        case 0x11f070u: goto label_11f070;
        case 0x11f074u: goto label_11f074;
        case 0x11f078u: goto label_11f078;
        case 0x11f07cu: goto label_11f07c;
        case 0x11f080u: goto label_11f080;
        case 0x11f084u: goto label_11f084;
        case 0x11f088u: goto label_11f088;
        case 0x11f08cu: goto label_11f08c;
        case 0x11f090u: goto label_11f090;
        case 0x11f094u: goto label_11f094;
        case 0x11f098u: goto label_11f098;
        case 0x11f09cu: goto label_11f09c;
        case 0x11f0a0u: goto label_11f0a0;
        case 0x11f0a4u: goto label_11f0a4;
        case 0x11f0a8u: goto label_11f0a8;
        case 0x11f0acu: goto label_11f0ac;
        case 0x11f0b0u: goto label_11f0b0;
        case 0x11f0b4u: goto label_11f0b4;
        case 0x11f0b8u: goto label_11f0b8;
        case 0x11f0bcu: goto label_11f0bc;
        case 0x11f0c0u: goto label_11f0c0;
        case 0x11f0c4u: goto label_11f0c4;
        case 0x11f0c8u: goto label_11f0c8;
        case 0x11f0ccu: goto label_11f0cc;
        case 0x11f0d0u: goto label_11f0d0;
        case 0x11f0d4u: goto label_11f0d4;
        case 0x11f0d8u: goto label_11f0d8;
        case 0x11f0dcu: goto label_11f0dc;
        case 0x11f0e0u: goto label_11f0e0;
        case 0x11f0e4u: goto label_11f0e4;
        case 0x11f0e8u: goto label_11f0e8;
        case 0x11f0ecu: goto label_11f0ec;
        case 0x11f0f0u: goto label_11f0f0;
        case 0x11f0f4u: goto label_11f0f4;
        case 0x11f0f8u: goto label_11f0f8;
        case 0x11f0fcu: goto label_11f0fc;
        case 0x11f100u: goto label_11f100;
        case 0x11f104u: goto label_11f104;
        case 0x11f108u: goto label_11f108;
        case 0x11f10cu: goto label_11f10c;
        case 0x11f110u: goto label_11f110;
        case 0x11f114u: goto label_11f114;
        case 0x11f118u: goto label_11f118;
        case 0x11f11cu: goto label_11f11c;
        case 0x11f120u: goto label_11f120;
        case 0x11f124u: goto label_11f124;
        case 0x11f128u: goto label_11f128;
        case 0x11f12cu: goto label_11f12c;
        case 0x11f130u: goto label_11f130;
        case 0x11f134u: goto label_11f134;
        case 0x11f138u: goto label_11f138;
        case 0x11f13cu: goto label_11f13c;
        case 0x11f140u: goto label_11f140;
        case 0x11f144u: goto label_11f144;
        case 0x11f148u: goto label_11f148;
        case 0x11f14cu: goto label_11f14c;
        case 0x11f150u: goto label_11f150;
        case 0x11f154u: goto label_11f154;
        case 0x11f158u: goto label_11f158;
        case 0x11f15cu: goto label_11f15c;
        case 0x11f160u: goto label_11f160;
        case 0x11f164u: goto label_11f164;
        case 0x11f168u: goto label_11f168;
        case 0x11f16cu: goto label_11f16c;
        case 0x11f170u: goto label_11f170;
        case 0x11f174u: goto label_11f174;
        case 0x11f178u: goto label_11f178;
        case 0x11f17cu: goto label_11f17c;
        case 0x11f180u: goto label_11f180;
        case 0x11f184u: goto label_11f184;
        case 0x11f188u: goto label_11f188;
        case 0x11f18cu: goto label_11f18c;
        case 0x11f190u: goto label_11f190;
        case 0x11f194u: goto label_11f194;
        case 0x11f198u: goto label_11f198;
        case 0x11f19cu: goto label_11f19c;
        case 0x11f1a0u: goto label_11f1a0;
        case 0x11f1a4u: goto label_11f1a4;
        case 0x11f1a8u: goto label_11f1a8;
        case 0x11f1acu: goto label_11f1ac;
        case 0x11f1b0u: goto label_11f1b0;
        case 0x11f1b4u: goto label_11f1b4;
        case 0x11f1b8u: goto label_11f1b8;
        case 0x11f1bcu: goto label_11f1bc;
        case 0x11f1c0u: goto label_11f1c0;
        case 0x11f1c4u: goto label_11f1c4;
        case 0x11f1c8u: goto label_11f1c8;
        case 0x11f1ccu: goto label_11f1cc;
        case 0x11f1d0u: goto label_11f1d0;
        case 0x11f1d4u: goto label_11f1d4;
        case 0x11f1d8u: goto label_11f1d8;
        case 0x11f1dcu: goto label_11f1dc;
        case 0x11f1e0u: goto label_11f1e0;
        case 0x11f1e4u: goto label_11f1e4;
        case 0x11f1e8u: goto label_11f1e8;
        case 0x11f1ecu: goto label_11f1ec;
        case 0x11f1f0u: goto label_11f1f0;
        case 0x11f1f4u: goto label_11f1f4;
        case 0x11f1f8u: goto label_11f1f8;
        case 0x11f1fcu: goto label_11f1fc;
        case 0x11f200u: goto label_11f200;
        case 0x11f204u: goto label_11f204;
        case 0x11f208u: goto label_11f208;
        case 0x11f20cu: goto label_11f20c;
        case 0x11f210u: goto label_11f210;
        case 0x11f214u: goto label_11f214;
        case 0x11f218u: goto label_11f218;
        case 0x11f21cu: goto label_11f21c;
        case 0x11f220u: goto label_11f220;
        case 0x11f224u: goto label_11f224;
        case 0x11f228u: goto label_11f228;
        case 0x11f22cu: goto label_11f22c;
        case 0x11f230u: goto label_11f230;
        case 0x11f234u: goto label_11f234;
        case 0x11f238u: goto label_11f238;
        case 0x11f23cu: goto label_11f23c;
        case 0x11f240u: goto label_11f240;
        case 0x11f244u: goto label_11f244;
        case 0x11f248u: goto label_11f248;
        case 0x11f24cu: goto label_11f24c;
        case 0x11f250u: goto label_11f250;
        case 0x11f254u: goto label_11f254;
        case 0x11f258u: goto label_11f258;
        case 0x11f25cu: goto label_11f25c;
        case 0x11f260u: goto label_11f260;
        case 0x11f264u: goto label_11f264;
        case 0x11f268u: goto label_11f268;
        case 0x11f26cu: goto label_11f26c;
        case 0x11f270u: goto label_11f270;
        case 0x11f274u: goto label_11f274;
        case 0x11f278u: goto label_11f278;
        case 0x11f27cu: goto label_11f27c;
        case 0x11f280u: goto label_11f280;
        case 0x11f284u: goto label_11f284;
        default: break;
    }

    ctx->pc = 0x11efb0u;

label_11efb0:
    // 0x11efb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_11efb4:
    // 0x11efb4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_11efb8:
    // 0x11efb8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x11efb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_11efbc:
    // 0x11efbc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_11efc0:
    // 0x11efc0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x11efc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_11efc4:
    // 0x11efc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11efc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_11efc8:
    // 0x11efc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11efc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11efcc:
    // 0x11efcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11efccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11efd0:
    // 0x11efd0: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x11efd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_11efd4:
    // 0x11efd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11efd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11efd8:
    // 0x11efd8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11efd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11efdc:
    // 0x11efdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11efe0:
    // 0x11efe0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11efe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11efe4:
    // 0x11efe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11efe8:
    // 0x11efe8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x11efe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11efec:
    // 0x11efec: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x11efecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_11eff0:
    // 0x11eff0: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x11eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_11eff4:
    // 0x11eff4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11eff8:
    // 0x11eff8: 0x10620097  beq         $v1, $v0, . + 4 + (0x97 << 2)
label_11effc:
    if (ctx->pc == 0x11EFFCu) {
        ctx->pc = 0x11EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFF8u;
        // 0x11effc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F000u;
        goto label_11f000;
    }
    ctx->pc = 0x11EFF8u;
    {
        const bool branch_taken_0x11eff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFF8u;
        // 0x11effc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eff8) {
            ctx->pc = 0x11F258u;
            goto label_11f258;
        }
    }
    ctx->pc = 0x11F000u;
label_11f000:
    // 0x11f000: 0x10620081  beq         $v1, $v0, . + 4 + (0x81 << 2)
label_11f004:
    if (ctx->pc == 0x11F004u) {
        ctx->pc = 0x11F008u;
        goto label_11f008;
    }
    ctx->pc = 0x11F000u;
    {
        const bool branch_taken_0x11f000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f000) {
            ctx->pc = 0x11F208u;
            goto label_11f208;
        }
    }
    ctx->pc = 0x11F008u;
label_11f008:
    // 0x11f008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f00c:
    // 0x11f00c: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
label_11f010:
    if (ctx->pc == 0x11F010u) {
        ctx->pc = 0x11F014u;
        goto label_11f014;
    }
    ctx->pc = 0x11F00Cu;
    {
        const bool branch_taken_0x11f00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f00c) {
            ctx->pc = 0x11F128u;
            goto label_11f128;
        }
    }
    ctx->pc = 0x11F014u;
label_11f014:
    // 0x11f014: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_11f018:
    if (ctx->pc == 0x11F018u) {
        ctx->pc = 0x11F01Cu;
        goto label_11f01c;
    }
    ctx->pc = 0x11F014u;
    {
        const bool branch_taken_0x11f014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f014) {
            ctx->pc = 0x11F024u;
            goto label_11f024;
        }
    }
    ctx->pc = 0x11F01Cu;
label_11f01c:
    // 0x11f01c: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_11f020:
    if (ctx->pc == 0x11F020u) {
        ctx->pc = 0x11F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F01Cu;
        // 0x11f020: 0x8e630098  lw          $v1, 0x98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F024u;
        goto label_11f024;
    }
    ctx->pc = 0x11F01Cu;
    {
        const bool branch_taken_0x11f01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F01Cu;
        // 0x11f020: 0x8e630098  lw          $v1, 0x98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f01c) {
            ctx->pc = 0x11EFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eff4;
        }
    }
    ctx->pc = 0x11F024u;
label_11f024:
    // 0x11f024: 0x0  nop
    ctx->pc = 0x11f024u;
    // NOP
label_11f028:
    // 0x11f028: 0x2e810010  sltiu       $at, $s4, 0x10
    ctx->pc = 0x11f028u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_11f02c:
    // 0x11f02c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_11f030:
    if (ctx->pc == 0x11F030u) {
        ctx->pc = 0x11F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F02Cu;
        // 0x11f030: 0x2f41023  subu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F034u;
        goto label_11f034;
    }
    ctx->pc = 0x11F02Cu;
    {
        const bool branch_taken_0x11f02c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F02Cu;
        // 0x11f030: 0x2f41023  subu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f02c) {
            ctx->pc = 0x11F03Cu;
            goto label_11f03c;
        }
    }
    ctx->pc = 0x11F034u;
label_11f034:
    // 0x11f034: 0x1000008a  b           . + 4 + (0x8A << 2)
label_11f038:
    if (ctx->pc == 0x11F038u) {
        ctx->pc = 0x11F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F034u;
        // 0x11f038: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F03Cu;
        goto label_11f03c;
    }
    ctx->pc = 0x11F034u;
    {
        const bool branch_taken_0x11f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F034u;
        // 0x11f038: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f034) {
            ctx->pc = 0x11F260u;
            goto label_11f260;
        }
    }
    ctx->pc = 0x11F03Cu;
label_11f03c:
    // 0x11f03c: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
label_11f040:
    if (ctx->pc == 0x11F040u) {
        ctx->pc = 0x11F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F03Cu;
        // 0x11f040: 0x230b021  addu        $s6, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F044u;
        goto label_11f044;
    }
    ctx->pc = 0x11F03Cu;
    {
        const bool branch_taken_0x11f03c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F03Cu;
        // 0x11f040: 0x230b021  addu        $s6, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f03c) {
            ctx->pc = 0x11F0E0u;
            goto label_11f0e0;
        }
    }
    ctx->pc = 0x11F044u;
label_11f044:
    // 0x11f044: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x11f044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_11f048:
    // 0x11f048: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_11f04c:
    if (ctx->pc == 0x11F04Cu) {
        ctx->pc = 0x11F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F048u;
        // 0x11f04c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F050u;
        goto label_11f050;
    }
    ctx->pc = 0x11F048u;
    {
        const bool branch_taken_0x11f048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F048u;
        // 0x11f04c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f048) {
            ctx->pc = 0x11F054u;
            goto label_11f054;
        }
    }
    ctx->pc = 0x11F050u;
label_11f050:
    // 0x11f050: 0x2d21023  subu        $v0, $s6, $s2
    ctx->pc = 0x11f050u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_11f054:
    // 0x11f054: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x11f054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_11f058:
    // 0x11f058: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_11f05c:
    if (ctx->pc == 0x11F05Cu) {
        ctx->pc = 0x11F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F058u;
        // 0x11f05c: 0x24150010  addiu       $s5, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F060u;
        goto label_11f060;
    }
    ctx->pc = 0x11F058u;
    {
        const bool branch_taken_0x11f058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F058u;
        // 0x11f05c: 0x24150010  addiu       $s5, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f058) {
            ctx->pc = 0x11F070u;
            goto label_11f070;
        }
    }
    ctx->pc = 0x11F060u;
label_11f060:
    // 0x11f060: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x11f060u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_11f064:
    // 0x11f064: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_11f068:
    if (ctx->pc == 0x11F068u) {
        ctx->pc = 0x11F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F064u;
        // 0x11f068: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F06Cu;
        goto label_11f06c;
    }
    ctx->pc = 0x11F064u;
    {
        const bool branch_taken_0x11f064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F064u;
        // 0x11f068: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f064) {
            ctx->pc = 0x11F070u;
            goto label_11f070;
        }
    }
    ctx->pc = 0x11F06Cu;
label_11f06c:
    // 0x11f06c: 0x2d2a823  subu        $s5, $s6, $s2
    ctx->pc = 0x11f06cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_11f070:
    // 0x11f070: 0x26640084  addiu       $a0, $s3, 0x84
    ctx->pc = 0x11f070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_11f074:
    // 0x11f074: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11f078:
    // 0x11f078: 0xc07fdfe  jal         func_1FF7F8
label_11f07c:
    if (ctx->pc == 0x11F07Cu) {
        ctx->pc = 0x11F07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F078u;
        // 0x11f07c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F080u;
        goto label_11f080;
    }
    ctx->pc = 0x11F078u;
    SET_GPR_U32(ctx, 31, 0x11F080u);
    ctx->pc = 0x11F07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F078u;
    // 0x11f07c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11F078u, 0x11F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F080u;
label_11f080:
    // 0x11f080: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x11f080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_11f084:
    // 0x11f084: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x11f084u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_11f088:
    // 0x11f088: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_11f08c:
    if (ctx->pc == 0x11F08Cu) {
        ctx->pc = 0x11F090u;
        goto label_11f090;
    }
    ctx->pc = 0x11F088u;
    {
        const bool branch_taken_0x11f088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f088) {
            ctx->pc = 0x11F098u;
            goto label_11f098;
        }
    }
    ctx->pc = 0x11F090u;
label_11f090:
    // 0x11f090: 0x10000003  b           . + 4 + (0x3 << 2)
label_11f094:
    if (ctx->pc == 0x11F094u) {
        ctx->pc = 0x11F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F090u;
        // 0x11f094: 0x2ea10010  sltiu       $at, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F098u;
        goto label_11f098;
    }
    ctx->pc = 0x11F090u;
    {
        const bool branch_taken_0x11f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F090u;
        // 0x11f094: 0x2ea10010  sltiu       $at, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f090) {
            ctx->pc = 0x11F0A0u;
            goto label_11f0a0;
        }
    }
    ctx->pc = 0x11F098u;
label_11f098:
    // 0x11f098: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x11f098u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11f09c:
    // 0x11f09c: 0x2ea10010  sltiu       $at, $s5, 0x10
    ctx->pc = 0x11f09cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_11f0a0:
    // 0x11f0a0: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_11f0a4:
    if (ctx->pc == 0x11F0A4u) {
        ctx->pc = 0x11F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0A0u;
        // 0x11f0a4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0A8u;
        goto label_11f0a8;
    }
    ctx->pc = 0x11F0A0u;
    {
        const bool branch_taken_0x11f0a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0A0u;
        // 0x11f0a4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0a0) {
            ctx->pc = 0x11F0F4u;
            goto label_11f0f4;
        }
    }
    ctx->pc = 0x11F0A8u;
label_11f0a8:
    // 0x11f0a8: 0x26640084  addiu       $a0, $s3, 0x84
    ctx->pc = 0x11f0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_11f0ac:
    // 0x11f0ac: 0x55a823  subu        $s5, $v0, $s5
    ctx->pc = 0x11f0acu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_11f0b0:
    // 0x11f0b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11f0b4:
    // 0x11f0b4: 0xc07fdfe  jal         func_1FF7F8
label_11f0b8:
    if (ctx->pc == 0x11F0B8u) {
        ctx->pc = 0x11F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0B4u;
        // 0x11f0b8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0BCu;
        goto label_11f0bc;
    }
    ctx->pc = 0x11F0B4u;
    SET_GPR_U32(ctx, 31, 0x11F0BCu);
    ctx->pc = 0x11F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F0B4u;
    // 0x11f0b8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11F0B4u, 0x11F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F0BCu;
label_11f0bc:
    // 0x11f0bc: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x11f0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_11f0c0:
    // 0x11f0c0: 0x256082b  sltu        $at, $s2, $s6
    ctx->pc = 0x11f0c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_11f0c4:
    // 0x11f0c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_11f0c8:
    if (ctx->pc == 0x11F0C8u) {
        ctx->pc = 0x11F0CCu;
        goto label_11f0cc;
    }
    ctx->pc = 0x11F0C4u;
    {
        const bool branch_taken_0x11f0c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f0c4) {
            ctx->pc = 0x11F0D4u;
            goto label_11f0d4;
        }
    }
    ctx->pc = 0x11F0CCu;
label_11f0cc:
    // 0x11f0cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_11f0d0:
    if (ctx->pc == 0x11F0D0u) {
        ctx->pc = 0x11F0D4u;
        goto label_11f0d4;
    }
    ctx->pc = 0x11F0CCu;
    {
        const bool branch_taken_0x11f0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f0cc) {
            ctx->pc = 0x11F0D8u;
            goto label_11f0d8;
        }
    }
    ctx->pc = 0x11F0D4u;
label_11f0d4:
    // 0x11f0d4: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x11f0d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11f0d8:
    // 0x11f0d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_11f0dc:
    if (ctx->pc == 0x11F0DCu) {
        ctx->pc = 0x11F0E0u;
        goto label_11f0e0;
    }
    ctx->pc = 0x11F0D8u;
    {
        const bool branch_taken_0x11f0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f0d8) {
            ctx->pc = 0x11F0F4u;
            goto label_11f0f4;
        }
    }
    ctx->pc = 0x11F0E0u;
label_11f0e0:
    // 0x11f0e0: 0x26640084  addiu       $a0, $s3, 0x84
    ctx->pc = 0x11f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_11f0e4:
    // 0x11f0e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11f0e8:
    // 0x11f0e8: 0xc07fdfe  jal         func_1FF7F8
label_11f0ec:
    if (ctx->pc == 0x11F0ECu) {
        ctx->pc = 0x11F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0E8u;
        // 0x11f0ec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F0F0u;
        goto label_11f0f0;
    }
    ctx->pc = 0x11F0E8u;
    SET_GPR_U32(ctx, 31, 0x11F0F0u);
    ctx->pc = 0x11F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F0E8u;
    // 0x11f0ec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x11F0E8u, 0x11F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F0F0u;
label_11f0f0:
    // 0x11f0f0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x11f0f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_11f0f4:
    // 0x11f0f4: 0x0  nop
    ctx->pc = 0x11f0f4u;
    // NOP
label_11f0f8:
    // 0x11f0f8: 0x8e630088  lw          $v1, 0x88($s3)
    ctx->pc = 0x11f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_11f0fc:
    // 0x11f0fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11f100:
    // 0x11f100: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_11f104:
    if (ctx->pc == 0x11F104u) {
        ctx->pc = 0x11F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F100u;
        // 0x11f104: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F108u;
        goto label_11f108;
    }
    ctx->pc = 0x11F100u;
    {
        const bool branch_taken_0x11f100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F100u;
        // 0x11f104: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f100) {
            ctx->pc = 0x11F114u;
            goto label_11f114;
        }
    }
    ctx->pc = 0x11F108u;
label_11f108:
    // 0x11f108: 0x2f41023  subu        $v0, $s7, $s4
    ctx->pc = 0x11f108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_11f10c:
    // 0x11f10c: 0x10000053  b           . + 4 + (0x53 << 2)
label_11f110:
    if (ctx->pc == 0x11F110u) {
        ctx->pc = 0x11F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F10Cu;
        // 0x11f110: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F114u;
        goto label_11f114;
    }
    ctx->pc = 0x11F10Cu;
    {
        const bool branch_taken_0x11f10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F10Cu;
        // 0x11f110: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f10c) {
            ctx->pc = 0x11F25Cu;
            goto label_11f25c;
        }
    }
    ctx->pc = 0x11F114u;
label_11f114:
    // 0x11f114: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x11f114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_11f118:
    // 0x11f118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f11c:
    // 0x11f11c: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x11f11cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
label_11f120:
    // 0x11f120: 0xae630094  sw          $v1, 0x94($s3)
    ctx->pc = 0x11f120u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 3));
label_11f124:
    // 0x11f124: 0xae620098  sw          $v0, 0x98($s3)
    ctx->pc = 0x11f124u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
label_11f128:
    // 0x11f128: 0x8e750094  lw          $s5, 0x94($s3)
    ctx->pc = 0x11f128u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_11f12c:
    // 0x11f12c: 0x295082a  slt         $at, $s4, $s5
    ctx->pc = 0x11f12cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_11f130:
    // 0x11f130: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_11f134:
    if (ctx->pc == 0x11F134u) {
        ctx->pc = 0x11F138u;
        goto label_11f138;
    }
    ctx->pc = 0x11F130u;
    {
        const bool branch_taken_0x11f130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f130) {
            ctx->pc = 0x11F13Cu;
            goto label_11f13c;
        }
    }
    ctx->pc = 0x11F138u;
label_11f138:
    // 0x11f138: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x11f138u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11f13c:
    // 0x11f13c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_11f140:
    if (ctx->pc == 0x11F140u) {
        ctx->pc = 0x11F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F13Cu;
        // 0x11f140: 0x2301821  addu        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F144u;
        goto label_11f144;
    }
    ctx->pc = 0x11F13Cu;
    {
        const bool branch_taken_0x11f13c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F13Cu;
        // 0x11f140: 0x2301821  addu        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f13c) {
            ctx->pc = 0x11F174u;
            goto label_11f174;
        }
    }
    ctx->pc = 0x11F144u;
label_11f144:
    // 0x11f144: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x11f144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_11f148:
    // 0x11f148: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_11f14c:
    if (ctx->pc == 0x11F14Cu) {
        ctx->pc = 0x11F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F148u;
        // 0x11f14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F150u;
        goto label_11f150;
    }
    ctx->pc = 0x11F148u;
    {
        const bool branch_taken_0x11f148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F148u;
        // 0x11f14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f148) {
            ctx->pc = 0x11F154u;
            goto label_11f154;
        }
    }
    ctx->pc = 0x11F150u;
label_11f150:
    // 0x11f150: 0x721023  subu        $v0, $v1, $s2
    ctx->pc = 0x11f150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_11f154:
    // 0x11f154: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x11f154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_11f158:
    // 0x11f158: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_11f15c:
    if (ctx->pc == 0x11F15Cu) {
        ctx->pc = 0x11F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F158u;
        // 0x11f15c: 0x243082b  sltu        $at, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F160u;
        goto label_11f160;
    }
    ctx->pc = 0x11F158u;
    {
        const bool branch_taken_0x11f158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F158u;
        // 0x11f15c: 0x243082b  sltu        $at, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f158) {
            ctx->pc = 0x11F174u;
            goto label_11f174;
        }
    }
    ctx->pc = 0x11F160u;
label_11f160:
    // 0x11f160: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_11f164:
    if (ctx->pc == 0x11F164u) {
        ctx->pc = 0x11F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F160u;
        // 0x11f164: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F168u;
        goto label_11f168;
    }
    ctx->pc = 0x11F160u;
    {
        const bool branch_taken_0x11f160 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F160u;
        // 0x11f164: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f160) {
            ctx->pc = 0x11F16Cu;
            goto label_11f16c;
        }
    }
    ctx->pc = 0x11F168u;
label_11f168:
    // 0x11f168: 0x72a823  subu        $s5, $v1, $s2
    ctx->pc = 0x11f168u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_11f16c:
    // 0x11f16c: 0x10000001  b           . + 4 + (0x1 << 2)
label_11f170:
    if (ctx->pc == 0x11F170u) {
        ctx->pc = 0x11F174u;
        goto label_11f174;
    }
    ctx->pc = 0x11F16Cu;
    {
        const bool branch_taken_0x11f16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f16c) {
            ctx->pc = 0x11F174u;
            goto label_11f174;
        }
    }
    ctx->pc = 0x11F174u;
label_11f174:
    // 0x11f174: 0x0  nop
    ctx->pc = 0x11f174u;
    // NOP
label_11f178:
    // 0x11f178: 0x8e640088  lw          $a0, 0x88($s3)
    ctx->pc = 0x11f178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_11f17c:
    // 0x11f17c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_11f180:
    // 0x11f180: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x11f180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_11f184:
    // 0x11f184: 0x8c680044  lw          $t0, 0x44($v1)
    ctx->pc = 0x11f184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_11f188:
    // 0x11f188: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
label_11f18c:
    if (ctx->pc == 0x11F18Cu) {
        ctx->pc = 0x11F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F188u;
        // 0x11f18c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F190u;
        goto label_11f190;
    }
    ctx->pc = 0x11F188u;
    {
        const bool branch_taken_0x11f188 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F188u;
        // 0x11f18c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f188) {
            ctx->pc = 0x11F1A8u;
            goto label_11f1a8;
        }
    }
    ctx->pc = 0x11F190u;
label_11f190:
    // 0x11f190: 0x1aa00005  blez        $s5, . + 4 + (0x5 << 2)
label_11f194:
    if (ctx->pc == 0x11F194u) {
        ctx->pc = 0x11F198u;
        goto label_11f198;
    }
    ctx->pc = 0x11F190u;
    {
        const bool branch_taken_0x11f190 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x11f190) {
            ctx->pc = 0x11F1A8u;
            goto label_11f1a8;
        }
    }
    ctx->pc = 0x11F198u;
label_11f198:
    // 0x11f198: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x11f198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_11f19c:
    // 0x11f19c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11f19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11f1a0:
    // 0x11f1a0: 0x100f809  jalr        $t0
label_11f1a4:
    if (ctx->pc == 0x11F1A4u) {
        ctx->pc = 0x11F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1A0u;
        // 0x11f1a4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1A8u;
        goto label_11f1a8;
    }
    ctx->pc = 0x11F1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x11F1A8u);
        ctx->pc = 0x11F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1A0u;
        // 0x11f1a4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F1A0u, 0x11F1A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11F1A8u;
label_11f1a8:
    // 0x11f1a8: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x11f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_11f1ac:
    // 0x11f1ac: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x11f1acu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_11f1b0:
    // 0x11f1b0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x11f1b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_11f1b4:
    // 0x11f1b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x11f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11f1b8:
    // 0x11f1b8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_11f1bc:
    if (ctx->pc == 0x11F1BCu) {
        ctx->pc = 0x11F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1B8u;
        // 0x11f1bc: 0xae630094  sw          $v1, 0x94($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1C0u;
        goto label_11f1c0;
    }
    ctx->pc = 0x11F1B8u;
    {
        const bool branch_taken_0x11f1b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1B8u;
        // 0x11f1bc: 0xae630094  sw          $v1, 0x94($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1b8) {
            ctx->pc = 0x11F1DCu;
            goto label_11f1dc;
        }
    }
    ctx->pc = 0x11F1C0u;
label_11f1c0:
    // 0x11f1c0: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x11f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_11f1c4:
    // 0x11f1c4: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x11f1c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_11f1c8:
    // 0x11f1c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_11f1cc:
    if (ctx->pc == 0x11F1CCu) {
        ctx->pc = 0x11F1D0u;
        goto label_11f1d0;
    }
    ctx->pc = 0x11F1C8u;
    {
        const bool branch_taken_0x11f1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f1c8) {
            ctx->pc = 0x11F1D8u;
            goto label_11f1d8;
        }
    }
    ctx->pc = 0x11F1D0u;
label_11f1d0:
    // 0x11f1d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_11f1d4:
    if (ctx->pc == 0x11F1D4u) {
        ctx->pc = 0x11F1D8u;
        goto label_11f1d8;
    }
    ctx->pc = 0x11F1D0u;
    {
        const bool branch_taken_0x11f1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f1d0) {
            ctx->pc = 0x11F1DCu;
            goto label_11f1dc;
        }
    }
    ctx->pc = 0x11F1D8u;
label_11f1d8:
    // 0x11f1d8: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x11f1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11f1dc:
    // 0x11f1dc: 0x0  nop
    ctx->pc = 0x11f1dcu;
    // NOP
label_11f1e0:
    // 0x11f1e0: 0x16a20003  bne         $s5, $v0, . + 4 + (0x3 << 2)
label_11f1e4:
    if (ctx->pc == 0x11F1E4u) {
        ctx->pc = 0x11F1E8u;
        goto label_11f1e8;
    }
    ctx->pc = 0x11F1E0u;
    {
        const bool branch_taken_0x11f1e0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x11f1e0) {
            ctx->pc = 0x11F1F0u;
            goto label_11f1f0;
        }
    }
    ctx->pc = 0x11F1E8u;
label_11f1e8:
    // 0x11f1e8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_11f1ec:
    if (ctx->pc == 0x11F1ECu) {
        ctx->pc = 0x11F1F0u;
        goto label_11f1f0;
    }
    ctx->pc = 0x11F1E8u;
    {
        const bool branch_taken_0x11f1e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f1e8) {
            ctx->pc = 0x11F1F8u;
            goto label_11f1f8;
        }
    }
    ctx->pc = 0x11F1F0u;
label_11f1f0:
    // 0x11f1f0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_11f1f4:
    if (ctx->pc == 0x11F1F4u) {
        ctx->pc = 0x11F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1F0u;
        // 0x11f1f4: 0x2f41023  subu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F1F8u;
        goto label_11f1f8;
    }
    ctx->pc = 0x11F1F0u;
    {
        const bool branch_taken_0x11f1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1F0u;
        // 0x11f1f4: 0x2f41023  subu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1f0) {
            ctx->pc = 0x11F25Cu;
            goto label_11f25c;
        }
    }
    ctx->pc = 0x11F1F8u;
label_11f1f8:
    // 0x11f1f8: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x11f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_11f1fc:
    // 0x11f1fc: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
label_11f200:
    if (ctx->pc == 0x11F200u) {
        ctx->pc = 0x11F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1FCu;
        // 0x11f200: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F204u;
        goto label_11f204;
    }
    ctx->pc = 0x11F1FCu;
    {
        const bool branch_taken_0x11f1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1FCu;
        // 0x11f200: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1fc) {
            ctx->pc = 0x11EFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eff0;
        }
    }
    ctx->pc = 0x11F204u;
label_11f204:
    // 0x11f204: 0xae620098  sw          $v0, 0x98($s3)
    ctx->pc = 0x11f204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
label_11f208:
    // 0x11f208: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x11f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_11f20c:
    // 0x11f20c: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x11f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_11f210:
    // 0x11f210: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11f210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11f214:
    // 0x11f214: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x11f214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11f218:
    // 0x11f218: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_11f21c:
    if (ctx->pc == 0x11F21Cu) {
        ctx->pc = 0x11F220u;
        goto label_11f220;
    }
    ctx->pc = 0x11F218u;
    {
        const bool branch_taken_0x11f218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f218) {
            ctx->pc = 0x11F228u;
            goto label_11f228;
        }
    }
    ctx->pc = 0x11F220u;
label_11f220:
    // 0x11f220: 0x1000000e  b           . + 4 + (0xE << 2)
label_11f224:
    if (ctx->pc == 0x11F224u) {
        ctx->pc = 0x11F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F220u;
        // 0x11f224: 0x2f41023  subu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F228u;
        goto label_11f228;
    }
    ctx->pc = 0x11F220u;
    {
        const bool branch_taken_0x11f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F220u;
        // 0x11f224: 0x2f41023  subu        $v0, $s7, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f220) {
            ctx->pc = 0x11F25Cu;
            goto label_11f25c;
        }
    }
    ctx->pc = 0x11F228u;
label_11f228:
    // 0x11f228: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x11f228u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_11f22c:
    // 0x11f22c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_11f230:
    if (ctx->pc == 0x11F230u) {
        ctx->pc = 0x11F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F22Cu;
        // 0x11f230: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F234u;
        goto label_11f234;
    }
    ctx->pc = 0x11F22Cu;
    {
        const bool branch_taken_0x11f22c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F22Cu;
        // 0x11f230: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f22c) {
            ctx->pc = 0x11F250u;
            goto label_11f250;
        }
    }
    ctx->pc = 0x11F234u;
label_11f234:
    // 0x11f234: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x11f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_11f238:
    // 0x11f238: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x11f238u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11f23c:
    // 0x11f23c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_11f240:
    if (ctx->pc == 0x11F240u) {
        ctx->pc = 0x11F244u;
        goto label_11f244;
    }
    ctx->pc = 0x11F23Cu;
    {
        const bool branch_taken_0x11f23c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f23c) {
            ctx->pc = 0x11F24Cu;
            goto label_11f24c;
        }
    }
    ctx->pc = 0x11F244u;
label_11f244:
    // 0x11f244: 0x10000002  b           . + 4 + (0x2 << 2)
label_11f248:
    if (ctx->pc == 0x11F248u) {
        ctx->pc = 0x11F24Cu;
        goto label_11f24c;
    }
    ctx->pc = 0x11F244u;
    {
        const bool branch_taken_0x11f244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f244) {
            ctx->pc = 0x11F250u;
            goto label_11f250;
        }
    }
    ctx->pc = 0x11F24Cu;
label_11f24c:
    // 0x11f24c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x11f24cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_11f250:
    // 0x11f250: 0x1000ff67  b           . + 4 + (-0x99 << 2)
label_11f254:
    if (ctx->pc == 0x11F254u) {
        ctx->pc = 0x11F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F250u;
        // 0x11f254: 0xae600098  sw          $zero, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F258u;
        goto label_11f258;
    }
    ctx->pc = 0x11F250u;
    {
        const bool branch_taken_0x11f250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F250u;
        // 0x11f254: 0xae600098  sw          $zero, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f250) {
            ctx->pc = 0x11EFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eff0;
        }
    }
    ctx->pc = 0x11F258u;
label_11f258:
    // 0x11f258: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x11f258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_11f25c:
    // 0x11f25c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11f25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_11f260:
    // 0x11f260: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11f260u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11f264:
    // 0x11f264: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11f264u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11f268:
    // 0x11f268: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11f268u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11f26c:
    // 0x11f26c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11f26cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11f270:
    // 0x11f270: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11f270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11f274:
    // 0x11f274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11f274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11f278:
    // 0x11f278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11f278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11f27c:
    // 0x11f27c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11f27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11f280:
    // 0x11f280: 0x3e00008  jr          $ra
label_11f284:
    if (ctx->pc == 0x11F284u) {
        ctx->pc = 0x11F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F280u;
        // 0x11f284: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11F288u;
        goto label_fallthrough_0x11f280;
    }
    ctx->pc = 0x11F280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F280u;
        // 0x11f284: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11f280:
    ctx->pc = 0x11F288u;
}
