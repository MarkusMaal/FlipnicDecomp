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

// Function: FUN_001bec50
// Address: 0x1bec50 - 0x1bf134
void FUN_001bec50_0x1bec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bec50_0x1bec50");
#endif

    switch (ctx->pc) {
        case 0x1beca0u: goto label_1beca0;
        case 0x1becacu: goto label_1becac;
        case 0x1becc0u: goto label_1becc0;
        case 0x1becccu: goto label_1beccc;
        case 0x1bececu: goto label_1becec;
        case 0x1becf4u: goto label_1becf4;
        case 0x1bed08u: goto label_1bed08;
        case 0x1bed10u: goto label_1bed10;
        case 0x1bed24u: goto label_1bed24;
        case 0x1bed40u: goto label_1bed40;
        case 0x1bed54u: goto label_1bed54;
        case 0x1bed64u: goto label_1bed64;
        case 0x1bed74u: goto label_1bed74;
        case 0x1bed90u: goto label_1bed90;
        case 0x1beda4u: goto label_1beda4;
        case 0x1bedccu: goto label_1bedcc;
        case 0x1bedf4u: goto label_1bedf4;
        case 0x1bee00u: goto label_1bee00;
        case 0x1bee14u: goto label_1bee14;
        case 0x1bee20u: goto label_1bee20;
        case 0x1bee30u: goto label_1bee30;
        case 0x1beedcu: goto label_1beedc;
        case 0x1bef5cu: goto label_1bef5c;
        case 0x1befb0u: goto label_1befb0;
        case 0x1befccu: goto label_1befcc;
        case 0x1befe8u: goto label_1befe8;
        case 0x1bf004u: goto label_1bf004;
        case 0x1bf020u: goto label_1bf020;
        case 0x1bf03cu: goto label_1bf03c;
        case 0x1bf048u: goto label_1bf048;
        case 0x1bf058u: goto label_1bf058;
        case 0x1bf078u: goto label_1bf078;
        case 0x1bf0a4u: goto label_1bf0a4;
        default: break;
    }

    ctx->pc = 0x1bec50u;

    // 0x1bec50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1bec54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bec54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bec58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1bec5c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1bec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bec60: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1bec60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1bec64: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1bec64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1bec68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1bec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1bec6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1bec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1bec70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1bec70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1bec74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1bec78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bec7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bec80: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1bec80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1bec84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1bec84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bec88: 0x8c23f4e8  lw          $v1, -0xB18($at)
    ctx->pc = 0x1bec88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bec8c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BEC8Cu;
    {
        const bool branch_taken_0x1bec8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BEC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC8Cu;
        // 0x1bec90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec8c) {
            ctx->pc = 0x1BECB4u;
            goto label_1becb4;
        }
    }
    ctx->pc = 0x1BEC94u;
    // 0x1bec94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bec94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bec98: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BEC98u;
    SET_GPR_U32(ctx, 31, 0x1BECA0u);
    ctx->pc = 0x1BEC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC98u;
    // 0x1bec9c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BEC98u, 0x1BECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECA0u;
label_1beca0:
    // 0x1beca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1beca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beca4: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1BECA4u;
    SET_GPR_U32(ctx, 31, 0x1BECACu);
    ctx->pc = 0x1BECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECA4u;
    // 0x1beca8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1BECA4u, 0x1BECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECACu;
label_1becac:
    // 0x1becac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BECACu;
    {
        const bool branch_taken_0x1becac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1becac) {
            ctx->pc = 0x1BECCCu;
            goto label_1beccc;
        }
    }
    ctx->pc = 0x1BECB4u;
label_1becb4:
    // 0x1becb4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1becb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1becb8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BECB8u;
    SET_GPR_U32(ctx, 31, 0x1BECC0u);
    ctx->pc = 0x1BECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECB8u;
    // 0x1becbc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BECB8u, 0x1BECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECC0u;
label_1becc0:
    // 0x1becc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1becc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becc4: 0xc06eb84  jal         func_1BAE10
    ctx->pc = 0x1BECC4u;
    SET_GPR_U32(ctx, 31, 0x1BECCCu);
    ctx->pc = 0x1BECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECC4u;
    // 0x1becc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BAE10u, 0x1BECC4u, 0x1BECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECCCu;
label_1beccc:
    // 0x1beccc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1becccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1becd0: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1becd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1becd4: 0x8c22f4e8  lw          $v0, -0xB18($at)
    ctx->pc = 0x1becd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1becd8: 0x1046002d  beq         $v0, $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BECD8u;
    {
        const bool branch_taken_0x1becd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1becd8) {
            ctx->pc = 0x1BED90u;
            goto label_1bed90;
        }
    }
    ctx->pc = 0x1BECE0u;
    // 0x1bece0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bece0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bece4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BECE4u;
    SET_GPR_U32(ctx, 31, 0x1BECECu);
    ctx->pc = 0x1BECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECE4u;
    // 0x1bece8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BECE4u, 0x1BECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECECu;
label_1becec:
    // 0x1becec: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1BECECu;
    SET_GPR_U32(ctx, 31, 0x1BECF4u);
    ctx->pc = 0x1BECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BECECu;
    // 0x1becf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91B0u, 0x1BECECu, 0x1BECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BECF4u;
label_1becf4:
    // 0x1becf4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1becf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1becf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1becf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1becfc: 0x8c26f4e8  lw          $a2, -0xB18($at)
    ctx->pc = 0x1becfcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bed00: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BED00u;
    SET_GPR_U32(ctx, 31, 0x1BED08u);
    ctx->pc = 0x1BED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED00u;
    // 0x1bed04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BED00u, 0x1BED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED08u;
label_1bed08:
    // 0x1bed08: 0xc06e468  jal         func_1B91A0
    ctx->pc = 0x1BED08u;
    SET_GPR_U32(ctx, 31, 0x1BED10u);
    ctx->pc = 0x1BED0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED08u;
    // 0x1bed0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B91A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B91A0u, 0x1BED08u, 0x1BED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED10u;
label_1bed10:
    // 0x1bed10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bed10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bed14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bed14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed18: 0x8c26f4e8  lw          $a2, -0xB18($at)
    ctx->pc = 0x1bed18u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bed1c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BED1Cu;
    SET_GPR_U32(ctx, 31, 0x1BED24u);
    ctx->pc = 0x1BED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED1Cu;
    // 0x1bed20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BED1Cu, 0x1BED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED24u;
label_1bed24:
    // 0x1bed24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bed28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bed2c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1bed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1bed30: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1bed30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bed34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bed34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bed38: 0xc06e990  jal         func_1BA640
    ctx->pc = 0x1BED38u;
    SET_GPR_U32(ctx, 31, 0x1BED40u);
    ctx->pc = 0x1BED3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED38u;
    // 0x1bed3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA640u, 0x1BED38u, 0x1BED40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED40u;
label_1bed40:
    // 0x1bed40: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bed40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bed44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bed44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed48: 0x8c26f4e8  lw          $a2, -0xB18($at)
    ctx->pc = 0x1bed48u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bed4c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BED4Cu;
    SET_GPR_U32(ctx, 31, 0x1BED54u);
    ctx->pc = 0x1BED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED4Cu;
    // 0x1bed50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BED4Cu, 0x1BED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED54u;
label_1bed54:
    // 0x1bed54: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bed54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bed58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bed58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed5c: 0xc06e738  jal         func_1B9CE0
    ctx->pc = 0x1BED5Cu;
    SET_GPR_U32(ctx, 31, 0x1BED64u);
    ctx->pc = 0x1BED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED5Cu;
    // 0x1bed60: 0x24a530a0  addiu       $a1, $a1, 0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9CE0u, 0x1BED5Cu, 0x1BED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED64u;
label_1bed64:
    // 0x1bed64: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1bed64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bed68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bed68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed6c: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BED6Cu;
    SET_GPR_U32(ctx, 31, 0x1BED74u);
    ctx->pc = 0x1BED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED6Cu;
    // 0x1bed70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BED6Cu, 0x1BED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED74u;
label_1bed74:
    // 0x1bed74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bed78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bed7c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1bed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1bed80: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1bed80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1bed84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bed84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bed88: 0xc06e990  jal         func_1BA640
    ctx->pc = 0x1BED88u;
    SET_GPR_U32(ctx, 31, 0x1BED90u);
    ctx->pc = 0x1BED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED88u;
    // 0x1bed8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA640u, 0x1BED88u, 0x1BED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BED90u;
label_1bed90:
    // 0x1bed90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bed90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bed94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bed94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed98: 0x8c22f4e8  lw          $v0, -0xB18($at)
    ctx->pc = 0x1bed98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bed9c: 0xc06dc70  jal         func_1B71C0
    ctx->pc = 0x1BED9Cu;
    SET_GPR_U32(ctx, 31, 0x1BEDA4u);
    ctx->pc = 0x1BEDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BED9Cu;
    // 0x1beda0: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71C0u, 0x1BED9Cu, 0x1BEDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDA4u;
label_1beda4:
    // 0x1beda4: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1beda4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1beda8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1beda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedac: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1bedacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bedb0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1bedb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bedb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bedb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedb8: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1bedb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bedbc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bedbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bedc0: 0x254af4e8  addiu       $t2, $t2, -0xB18
    ctx->pc = 0x1bedc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294964456));
    // 0x1bedc4: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1BEDC4u;
    SET_GPR_U32(ctx, 31, 0x1BEDCCu);
    ctx->pc = 0x1BEDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDC4u;
    // 0x1bedc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1BEDC4u, 0x1BEDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDCCu;
label_1bedcc:
    // 0x1bedcc: 0x3c0a0037  lui         $t2, 0x37
    ctx->pc = 0x1bedccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)55 << 16));
    // 0x1bedd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bedd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1bedd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bedd8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1bedd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1beddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1beddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bede0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1bede0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bede4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bede4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bede8: 0x254af4e8  addiu       $t2, $t2, -0xB18
    ctx->pc = 0x1bede8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294964456));
    // 0x1bedec: 0xc06dd54  jal         func_1B7550
    ctx->pc = 0x1BEDECu;
    SET_GPR_U32(ctx, 31, 0x1BEDF4u);
    ctx->pc = 0x1BEDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDECu;
    // 0x1bedf0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7550u, 0x1BEDECu, 0x1BEDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEDF4u;
label_1bedf4:
    // 0x1bedf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bedf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedf8: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BEDF8u;
    SET_GPR_U32(ctx, 31, 0x1BEE00u);
    ctx->pc = 0x1BEDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEDF8u;
    // 0x1bedfc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BEDF8u, 0x1BEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE00u;
label_1bee00:
    // 0x1bee00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEE00u;
    {
        const bool branch_taken_0x1bee00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE00u;
        // 0x1bee04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee00) {
            ctx->pc = 0x1BEE18u;
            goto label_1bee18;
        }
    }
    ctx->pc = 0x1BEE08u;
    // 0x1bee08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bee08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee0c: 0xc06fd00  jal         func_1BF400
    ctx->pc = 0x1BEE0Cu;
    SET_GPR_U32(ctx, 31, 0x1BEE14u);
    ctx->pc = 0x1BEE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE0Cu;
    // 0x1bee10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF400u, 0x1BEE0Cu, 0x1BEE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE14u;
label_1bee14:
    // 0x1bee14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bee18:
    // 0x1bee18: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1BEE18u;
    SET_GPR_U32(ctx, 31, 0x1BEE20u);
    ctx->pc = 0x1BEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE18u;
    // 0x1bee1c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1BEE18u, 0x1BEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE20u;
label_1bee20:
    // 0x1bee20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEE20u;
    {
        const bool branch_taken_0x1bee20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE20u;
        // 0x1bee24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee20) {
            ctx->pc = 0x1BEE30u;
            goto label_1bee30;
        }
    }
    ctx->pc = 0x1BEE28u;
    // 0x1bee28: 0xc06fd00  jal         func_1BF400
    ctx->pc = 0x1BEE28u;
    SET_GPR_U32(ctx, 31, 0x1BEE30u);
    ctx->pc = 0x1BEE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE28u;
    // 0x1bee2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF400u, 0x1BEE28u, 0x1BEE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE30u;
label_1bee30:
    // 0x1bee30: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1bee30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1bee34: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x1bee34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x1bee38: 0x24423650  addiu       $v0, $v0, 0x3650
    ctx->pc = 0x1bee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13904));
    // 0x1bee3c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1bee3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bee40: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1bee40u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x213650u));
    // 0x1bee44: 0x24843660  addiu       $a0, $a0, 0x3660
    ctx->pc = 0x1bee44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13920));
    // 0x1bee48: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x1bee48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1bee4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bee4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bee50: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1bee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1bee54: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1bee54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1bee58: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1bee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1bee5c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1bee5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bee60: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1bee60u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x213660u));
    // 0x1bee64: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1bee64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1bee68: 0x8c23f4e8  lw          $v1, -0xB18($at)
    ctx->pc = 0x1bee68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bee6c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1bee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bee70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bee74: 0xc4420070  lwc1        $f2, 0x70($v0)
    ctx->pc = 0x1bee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bee78: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x1bee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bee7c: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x1bee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bee80: 0x460110c1  sub.s       $f3, $f2, $f1
    ctx->pc = 0x1bee80u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1bee84: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x1bee84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1bee88: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x1bee88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bee8c: 0x0  nop
    ctx->pc = 0x1bee8cu;
    // NOP
    // 0x1bee90: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x1BEE90u;
    {
        const bool branch_taken_0x1bee90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE90u;
        // 0x1bee94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee90) {
            ctx->pc = 0x1BEF38u;
            goto label_1bef38;
        }
    }
    ctx->pc = 0x1BEE98u;
    // 0x1bee98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bee98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bee9c: 0x0  nop
    ctx->pc = 0x1bee9cu;
    // NOP
    // 0x1beea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1beea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1beea4: 0x0  nop
    ctx->pc = 0x1beea4u;
    // NOP
    // 0x1beea8: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x1BEEA8u;
    {
        const bool branch_taken_0x1beea8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEA8u;
        // 0x1beeac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beea8) {
            ctx->pc = 0x1BEF34u;
            goto label_1bef34;
        }
    }
    ctx->pc = 0x1BEEB0u;
    // 0x1beeb0: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BEEB0u;
    {
        const bool branch_taken_0x1beeb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEB0u;
        // 0x1beeb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beeb0) {
            ctx->pc = 0x1BEF34u;
            goto label_1bef34;
        }
    }
    ctx->pc = 0x1BEEB8u;
    // 0x1beeb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1beeb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beebc: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x1beebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x1beec0: 0x3c043a83  lui         $a0, 0x3A83
    ctx->pc = 0x1beec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14979 << 16));
    // 0x1beec4: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x1beec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1beec8: 0x3482126e  ori         $v0, $a0, 0x126E
    ctx->pc = 0x1beec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4718);
    // 0x1beecc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1beeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1beed0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1beed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1beed4: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1beed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1beed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1beed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1beedc:
    // 0x1beedc: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x1beedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1beee0: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x1beee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1beee4: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x1beee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x1beee8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1beee8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1beeec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1beeecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1beef0: 0x0  nop
    ctx->pc = 0x1beef0u;
    // NOP
    // 0x1beef4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEEF4u;
    {
        const bool branch_taken_0x1beef4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEF4u;
        // 0x1beef8: 0xe4410074  swc1        $f1, 0x74($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beef4) {
            ctx->pc = 0x1BEF00u;
            goto label_1bef00;
        }
    }
    ctx->pc = 0x1BEEFCu;
    // 0x1beefc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1beefcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1bef00:
    // 0x1bef00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bef00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bef04: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x1bef04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1bef08: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BEF08u;
    {
        const bool branch_taken_0x1bef08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF08u;
        // 0x1bef0c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef08) {
            ctx->pc = 0x1BEEDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1beedc;
        }
    }
    ctx->pc = 0x1BEF10u;
    // 0x1bef10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bef10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bef14: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1bef14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1bef18: 0x8c23f4e8  lw          $v1, -0xB18($at)
    ctx->pc = 0x1bef18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bef1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1bef1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bef20: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1bef20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1bef24: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1bef24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bef28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bef2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BEF2Cu;
    {
        const bool branch_taken_0x1bef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF2Cu;
        // 0x1bef30: 0xe4430074  swc1        $f3, 0x74($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef2c) {
            ctx->pc = 0x1BEF98u;
            goto label_1bef98;
        }
    }
    ctx->pc = 0x1BEF34u;
label_1bef34:
    // 0x1bef34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bef34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bef38:
    // 0x1bef38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bef38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef3c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x1bef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x1bef40: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x1bef40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x1bef44: 0x34430fd8  ori         $v1, $v0, 0xFD8
    ctx->pc = 0x1bef44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1bef48: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x1bef48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x1bef4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bef4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bef50: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1bef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1bef54: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1bef54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1bef58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bef58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bef5c:
    // 0x1bef5c: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x1bef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1bef60: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x1bef60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bef64: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x1bef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x1bef68: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bef68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bef6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bef6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bef70: 0x0  nop
    ctx->pc = 0x1bef70u;
    // NOP
    // 0x1bef74: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEF74u;
    {
        const bool branch_taken_0x1bef74 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF74u;
        // 0x1bef78: 0xe4410074  swc1        $f1, 0x74($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef74) {
            ctx->pc = 0x1BEF80u;
            goto label_1bef80;
        }
    }
    ctx->pc = 0x1BEF7Cu;
    // 0x1bef7c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1bef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1bef80:
    // 0x1bef80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1bef84: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x1bef84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1bef88: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BEF88u;
    {
        const bool branch_taken_0x1bef88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF88u;
        // 0x1bef8c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef88) {
            ctx->pc = 0x1BEF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bef5c;
        }
    }
    ctx->pc = 0x1BEF90u;
    // 0x1bef90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bef90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bef94: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1bef94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1bef98:
    // 0x1bef98: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1bef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bef9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bef9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befa0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1befa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1befa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1befa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befa8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BEFA8u;
    SET_GPR_U32(ctx, 31, 0x1BEFB0u);
    ctx->pc = 0x1BEFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFA8u;
    // 0x1befac: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BEFA8u, 0x1BEFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFB0u;
label_1befb0:
    // 0x1befb0: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1befb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1befb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1befb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befb8: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1befb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1befbc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1befbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1befc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1befc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1befc4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BEFC4u;
    SET_GPR_U32(ctx, 31, 0x1BEFCCu);
    ctx->pc = 0x1BEFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFC4u;
    // 0x1befc8: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BEFC4u, 0x1BEFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFCCu;
label_1befcc:
    // 0x1befcc: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1befccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1befd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1befd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befd4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1befd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1befd8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1befd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1befdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1befdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befe0: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BEFE0u;
    SET_GPR_U32(ctx, 31, 0x1BEFE8u);
    ctx->pc = 0x1BEFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFE0u;
    // 0x1befe4: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BEFE0u, 0x1BEFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFE8u;
label_1befe8:
    // 0x1befe8: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1befe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1befec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1befecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beff0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1beff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beff4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1beff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1beff8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1beff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beffc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BEFFCu;
    SET_GPR_U32(ctx, 31, 0x1BF004u);
    ctx->pc = 0x1BF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFFCu;
    // 0x1bf000: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BEFFCu, 0x1BF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF004u;
label_1bf004:
    // 0x1bf004: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1bf004u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1bf008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf00c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1bf00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf010: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf014: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bf014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf018: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF018u;
    SET_GPR_U32(ctx, 31, 0x1BF020u);
    ctx->pc = 0x1BF01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF018u;
    // 0x1bf01c: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF018u, 0x1BF020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF020u;
label_1bf020:
    // 0x1bf020: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1bf020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1bf024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf028: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1bf028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf02c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bf02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf030: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1bf030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf034: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF034u;
    SET_GPR_U32(ctx, 31, 0x1BF03Cu);
    ctx->pc = 0x1BF038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF034u;
    // 0x1bf038: 0x46150502  mul.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF034u, 0x1BF03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF03Cu;
label_1bf03c:
    // 0x1bf03c: 0xe45400a8  swc1        $f20, 0xA8($v0)
    ctx->pc = 0x1bf03cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1bf040: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf044: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bf044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf048:
    // 0x1bf048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf050: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1BF050u;
    SET_GPR_U32(ctx, 31, 0x1BF058u);
    ctx->pc = 0x1BF054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF050u;
    // 0x1bf054: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1BF050u, 0x1BF058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF058u;
label_1bf058:
    // 0x1bf058: 0x213a021  addu        $s4, $s0, $s3
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1bf05c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bf05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf060: 0xc681006c  lwc1        $f1, 0x6C($s4)
    ctx->pc = 0x1bf060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf064: 0x2695006c  addiu       $s5, $s4, 0x6C
    ctx->pc = 0x1bf064u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 108));
    // 0x1bf068: 0xc6800074  lwc1        $f0, 0x74($s4)
    ctx->pc = 0x1bf068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf06c: 0x26970074  addiu       $s7, $s4, 0x74
    ctx->pc = 0x1bf06cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 116));
    // 0x1bf070: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1BF070u;
    SET_GPR_U32(ctx, 31, 0x1BF078u);
    ctx->pc = 0x1BF074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF070u;
    // 0x1bf074: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1BF070u, 0x1BF078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF078u;
label_1bf078:
    // 0x1bf078: 0xc6820068  lwc1        $f2, 0x68($s4)
    ctx->pc = 0x1bf078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bf07c: 0x3c024278  lui         $v0, 0x4278
    ctx->pc = 0x1bf07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17016 << 16));
    // 0x1bf080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bf080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf084: 0x26960068  addiu       $s6, $s4, 0x68
    ctx->pc = 0x1bf084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
    // 0x1bf088: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bf088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bf08c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bf08cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bf090: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1bf090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1bf094: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x1bf094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf098: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x1bf098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf09c: 0xc07eea2  jal         func_1FBA88
    ctx->pc = 0x1BF09Cu;
    SET_GPR_U32(ctx, 31, 0x1BF0A4u);
    ctx->pc = 0x1BF0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF09Cu;
    // 0x1bf0a0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBA88u, 0x1BF09Cu, 0x1BF0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0A4u;
label_1bf0a4:
    // 0x1bf0a4: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x1bf0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf0a8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1bf0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1bf0ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1bf0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf0b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bf0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bf0b4: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1bf0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1bf0b8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1bf0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x1bf0bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1bf0bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bf0c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bf0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bf0c4: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x1bf0c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1bf0c8: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1bf0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1bf0cc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1bf0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf0d0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1bf0d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1bf0d4: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1bf0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1bf0d8: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1bf0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf0dc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1bf0dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1bf0e0: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1bf0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1bf0e4: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1bf0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf0e8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1bf0e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1bf0ec: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x1bf0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1bf0f0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1bf0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf0f4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1bf0f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1bf0f8: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1BF0F8u;
    {
        const bool branch_taken_0x1bf0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0F8u;
        // 0x1bf0fc: 0xe6400034  swc1        $f0, 0x34($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0f8) {
            ctx->pc = 0x1BF048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf048;
        }
    }
    ctx->pc = 0x1BF100u;
    // 0x1bf100: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1bf100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bf104: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1bf104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bf108: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1bf108u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bf10c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1bf10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bf110: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1bf110u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf114: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1bf114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bf118: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1bf118u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf11c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1bf11cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf120: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1bf120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf124: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bf124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf128: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bf128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf12c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF12Cu;
        // 0x1bf130: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF134u;
}
