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

// Function: entry_001f1ed8
// Address: 0x1f1ed8 - 0x1f1f20
void entry_001f1ed8_0x1f1ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1ed8_0x1f1ed8");
#endif

    switch (ctx->pc) {
        case 0x1f1f00u: goto label_1f1f00;
        case 0x1f1f10u: goto label_1f1f10;
        case 0x1f1f18u: goto label_1f1f18;
        default: break;
    }

    ctx->pc = 0x1f1ed8u;

    // 0x1f1ed8: 0x26c4f900  addiu       $a0, $s6, -0x700
    ctx->pc = 0x1f1ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965504));
    // 0x1f1edc: 0x26a7e200  addiu       $a3, $s5, -0x1E00
    ctx->pc = 0x1f1edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959616));
    // 0x1f1ee0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f1ee4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1f1ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1f1ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1eec: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1f1eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f1ef0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f1ef0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ef4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f1ef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f1ef8: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F1EF8u;
    SET_GPR_U32(ctx, 31, 0x1F1F00u);
    ctx->pc = 0x1F1EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1EF8u;
    // 0x1f1efc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F1EF8u, 0x1F1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F00u;
label_1f1f00:
    // 0x1f1f00: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1F00u;
    {
        const bool branch_taken_0x1f1f00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F00u;
        // 0x1f1f04: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f00) {
            ctx->pc = 0x1F1F20u;
            return;
        }
    }
    ctx->pc = 0x1F1F08u;
    // 0x1f1f08: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F1F08u;
    SET_GPR_U32(ctx, 31, 0x1F1F10u);
    ctx->pc = 0x1F1F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F08u;
    // 0x1f1f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F1F08u, 0x1F1F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F10u;
label_1f1f10:
    // 0x1f1f10: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F1F10u;
    SET_GPR_U32(ctx, 31, 0x1F1F18u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F1F10u, 0x1F1F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F18u;
label_1f1f18:
    // 0x1f1f18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F1F18u;
    {
        const bool branch_taken_0x1f1f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F18u;
        // 0x1f1f1c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f18) {
            ctx->pc = 0x1F1F70u;
            return;
        }
    }
    ctx->pc = 0x1F1F20u;
}
