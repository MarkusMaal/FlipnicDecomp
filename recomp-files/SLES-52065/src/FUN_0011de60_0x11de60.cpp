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

// Function: FUN_0011de60
// Address: 0x11de60 - 0x11e0a4
void FUN_0011de60_0x11de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011de60_0x11de60");
#endif

    switch (ctx->pc) {
        case 0x11de98u: goto label_11de98;
        case 0x11dea4u: goto label_11dea4;
        case 0x11ded4u: goto label_11ded4;
        case 0x11df0cu: goto label_11df0c;
        case 0x11df28u: goto label_11df28;
        case 0x11df54u: goto label_11df54;
        case 0x11df64u: goto label_11df64;
        case 0x11df80u: goto label_11df80;
        case 0x11dfa0u: goto label_11dfa0;
        case 0x11dfacu: goto label_11dfac;
        case 0x11dfccu: goto label_11dfcc;
        case 0x11dfd8u: goto label_11dfd8;
        case 0x11dff4u: goto label_11dff4;
        case 0x11e010u: goto label_11e010;
        case 0x11e030u: goto label_11e030;
        case 0x11e078u: goto label_11e078;
        default: break;
    }

    ctx->pc = 0x11de60u;

    // 0x11de60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11de60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11de64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11de68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11de6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11de70: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11de70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11de78: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11de78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11de80: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11de80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11de84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11de88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11de88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de8c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x11de8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de90: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11DE90u;
    SET_GPR_U32(ctx, 31, 0x11DE98u);
    ctx->pc = 0x11DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE90u;
    // 0x11de94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11DE90u, 0x11DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE98u;
label_11de98:
    // 0x11de98: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11de98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11de9c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DE9Cu;
    SET_GPR_U32(ctx, 31, 0x11DEA4u);
    ctx->pc = 0x11DEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE9Cu;
    // 0x11dea0: 0x240504c0  addiu       $a1, $zero, 0x4C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DE9Cu, 0x11DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DEA4u;
label_11dea4:
    // 0x11dea4: 0xac4000cc  sw          $zero, 0xCC($v0)
    ctx->pc = 0x11dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 0));
    // 0x11dea8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x11dea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x11deac: 0xac4000dc  sw          $zero, 0xDC($v0)
    ctx->pc = 0x11deacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 0));
    // 0x11deb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11deb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11deb4: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x11deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x11deb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11deb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11debc: 0xac4000d0  sw          $zero, 0xD0($v0)
    ctx->pc = 0x11debcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    // 0x11dec0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11dec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dec4: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x11dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x11dec8: 0x24c6e838  addiu       $a2, $a2, -0x17C8
    ctx->pc = 0x11dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961208));
    // 0x11decc: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11DECCu;
    SET_GPR_U32(ctx, 31, 0x11DED4u);
    ctx->pc = 0x11DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DECCu;
    // 0x11ded0: 0xac400420  sw          $zero, 0x420($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1056), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11DECCu, 0x11DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DED4u;
label_11ded4:
    // 0x11ded4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11DED4u;
    {
        const bool branch_taken_0x11ded4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DED4u;
        // 0x11ded8: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ded4) {
            ctx->pc = 0x11DF18u;
            goto label_11df18;
        }
    }
    ctx->pc = 0x11DEDCu;
    // 0x11dedc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x11dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11dee0: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DEE0u;
    {
        const bool branch_taken_0x11dee0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEE0u;
        // 0x11dee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dee0) {
            ctx->pc = 0x11DEFCu;
            goto label_11defc;
        }
    }
    ctx->pc = 0x11DEE8u;
    // 0x11dee8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11deec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11deecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11def0: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x11def0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x11def4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x11DEF4u;
    {
        const bool branch_taken_0x11def4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEF4u;
        // 0x11def8: 0xae1100c8  sw          $s1, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11def4) {
            ctx->pc = 0x11E080u;
            goto label_11e080;
        }
    }
    ctx->pc = 0x11DEFCu;
label_11defc:
    // 0x11defc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11defcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11df00: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x11df00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x11df04: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DF04u;
    SET_GPR_U32(ctx, 31, 0x11DF0Cu);
    ctx->pc = 0x11DF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF04u;
    // 0x11df08: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DF04u, 0x11DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF0Cu;
label_11df0c:
    // 0x11df0c: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x11df0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x11df10: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x11DF10u;
    {
        const bool branch_taken_0x11df10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF10u;
        // 0x11df14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df10) {
            ctx->pc = 0x11E080u;
            goto label_11e080;
        }
    }
    ctx->pc = 0x11DF18u;
label_11df18:
    // 0x11df18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11df18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11df1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11df20: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11DF20u;
    SET_GPR_U32(ctx, 31, 0x11DF28u);
    ctx->pc = 0x11DF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF20u;
    // 0x11df24: 0x24c6e840  addiu       $a2, $a2, -0x17C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11DF20u, 0x11DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF28u;
label_11df28:
    // 0x11df28: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x11DF28u;
    {
        const bool branch_taken_0x11df28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF28u;
        // 0x11df2c: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df28) {
            ctx->pc = 0x11DFFCu;
            goto label_11dffc;
        }
    }
    ctx->pc = 0x11DF30u;
    // 0x11df30: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x11df30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11df34: 0x1662000e  bne         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11DF34u;
    {
        const bool branch_taken_0x11df34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF34u;
        // 0x11df38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df34) {
            ctx->pc = 0x11DF70u;
            goto label_11df70;
        }
    }
    ctx->pc = 0x11DF3Cu;
    // 0x11df3c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x11df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11df40: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11df40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11df44: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x11df44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x11df48: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x11df48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x11df4c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DF4Cu;
    SET_GPR_U32(ctx, 31, 0x11DF54u);
    ctx->pc = 0x11DF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF4Cu;
    // 0x11df50: 0xae110094  sw          $s1, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DF4Cu, 0x11DF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF54u;
label_11df54:
    // 0x11df54: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x11df54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x11df58: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11df58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11df5c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DF5Cu;
    SET_GPR_U32(ctx, 31, 0x11DF64u);
    ctx->pc = 0x11DF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF5Cu;
    // 0x11df60: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DF5Cu, 0x11DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF64u;
label_11df64:
    // 0x11df64: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x11df64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x11df68: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x11DF68u;
    {
        const bool branch_taken_0x11df68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF68u;
        // 0x11df6c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df68) {
            ctx->pc = 0x11E080u;
            goto label_11e080;
        }
    }
    ctx->pc = 0x11DF70u;
label_11df70:
    // 0x11df70: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11df70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11df74: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x11df74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x11df78: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DF78u;
    SET_GPR_U32(ctx, 31, 0x11DF80u);
    ctx->pc = 0x11DF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF78u;
    // 0x11df7c: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DF78u, 0x11DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DF80u;
label_11df80:
    // 0x11df80: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x11df80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x11df84: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x11df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x11df88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DF88u;
    {
        const bool branch_taken_0x11df88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF88u;
        // 0x11df8c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df88) {
            ctx->pc = 0x11DFA4u;
            goto label_11dfa4;
        }
    }
    ctx->pc = 0x11DF90u;
    // 0x11df90: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11df90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x11df94: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x11df94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x11df98: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x11DF98u;
    SET_GPR_U32(ctx, 31, 0x11DFA0u);
    ctx->pc = 0x11DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF98u;
    // 0x11df9c: 0x2484e850  addiu       $a0, $a0, -0x17B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x11DF98u, 0x11DFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFA0u;
label_11dfa0:
    // 0x11dfa0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11dfa4:
    // 0x11dfa4: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DFA4u;
    SET_GPR_U32(ctx, 31, 0x11DFACu);
    ctx->pc = 0x11DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFA4u;
    // 0x11dfa8: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DFA4u, 0x11DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFACu;
label_11dfac:
    // 0x11dfac: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x11dfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x11dfb0: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x11dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x11dfb4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DFB4u;
    {
        const bool branch_taken_0x11dfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFB4u;
        // 0x11dfb8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfb4) {
            ctx->pc = 0x11DFD0u;
            goto label_11dfd0;
        }
    }
    ctx->pc = 0x11DFBCu;
    // 0x11dfbc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x11dfc0: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x11dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x11dfc4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x11DFC4u;
    SET_GPR_U32(ctx, 31, 0x11DFCCu);
    ctx->pc = 0x11DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFC4u;
    // 0x11dfc8: 0x2484e890  addiu       $a0, $a0, -0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x11DFC4u, 0x11DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFCCu;
label_11dfcc:
    // 0x11dfcc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11dfd0:
    // 0x11dfd0: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11DFD0u;
    SET_GPR_U32(ctx, 31, 0x11DFD8u);
    ctx->pc = 0x11DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFD0u;
    // 0x11dfd4: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11DFD0u, 0x11DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFD8u;
label_11dfd8:
    // 0x11dfd8: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x11dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x11dfdc: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x11dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x11dfe0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DFE0u;
    {
        const bool branch_taken_0x11dfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFE0u;
        // 0x11dfe4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfe0) {
            ctx->pc = 0x11DFF4u;
            goto label_11dff4;
        }
    }
    ctx->pc = 0x11DFE8u;
    // 0x11dfe8: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x11dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x11dfec: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x11DFECu;
    SET_GPR_U32(ctx, 31, 0x11DFF4u);
    ctx->pc = 0x11DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFECu;
    // 0x11dff0: 0x2484e8d0  addiu       $a0, $a0, -0x1730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x11DFECu, 0x11DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFF4u;
label_11dff4:
    // 0x11dff4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11DFF4u;
    {
        const bool branch_taken_0x11dff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFF4u;
        // 0x11dff8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dff4) {
            ctx->pc = 0x11E080u;
            goto label_11e080;
        }
    }
    ctx->pc = 0x11DFFCu;
label_11dffc:
    // 0x11dffc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e000: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11e000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e004: 0x24c6e910  addiu       $a2, $a2, -0x16F0
    ctx->pc = 0x11e004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961424));
    // 0x11e008: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E008u;
    SET_GPR_U32(ctx, 31, 0x11E010u);
    ctx->pc = 0x11E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E008u;
    // 0x11e00c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E008u, 0x11E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E010u;
label_11e010:
    // 0x11e010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E010u;
    {
        const bool branch_taken_0x11e010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E010u;
        // 0x11e014: 0x3c060022  lui         $a2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e010) {
            ctx->pc = 0x11E020u;
            goto label_11e020;
        }
    }
    ctx->pc = 0x11E018u;
    // 0x11e018: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11E018u;
    {
        const bool branch_taken_0x11e018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E018u;
        // 0x11e01c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e018) {
            ctx->pc = 0x11E040u;
            goto label_11e040;
        }
    }
    ctx->pc = 0x11E020u;
label_11e020:
    // 0x11e020: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11e020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e024: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11e024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e028: 0xc046d90  jal         func_11B640
    ctx->pc = 0x11E028u;
    SET_GPR_U32(ctx, 31, 0x11E030u);
    ctx->pc = 0x11E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E028u;
    // 0x11e02c: 0x24c6e918  addiu       $a2, $a2, -0x16E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B640u, 0x11E028u, 0x11E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E030u;
label_11e030:
    // 0x11e030: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E030u;
    {
        const bool branch_taken_0x11e030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e030) {
            ctx->pc = 0x11E040u;
            goto label_11e040;
        }
    }
    ctx->pc = 0x11E038u;
    // 0x11e038: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11e038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e03c: 0xae120420  sw          $s2, 0x420($s0)
    ctx->pc = 0x11e03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 18));
label_11e040:
    // 0x11e040: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x11E040u;
    {
        const bool branch_taken_0x11e040 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E040u;
        // 0x11e044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e040) {
            ctx->pc = 0x11E080u;
            goto label_11e080;
        }
    }
    ctx->pc = 0x11E048u;
    // 0x11e048: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x11e048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11e04c: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E04Cu;
    {
        const bool branch_taken_0x11e04c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E04Cu;
        // 0x11e050: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e04c) {
            ctx->pc = 0x11E068u;
            goto label_11e068;
        }
    }
    ctx->pc = 0x11E054u;
    // 0x11e054: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11e054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11e058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11e058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e05c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x11e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x11e060: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11E060u;
    {
        const bool branch_taken_0x11e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E060u;
        // 0x11e064: 0xae1100d8  sw          $s1, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e060) {
            ctx->pc = 0x11E080u;
            goto label_11e080;
        }
    }
    ctx->pc = 0x11E068u;
label_11e068:
    // 0x11e068: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11e068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11e06c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x11e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x11e070: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11E070u;
    SET_GPR_U32(ctx, 31, 0x11E078u);
    ctx->pc = 0x11E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E070u;
    // 0x11e074: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11E070u, 0x11E078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E078u;
label_11e078:
    // 0x11e078: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x11e078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x11e07c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11e07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e080:
    // 0x11e080: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11e080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e084: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11e084u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e088: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11e088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e08c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11e08cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11e090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e09c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E09Cu;
        // 0x11e0a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E0A4u;
}
