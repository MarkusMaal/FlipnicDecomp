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

// Function: entry_001beccc
// Address: 0x1beccc - 0x1bed90
void entry_001beccc_0x1beccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001beccc_0x1beccc");
#endif

    switch (ctx->pc) {
        case 0x1bececu: goto label_1becec;
        case 0x1becf4u: goto label_1becf4;
        case 0x1bed08u: goto label_1bed08;
        case 0x1bed10u: goto label_1bed10;
        case 0x1bed24u: goto label_1bed24;
        case 0x1bed40u: goto label_1bed40;
        case 0x1bed54u: goto label_1bed54;
        case 0x1bed64u: goto label_1bed64;
        case 0x1bed74u: goto label_1bed74;
        default: break;
    }

    ctx->pc = 0x1becccu;

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
            return;
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
}
