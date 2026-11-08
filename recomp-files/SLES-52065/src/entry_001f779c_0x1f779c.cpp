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

// Function: entry_001f779c
// Address: 0x1f779c - 0x1f77e8
void entry_001f779c_0x1f779c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f779c_0x1f779c");
#endif

    switch (ctx->pc) {
        case 0x1f77ccu: goto label_1f77cc;
        case 0x1f77e0u: goto label_1f77e0;
        default: break;
    }

    ctx->pc = 0x1f779cu;

    // 0x1f779c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f779cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f77a0: 0x2450bb80  addiu       $s0, $v0, -0x4480
    ctx->pc = 0x1f77a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949760));
    // 0x1f77a4: 0x2484ccd0  addiu       $a0, $a0, -0x3330
    ctx->pc = 0x1f77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954192));
    // 0x1f77a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f77ac: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1f77acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f77b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f77b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f77b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f77b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77bc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f77bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f77c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f77c4: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F77C4u;
    SET_GPR_U32(ctx, 31, 0x1F77CCu);
    ctx->pc = 0x1F77C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77C4u;
    // 0x1f77c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F77C4u, 0x1F77CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F77CCu;
label_1f77cc:
    // 0x1f77cc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F77CCu;
    {
        const bool branch_taken_0x1f77cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77CCu;
        // 0x1f77d0: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77cc) {
            ctx->pc = 0x1F77E8u;
            return;
        }
    }
    ctx->pc = 0x1F77D4u;
    // 0x1f77d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f77d8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F77D8u;
    SET_GPR_U32(ctx, 31, 0x1F77E0u);
    ctx->pc = 0x1F77DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77D8u;
    // 0x1f77dc: 0x8c44bb28  lw          $a0, -0x44D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F77D8u, 0x1F77E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F77E0u;
label_1f77e0:
    // 0x1f77e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F77E0u;
    {
        const bool branch_taken_0x1f77e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77E0u;
        // 0x1f77e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77e0) {
            ctx->pc = 0x1F7800u;
            return;
        }
    }
    ctx->pc = 0x1F77E8u;
}
