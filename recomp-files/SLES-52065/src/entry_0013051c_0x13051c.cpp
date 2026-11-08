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

// Function: entry_0013051c
// Address: 0x13051c - 0x130558
void entry_0013051c_0x13051c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013051c_0x13051c");
#endif

    switch (ctx->pc) {
        case 0x130530u: goto label_130530;
        case 0x130544u: goto label_130544;
        case 0x130550u: goto label_130550;
        default: break;
    }

    ctx->pc = 0x13051cu;

    // 0x13051c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x13051cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x130520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x130520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130524: 0x24846280  addiu       $a0, $a0, 0x6280
    ctx->pc = 0x130524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25216));
    // 0x130528: 0xc04c1f0  jal         func_1307C0
    ctx->pc = 0x130528u;
    SET_GPR_U32(ctx, 31, 0x130530u);
    ctx->pc = 0x13052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130528u;
    // 0x13052c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307C0u, 0x130528u, 0x130530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130530u;
label_130530:
    // 0x130530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130534: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x130534u;
    {
        const bool branch_taken_0x130534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130534) {
            ctx->pc = 0x1305C8u;
            return;
        }
    }
    ctx->pc = 0x13053Cu;
    // 0x13053c: 0xc04d988  jal         func_136620
    ctx->pc = 0x13053Cu;
    SET_GPR_U32(ctx, 31, 0x130544u);
    ctx->pc = 0x136620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136620u, 0x13053Cu, 0x130544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130544u;
label_130544:
    // 0x130544: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130548: 0xc04db44  jal         func_136D10
    ctx->pc = 0x130548u;
    SET_GPR_U32(ctx, 31, 0x130550u);
    ctx->pc = 0x13054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130548u;
    // 0x13054c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D10u, 0x130548u, 0x130550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130550u;
label_130550:
    // 0x130550: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x130550u;
    {
        const bool branch_taken_0x130550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130550) {
            ctx->pc = 0x1305C8u;
            return;
        }
    }
    ctx->pc = 0x130558u;
}
