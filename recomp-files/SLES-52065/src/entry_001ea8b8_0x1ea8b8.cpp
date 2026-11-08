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

// Function: entry_001ea8b8
// Address: 0x1ea8b8 - 0x1ea8dc
void entry_001ea8b8_0x1ea8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea8b8_0x1ea8b8");
#endif

    ctx->pc = 0x1ea8b8u;

label_1ea8b8:
    // 0x1ea8b8: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1ea8b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1ea8bc:
    // 0x1ea8bc: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
label_1ea8c0:
    if (ctx->pc == 0x1EA8C0u) {
        ctx->pc = 0x1EA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8BCu;
        // 0x1ea8c0: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA8C4u;
        goto label_1ea8c4;
    }
    ctx->pc = 0x1EA8BCu;
    {
        const bool branch_taken_0x1ea8bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8BCu;
        // 0x1ea8c0: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8bc) {
            ctx->pc = 0x1EAAE8u;
            return;
        }
    }
    ctx->pc = 0x1EA8C4u;
label_1ea8c4:
    // 0x1ea8c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ea8c8:
    // 0x1ea8c8: 0x24634140  addiu       $v1, $v1, 0x4140
    ctx->pc = 0x1ea8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16704));
label_1ea8cc:
    // 0x1ea8cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ea8d0:
    // 0x1ea8d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ea8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ea8d4:
    // 0x1ea8d4: 0x400008  jr          $v0
label_1ea8d8:
    if (ctx->pc == 0x1EA8D8u) {
        ctx->pc = 0x1EA8DCu;
        goto label_fallthrough_0x1ea8d4;
    }
    ctx->pc = 0x1EA8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA8D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ea8d4:
    ctx->pc = 0x1EA8DCu;
}
