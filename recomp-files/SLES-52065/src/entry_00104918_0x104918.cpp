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

// Function: entry_00104918
// Address: 0x104918 - 0x10493c
void entry_00104918_0x104918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104918_0x104918");
#endif

    switch (ctx->pc) {
        case 0x104920u: goto label_104920;
        case 0x104930u: goto label_104930;
        default: break;
    }

    ctx->pc = 0x104918u;

    // 0x104918: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104918u;
    SET_GPR_U32(ctx, 31, 0x104920u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104918u, 0x104920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104920u;
label_104920:
    // 0x104920: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x104920u;
    {
        const bool branch_taken_0x104920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104920u;
        // 0x104924: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104920) {
            ctx->pc = 0x10493Cu;
            return;
        }
    }
    ctx->pc = 0x104928u;
    // 0x104928: 0xc056360  jal         func_158D80
    ctx->pc = 0x104928u;
    SET_GPR_U32(ctx, 31, 0x104930u);
    ctx->pc = 0x10492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104928u;
    // 0x10492c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x104928u, 0x104930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104930u;
label_104930:
    // 0x104930: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104934: 0x2442b0c0  addiu       $v0, $v0, -0x4F40
    ctx->pc = 0x104934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947008));
    // 0x104938: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10493cu;
}
