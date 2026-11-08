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

// Function: entry_001af69c
// Address: 0x1af69c - 0x1af6c4
void entry_001af69c_0x1af69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af69c_0x1af69c");
#endif

    switch (ctx->pc) {
        case 0x1af6b4u: goto label_1af6b4;
        default: break;
    }

    ctx->pc = 0x1af69cu;

label_1af69c:
    // 0x1af69c: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x1af69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1af6a0:
    // 0x1af6a0: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1af6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
label_1af6a4:
    // 0x1af6a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1af6a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af6a8:
    // 0x1af6a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1af6a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1af6ac:
    // 0x1af6ac: 0x320f809  jalr        $t9
label_1af6b0:
    if (ctx->pc == 0x1AF6B0u) {
        ctx->pc = 0x1AF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6ACu;
        // 0x1af6b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6B4u;
        goto label_1af6b4;
    }
    ctx->pc = 0x1AF6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AF6B4u);
        ctx->pc = 0x1AF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6ACu;
        // 0x1af6b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF6ACu, 0x1AF6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF6B4u;
label_1af6b4:
    // 0x1af6b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1af6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1af6b8:
    // 0x1af6b8: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1af6b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1af6bc:
    // 0x1af6bc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1af6c0:
    if (ctx->pc == 0x1AF6C0u) {
        ctx->pc = 0x1AF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6BCu;
        // 0x1af6c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6C4u;
        goto label_fallthrough_0x1af6bc;
    }
    ctx->pc = 0x1AF6BCu;
    {
        const bool branch_taken_0x1af6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6BCu;
        // 0x1af6c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6bc) {
            ctx->pc = 0x1AF69Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af69c;
        }
    }
label_fallthrough_0x1af6bc:
    ctx->pc = 0x1AF6C4u;
}
