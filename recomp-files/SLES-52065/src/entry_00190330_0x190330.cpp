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

// Function: entry_00190330
// Address: 0x190330 - 0x19035c
void entry_00190330_0x190330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190330_0x190330");
#endif

    switch (ctx->pc) {
        case 0x190344u: goto label_190344;
        case 0x190358u: goto label_190358;
        default: break;
    }

    ctx->pc = 0x190330u;

    // 0x190330: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x190330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x190334: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x190334u;
    {
        const bool branch_taken_0x190334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190334u;
        // 0x190338: 0x24040670  addiu       $a0, $zero, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190334) {
            ctx->pc = 0x190448u;
            return;
        }
    }
    ctx->pc = 0x19033Cu;
    // 0x19033c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x19033Cu;
    SET_GPR_U32(ctx, 31, 0x190344u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x19033Cu, 0x190344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190344u;
label_190344:
    // 0x190344: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190348: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x190348u;
    {
        const bool branch_taken_0x190348 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190348u;
        // 0x19034c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190348) {
            ctx->pc = 0x19035Cu;
            return;
        }
    }
    ctx->pc = 0x190350u;
    // 0x190350: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x190350u;
    SET_GPR_U32(ctx, 31, 0x190358u);
    ctx->pc = 0x190BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190BE0u, 0x190350u, 0x190358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190358u;
label_190358:
    // 0x190358: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x190358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19035cu;
}
