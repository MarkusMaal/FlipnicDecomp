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

// Function: entry_001047a4
// Address: 0x1047a4 - 0x1047e0
void entry_001047a4_0x1047a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001047a4_0x1047a4");
#endif

    switch (ctx->pc) {
        case 0x1047acu: goto label_1047ac;
        case 0x1047bcu: goto label_1047bc;
        default: break;
    }

    ctx->pc = 0x1047a4u;

    // 0x1047a4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1047A4u;
    SET_GPR_U32(ctx, 31, 0x1047ACu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1047A4u, 0x1047ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047ACu;
label_1047ac:
    // 0x1047ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1047ACu;
    {
        const bool branch_taken_0x1047ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047ACu;
        // 0x1047b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047ac) {
            ctx->pc = 0x1047E0u;
            return;
        }
    }
    ctx->pc = 0x1047B4u;
    // 0x1047b4: 0xc056360  jal         func_158D80
    ctx->pc = 0x1047B4u;
    SET_GPR_U32(ctx, 31, 0x1047BCu);
    ctx->pc = 0x1047B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1047B4u;
    // 0x1047b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D80u, 0x1047B4u, 0x1047BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1047BCu;
label_1047bc:
    // 0x1047bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1047bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1047c0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1047c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1047c4: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x1047c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x1047c8: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x1047c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x1047cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1047ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1047d0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1047d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1047d4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1047d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1047d8: 0x24429ef0  addiu       $v0, $v0, -0x6110
    ctx->pc = 0x1047d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942448));
    // 0x1047dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1047dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1047e0u;
}
