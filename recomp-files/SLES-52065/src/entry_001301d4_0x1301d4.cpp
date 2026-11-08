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

// Function: entry_001301d4
// Address: 0x1301d4 - 0x130210
void entry_001301d4_0x1301d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001301d4_0x1301d4");
#endif

    switch (ctx->pc) {
        case 0x1301f0u: goto label_1301f0;
        case 0x130204u: goto label_130204;
        default: break;
    }

    ctx->pc = 0x1301d4u;

    // 0x1301d4: 0x8f90858c  lw          $s0, -0x7A74($gp)
    ctx->pc = 0x1301d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    // 0x1301d8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1301D8u;
    {
        const bool branch_taken_0x1301d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1301d8) {
            ctx->pc = 0x13021Cu;
            return;
        }
    }
    ctx->pc = 0x1301E0u;
    // 0x1301e0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1301E0u;
    {
        const bool branch_taken_0x1301e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301E0u;
        // 0x1301e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301e0) {
            ctx->pc = 0x130214u;
            return;
        }
    }
    ctx->pc = 0x1301E8u;
    // 0x1301e8: 0xc04c0a0  jal         func_130280
    ctx->pc = 0x1301E8u;
    SET_GPR_U32(ctx, 31, 0x1301F0u);
    ctx->pc = 0x1301ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301E8u;
    // 0x1301ec: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130280u, 0x1301E8u, 0x1301F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301F0u;
label_1301f0:
    // 0x1301f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1301f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1301f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1301F4u;
    {
        const bool branch_taken_0x1301f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1301F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301F4u;
        // 0x1301f8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301f4) {
            ctx->pc = 0x130210u;
            return;
        }
    }
    ctx->pc = 0x1301FCu;
    // 0x1301fc: 0xc04c0a0  jal         func_130280
    ctx->pc = 0x1301FCu;
    SET_GPR_U32(ctx, 31, 0x130204u);
    ctx->pc = 0x130280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130280u, 0x1301FCu, 0x130204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130204u;
label_130204:
    // 0x130204: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x130204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x130208: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130208u;
    SET_GPR_U32(ctx, 31, 0x130210u);
    ctx->pc = 0x13020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130208u;
    // 0x13020c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130E10u, 0x130208u, 0x130210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130210u;
}
