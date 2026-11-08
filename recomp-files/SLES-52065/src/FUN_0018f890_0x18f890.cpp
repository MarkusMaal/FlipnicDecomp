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

// Function: FUN_0018f890
// Address: 0x18f890 - 0x18f8d0
void FUN_0018f890_0x18f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f890_0x18f890");
#endif

    ctx->pc = 0x18f890u;

    // 0x18f890: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f894: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f898: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x18f898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f89c: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x18f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x18f8a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18f8a4: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x18f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x18f8a8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f8ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18f8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18f8b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f8b4: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x18f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x18f8b8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x18f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x18f8bc: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F8BCu;
    {
        const bool branch_taken_0x18f8bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F8BCu;
        // 0x18f8c0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f8bc) {
            ctx->pc = 0x18F8C8u;
            goto label_18f8c8;
        }
    }
    ctx->pc = 0x18F8C4u;
    // 0x18f8c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_18f8c8:
    // 0x18f8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x18F8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F8D0u;
}
