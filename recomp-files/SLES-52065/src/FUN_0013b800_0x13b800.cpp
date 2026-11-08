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

// Function: FUN_0013b800
// Address: 0x13b800 - 0x13b848
void FUN_0013b800_0x13b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013b800_0x13b800");
#endif

    switch (ctx->pc) {
        case 0x13b824u: goto label_13b824;
        default: break;
    }

    ctx->pc = 0x13b800u;

    // 0x13b800: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x13b800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13b804: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x13b804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13b808: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x13b808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x13b80c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b810: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x13b810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13b814: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x13b814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x13b818: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x13b818u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13b81c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x13B81Cu;
    {
        const bool branch_taken_0x13b81c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b81c) {
            ctx->pc = 0x13B840u;
            goto label_13b840;
        }
    }
    ctx->pc = 0x13B824u;
label_13b824:
    // 0x13b824: 0x2463ffa0  addiu       $v1, $v1, -0x60
    ctx->pc = 0x13b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967200));
    // 0x13b828: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x13b828u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13b82c: 0x0  nop
    ctx->pc = 0x13b82cu;
    // NOP
    // 0x13b830: 0x0  nop
    ctx->pc = 0x13b830u;
    // NOP
    // 0x13b834: 0x0  nop
    ctx->pc = 0x13b834u;
    // NOP
    // 0x13b838: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13B838u;
    {
        const bool branch_taken_0x13b838 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b838) {
            ctx->pc = 0x13B824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b824;
        }
    }
    ctx->pc = 0x13B840u;
label_13b840:
    // 0x13b840: 0x3e00008  jr          $ra
    ctx->pc = 0x13B840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B840u;
        // 0x13b844: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B848u;
}
