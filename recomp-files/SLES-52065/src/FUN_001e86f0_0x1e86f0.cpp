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

// Function: FUN_001e86f0
// Address: 0x1e86f0 - 0x1e8738
void FUN_001e86f0_0x1e86f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e86f0_0x1e86f0");
#endif

    switch (ctx->pc) {
        case 0x1e870cu: goto label_1e870c;
        default: break;
    }

    ctx->pc = 0x1e86f0u;

    // 0x1e86f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e86f4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1e86f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e86f8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e86f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e86fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1e86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e8700: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1e8700u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8704: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8704u;
    {
        const bool branch_taken_0x1e8704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8704) {
            ctx->pc = 0x1E872Cu;
            goto label_1e872c;
        }
    }
    ctx->pc = 0x1E870Cu;
label_1e870c:
    // 0x1e870c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1e870cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1e8710: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1e8710u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e8714: 0x0  nop
    ctx->pc = 0x1e8714u;
    // NOP
    // 0x1e8718: 0x0  nop
    ctx->pc = 0x1e8718u;
    // NOP
    // 0x1e871c: 0x0  nop
    ctx->pc = 0x1e871cu;
    // NOP
    // 0x1e8720: 0x0  nop
    ctx->pc = 0x1e8720u;
    // NOP
    // 0x1e8724: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E8724u;
    {
        const bool branch_taken_0x1e8724 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8724) {
            ctx->pc = 0x1E870Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e870c;
        }
    }
    ctx->pc = 0x1E872Cu;
label_1e872c:
    // 0x1e872c: 0x0  nop
    ctx->pc = 0x1e872cu;
    // NOP
    // 0x1e8730: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8730u;
        // 0x1e8734: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8738u;
}
