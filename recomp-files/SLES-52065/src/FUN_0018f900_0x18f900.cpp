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

// Function: FUN_0018f900
// Address: 0x18f900 - 0x18f934
void FUN_0018f900_0x18f900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f900_0x18f900");
#endif

    ctx->pc = 0x18f900u;

    // 0x18f900: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x18f900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f904: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18f904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18f908: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18f908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18f90c: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x18f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x18f910: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x18f910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f914: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F914u;
    {
        const bool branch_taken_0x18f914 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x18f914) {
            ctx->pc = 0x18F920u;
            goto label_18f920;
        }
    }
    ctx->pc = 0x18F91Cu;
    // 0x18f91c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x18f91cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_18f920:
    // 0x18f920: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f924: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f928: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f92c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F92Cu;
        // 0x18f930: 0xac600034  sw          $zero, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F934u;
}
