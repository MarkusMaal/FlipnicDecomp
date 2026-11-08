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

// Function: entry_001eff8c
// Address: 0x1eff8c - 0x1effe4
void entry_001eff8c_0x1eff8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eff8c_0x1eff8c");
#endif

    switch (ctx->pc) {
        case 0x1eff94u: goto label_1eff94;
        case 0x1effc4u: goto label_1effc4;
        case 0x1effd4u: goto label_1effd4;
        case 0x1effdcu: goto label_1effdc;
        default: break;
    }

    ctx->pc = 0x1eff8cu;

    // 0x1eff8c: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1EFF8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFF94u);
    ctx->pc = 0x1EFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFF8Cu;
    // 0x1eff90: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1EFF8Cu, 0x1EFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF94u;
label_1eff94:
    // 0x1eff94: 0x27d0ee40  addiu       $s0, $fp, -0x11C0
    ctx->pc = 0x1eff94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962752));
    // 0x1eff98: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1eff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1eff9c: 0x2687e200  addiu       $a3, $s4, -0x1E00
    ctx->pc = 0x1eff9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959616));
    // 0x1effa0: 0x2444f900  addiu       $a0, $v0, -0x700
    ctx->pc = 0x1effa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
    // 0x1effa4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1effa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1effa8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1effa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1effac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1effacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effb0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1effb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1effb4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1effb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effb8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1effb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1effbc: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1EFFBCu;
    SET_GPR_U32(ctx, 31, 0x1EFFC4u);
    ctx->pc = 0x1EFFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFBCu;
    // 0x1effc0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1EFFBCu, 0x1EFFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFC4u;
label_1effc4:
    // 0x1effc4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFFC4u;
    {
        const bool branch_taken_0x1effc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFC4u;
        // 0x1effc8: 0x2b01025  or          $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effc4) {
            ctx->pc = 0x1EFFE4u;
            return;
        }
    }
    ctx->pc = 0x1EFFCCu;
    // 0x1effcc: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1EFFCCu;
    SET_GPR_U32(ctx, 31, 0x1EFFD4u);
    ctx->pc = 0x1EFFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFCCu;
    // 0x1effd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1EFFCCu, 0x1EFFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFD4u;
label_1effd4:
    // 0x1effd4: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1EFFD4u;
    SET_GPR_U32(ctx, 31, 0x1EFFDCu);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1EFFD4u, 0x1EFFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFDCu;
label_1effdc:
    // 0x1effdc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1EFFDCu;
    {
        const bool branch_taken_0x1effdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFDCu;
        // 0x1effe0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effdc) {
            ctx->pc = 0x1F0030u;
            return;
        }
    }
    ctx->pc = 0x1EFFE4u;
}
