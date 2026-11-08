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

// Function: entry_00104c60
// Address: 0x104c60 - 0x104c9c
void entry_00104c60_0x104c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104c60_0x104c60");
#endif

    switch (ctx->pc) {
        case 0x104c68u: goto label_104c68;
        case 0x104c78u: goto label_104c78;
        default: break;
    }

    ctx->pc = 0x104c60u;

    // 0x104c60: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104C60u;
    SET_GPR_U32(ctx, 31, 0x104C68u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104C60u, 0x104C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C68u;
label_104c68:
    // 0x104c68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104C68u;
    {
        const bool branch_taken_0x104c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C68u;
        // 0x104c6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c68) {
            ctx->pc = 0x104C9Cu;
            return;
        }
    }
    ctx->pc = 0x104C70u;
    // 0x104c70: 0xc041860  jal         func_106180
    ctx->pc = 0x104C70u;
    SET_GPR_U32(ctx, 31, 0x104C78u);
    ctx->pc = 0x104C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C70u;
    // 0x104c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106180u, 0x104C70u, 0x104C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C78u;
label_104c78:
    // 0x104c78: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104c7c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104c80: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x104c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x104c84: 0x246398f0  addiu       $v1, $v1, -0x6710
    ctx->pc = 0x104c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940912));
    // 0x104c88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104c8c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104c90: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104c94: 0x24429950  addiu       $v0, $v0, -0x66B0
    ctx->pc = 0x104c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941008));
    // 0x104c98: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104c9cu;
}
