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

// Function: FUN_001431b0
// Address: 0x1431b0 - 0x1431f4
void FUN_001431b0_0x1431b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001431b0_0x1431b0");
#endif

    ctx->pc = 0x1431b0u;

    // 0x1431b0: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1431B0u;
    {
        const bool branch_taken_0x1431b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431B0u;
        // 0x1431b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431b0) {
            ctx->pc = 0x1431E8u;
            goto label_1431e8;
        }
    }
    ctx->pc = 0x1431B8u;
    // 0x1431b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1431b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1431bc: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1431BCu;
    {
        const bool branch_taken_0x1431bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1431C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431BCu;
        // 0x1431c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431bc) {
            ctx->pc = 0x1431DCu;
            goto label_1431dc;
        }
    }
    ctx->pc = 0x1431C4u;
    // 0x1431c4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1431C4u;
    {
        const bool branch_taken_0x1431c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1431c4) {
            ctx->pc = 0x1431D4u;
            goto label_1431d4;
        }
    }
    ctx->pc = 0x1431CCu;
    // 0x1431cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1431CCu;
    {
        const bool branch_taken_0x1431cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1431cc) {
            ctx->pc = 0x1431ECu;
            goto label_1431ec;
        }
    }
    ctx->pc = 0x1431D4u;
label_1431d4:
    // 0x1431d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1431D4u;
    {
        const bool branch_taken_0x1431d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431D4u;
        // 0x1431d8: 0xa080002b  sb          $zero, 0x2B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431d4) {
            ctx->pc = 0x1431ECu;
            goto label_1431ec;
        }
    }
    ctx->pc = 0x1431DCu;
label_1431dc:
    // 0x1431dc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1431dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1431e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1431E0u;
    {
        const bool branch_taken_0x1431e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1431E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1431E0u;
        // 0x1431e4: 0xa080002b  sb          $zero, 0x2B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1431e0) {
            ctx->pc = 0x1431ECu;
            goto label_1431ec;
        }
    }
    ctx->pc = 0x1431E8u;
label_1431e8:
    // 0x1431e8: 0xa083002b  sb          $v1, 0x2B($a0)
    ctx->pc = 0x1431e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 3));
label_1431ec:
    // 0x1431ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1431ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1431ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1431F4u;
}
