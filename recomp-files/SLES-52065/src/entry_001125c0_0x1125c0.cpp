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

// Function: entry_001125c0
// Address: 0x1125c0 - 0x1125e8
void entry_001125c0_0x1125c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001125c0_0x1125c0");
#endif

    ctx->pc = 0x1125c0u;

label_1125c0:
    // 0x1125c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1125c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1125c4:
    // 0x1125c4: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x1125c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1125c8:
    // 0x1125c8: 0x10200182  beqz        $at, . + 4 + (0x182 << 2)
label_1125cc:
    if (ctx->pc == 0x1125CCu) {
        ctx->pc = 0x1125CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125C8u;
        // 0x1125cc: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1125D0u;
        goto label_1125d0;
    }
    ctx->pc = 0x1125C8u;
    {
        const bool branch_taken_0x1125c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125C8u;
        // 0x1125cc: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125c8) {
            ctx->pc = 0x112BD4u;
            return;
        }
    }
    ctx->pc = 0x1125D0u;
label_1125d0:
    // 0x1125d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1125d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1125d4:
    // 0x1125d4: 0x2463e470  addiu       $v1, $v1, -0x1B90
    ctx->pc = 0x1125d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960240));
label_1125d8:
    // 0x1125d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1125d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1125dc:
    // 0x1125dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1125dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1125e0:
    // 0x1125e0: 0x400008  jr          $v0
label_1125e4:
    if (ctx->pc == 0x1125E4u) {
        ctx->pc = 0x1125E8u;
        goto label_fallthrough_0x1125e0;
    }
    ctx->pc = 0x1125E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1125E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1125e0:
    ctx->pc = 0x1125E8u;
}
