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

// Function: entry_001e99dc
// Address: 0x1e99dc - 0x1e9a04
void entry_001e99dc_0x1e99dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e99dc_0x1e99dc");
#endif

    ctx->pc = 0x1e99dcu;

label_1e99dc:
    // 0x1e99dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e99dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e99e0:
    // 0x1e99e0: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1e99e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1e99e4:
    // 0x1e99e4: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
label_1e99e8:
    if (ctx->pc == 0x1E99E8u) {
        ctx->pc = 0x1E99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E4u;
        // 0x1e99e8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99ECu;
        goto label_1e99ec;
    }
    ctx->pc = 0x1E99E4u;
    {
        const bool branch_taken_0x1e99e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E4u;
        // 0x1e99e8: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99e4) {
            ctx->pc = 0x1E9BA4u;
            return;
        }
    }
    ctx->pc = 0x1E99ECu;
label_1e99ec:
    // 0x1e99ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e99f0:
    // 0x1e99f0: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x1e99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
label_1e99f4:
    // 0x1e99f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e99f8:
    // 0x1e99f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e99fc:
    // 0x1e99fc: 0x400008  jr          $v0
label_1e9a00:
    if (ctx->pc == 0x1E9A00u) {
        ctx->pc = 0x1E9A04u;
        goto label_fallthrough_0x1e99fc;
    }
    ctx->pc = 0x1E99FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E99FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1e99fc:
    ctx->pc = 0x1E9A04u;
}
