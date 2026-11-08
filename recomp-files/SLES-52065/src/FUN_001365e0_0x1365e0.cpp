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

// Function: FUN_001365e0
// Address: 0x1365e0 - 0x136620
void FUN_001365e0_0x1365e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001365e0_0x1365e0");
#endif

    switch (ctx->pc) {
        case 0x1365fcu: goto label_1365fc;
        default: break;
    }

    ctx->pc = 0x1365e0u;

    // 0x1365e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1365e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1365e4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1365e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1365e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1365e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1365ec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1365ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1365f0: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1365f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1365f4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1365F4u;
    {
        const bool branch_taken_0x1365f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1365f4) {
            ctx->pc = 0x136618u;
            goto label_136618;
        }
    }
    ctx->pc = 0x1365FCu;
label_1365fc:
    // 0x1365fc: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1365fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x136600: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x136600u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x136604: 0x0  nop
    ctx->pc = 0x136604u;
    // NOP
    // 0x136608: 0x0  nop
    ctx->pc = 0x136608u;
    // NOP
    // 0x13660c: 0x0  nop
    ctx->pc = 0x13660cu;
    // NOP
    // 0x136610: 0x1420fffa  bnez        $at, . + 4 + (-0x6 << 2)
    ctx->pc = 0x136610u;
    {
        const bool branch_taken_0x136610 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x136610) {
            ctx->pc = 0x1365FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1365fc;
        }
    }
    ctx->pc = 0x136618u;
label_136618:
    // 0x136618: 0x3e00008  jr          $ra
    ctx->pc = 0x136618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136618u;
        // 0x13661c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136620u;
}
