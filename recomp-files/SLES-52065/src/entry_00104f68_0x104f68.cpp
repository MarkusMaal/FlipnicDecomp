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

// Function: entry_00104f68
// Address: 0x104f68 - 0x104fa4
void entry_00104f68_0x104f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104f68_0x104f68");
#endif

    switch (ctx->pc) {
        case 0x104f70u: goto label_104f70;
        case 0x104f80u: goto label_104f80;
        default: break;
    }

    ctx->pc = 0x104f68u;

    // 0x104f68: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104F68u;
    SET_GPR_U32(ctx, 31, 0x104F70u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104F68u, 0x104F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F70u;
label_104f70:
    // 0x104f70: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104F70u;
    {
        const bool branch_taken_0x104f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F70u;
        // 0x104f74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f70) {
            ctx->pc = 0x104FA4u;
            return;
        }
    }
    ctx->pc = 0x104F78u;
    // 0x104f78: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x104F78u;
    SET_GPR_U32(ctx, 31, 0x104F80u);
    ctx->pc = 0x104F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104F78u;
    // 0x104f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x104F78u, 0x104F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104F80u;
label_104f80:
    // 0x104f80: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104f84: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x104f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x104f88: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x104f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x104f8c: 0x246381d0  addiu       $v1, $v1, -0x7E30
    ctx->pc = 0x104f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934992));
    // 0x104f90: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x104f94: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x104f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x104f98: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x104f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x104f9c: 0x24428230  addiu       $v0, $v0, -0x7DD0
    ctx->pc = 0x104f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935088));
    // 0x104fa0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x104fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x104fa4u;
}
