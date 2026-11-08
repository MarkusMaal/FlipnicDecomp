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

// Function: FUN_00127cd0
// Address: 0x127cd0 - 0x127d14
void FUN_00127cd0_0x127cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127cd0_0x127cd0");
#endif

    ctx->pc = 0x127cd0u;

    // 0x127cd0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x127CD0u;
    {
        const bool branch_taken_0x127cd0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x127CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CD0u;
        // 0x127cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127cd0) {
            ctx->pc = 0x127CE0u;
            goto label_127ce0;
        }
    }
    ctx->pc = 0x127CD8u;
    // 0x127cd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x127CD8u;
    {
        const bool branch_taken_0x127cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127cd8) {
            ctx->pc = 0x127D0Cu;
            goto label_127d0c;
        }
    }
    ctx->pc = 0x127CE0u;
label_127ce0:
    // 0x127ce0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x127ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x127ce4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x127ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x127ce8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127CE8u;
    {
        const bool branch_taken_0x127ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127CE8u;
        // 0x127cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ce8) {
            ctx->pc = 0x127CF8u;
            goto label_127cf8;
        }
    }
    ctx->pc = 0x127CF0u;
    // 0x127cf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x127CF0u;
    {
        const bool branch_taken_0x127cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127cf0) {
            ctx->pc = 0x127D0Cu;
            goto label_127d0c;
        }
    }
    ctx->pc = 0x127CF8u;
label_127cf8:
    // 0x127cf8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x127cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x127cfc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x127cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x127d00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127d04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x127d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127d08: 0x0  nop
    ctx->pc = 0x127d08u;
    // NOP
label_127d0c:
    // 0x127d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x127D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127D14u;
}
