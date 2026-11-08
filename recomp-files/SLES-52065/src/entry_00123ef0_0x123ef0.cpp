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

// Function: entry_00123ef0
// Address: 0x123ef0 - 0x123f14
void entry_00123ef0_0x123ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123ef0_0x123ef0");
#endif

    ctx->pc = 0x123ef0u;

label_123ef0:
    // 0x123ef0: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x123ef0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_123ef4:
    // 0x123ef4: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
label_123ef8:
    if (ctx->pc == 0x123EF8u) {
        ctx->pc = 0x123EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EF4u;
        // 0x123ef8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123EFCu;
        goto label_123efc;
    }
    ctx->pc = 0x123EF4u;
    {
        const bool branch_taken_0x123ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EF4u;
        // 0x123ef8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ef4) {
            ctx->pc = 0x124014u;
            return;
        }
    }
    ctx->pc = 0x123EFCu;
label_123efc:
    // 0x123efc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x123efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_123f00:
    // 0x123f00: 0x2463ea90  addiu       $v1, $v1, -0x1570
    ctx->pc = 0x123f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961808));
label_123f04:
    // 0x123f04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123f08:
    // 0x123f08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x123f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_123f0c:
    // 0x123f0c: 0x400008  jr          $v0
label_123f10:
    if (ctx->pc == 0x123F10u) {
        ctx->pc = 0x123F14u;
        goto label_fallthrough_0x123f0c;
    }
    ctx->pc = 0x123F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123F0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x123f0c:
    ctx->pc = 0x123F14u;
}
