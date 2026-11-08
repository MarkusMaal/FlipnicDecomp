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

// Function: entry_00104990
// Address: 0x104990 - 0x1049c0
void entry_00104990_0x104990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104990_0x104990");
#endif

    switch (ctx->pc) {
        case 0x104998u: goto label_104998;
        case 0x1049a8u: goto label_1049a8;
        default: break;
    }

    ctx->pc = 0x104990u;

    // 0x104990: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104990u;
    SET_GPR_U32(ctx, 31, 0x104998u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104990u, 0x104998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104998u;
label_104998:
    // 0x104998: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104998u;
    {
        const bool branch_taken_0x104998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104998u;
        // 0x10499c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104998) {
            ctx->pc = 0x1049C0u;
            return;
        }
    }
    ctx->pc = 0x1049A0u;
    // 0x1049a0: 0xc056360  jal         func_158D80
    ctx->pc = 0x1049A0u;
    SET_GPR_U32(ctx, 31, 0x1049A8u);
    ctx->pc = 0x1049A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1049A0u;
    // 0x1049a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1049A0u, 0x1049A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1049A8u;
label_1049a8:
    // 0x1049a8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1049a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1049ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1049acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1049b0: 0x2463ae80  addiu       $v1, $v1, -0x5180
    ctx->pc = 0x1049b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946432));
    // 0x1049b4: 0x24429c50  addiu       $v0, $v0, -0x63B0
    ctx->pc = 0x1049b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941776));
    // 0x1049b8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1049b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1049bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1049bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1049c0u;
}
