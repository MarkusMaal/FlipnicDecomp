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

// Function: entry_001cd0d4
// Address: 0x1cd0d4 - 0x1cd100
void entry_001cd0d4_0x1cd0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd0d4_0x1cd0d4");
#endif

    ctx->pc = 0x1cd0d4u;

label_1cd0d4:
    // 0x1cd0d4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1cd0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1cd0d8:
    // 0x1cd0d8: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x1cd0d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1cd0dc:
    // 0x1cd0dc: 0x102000bb  beqz        $at, . + 4 + (0xBB << 2)
label_1cd0e0:
    if (ctx->pc == 0x1CD0E0u) {
        ctx->pc = 0x1CD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0DCu;
        // 0x1cd0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0E4u;
        goto label_1cd0e4;
    }
    ctx->pc = 0x1CD0DCu;
    {
        const bool branch_taken_0x1cd0dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0DCu;
        // 0x1cd0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0dc) {
            ctx->pc = 0x1CD3CCu;
            return;
        }
    }
    ctx->pc = 0x1CD0E4u;
label_1cd0e4:
    // 0x1cd0e4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1cd0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_1cd0e8:
    // 0x1cd0e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cd0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cd0ec:
    // 0x1cd0ec: 0x24632cb0  addiu       $v1, $v1, 0x2CB0
    ctx->pc = 0x1cd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11440));
label_1cd0f0:
    // 0x1cd0f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cd0f4:
    // 0x1cd0f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cd0f8:
    // 0x1cd0f8: 0x400008  jr          $v0
label_1cd0fc:
    if (ctx->pc == 0x1CD0FCu) {
        ctx->pc = 0x1CD100u;
        goto label_fallthrough_0x1cd0f8;
    }
    ctx->pc = 0x1CD0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD0F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1cd0f8:
    ctx->pc = 0x1CD100u;
}
