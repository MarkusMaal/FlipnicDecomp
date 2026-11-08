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

// Function: FUN_001dc978
// Address: 0x1dc978 - 0x1dc9b0
void FUN_001dc978_0x1dc978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dc978_0x1dc978");
#endif

    ctx->pc = 0x1dc978u;

    // 0x1dc978: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1dc978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dc97c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1dc97cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1dc980: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1dc980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dc984: 0x24a57330  addiu       $a1, $a1, 0x7330
    ctx->pc = 0x1dc984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29488));
    // 0x1dc988: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc98c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1dc98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1dc990: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dc990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dc994: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dc994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dc998: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dc998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc99c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dc99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc9a0: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DC9A0u;
    {
        const bool branch_taken_0x1dc9a0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1dc9a0) {
            ctx->pc = 0x1DC9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC9A0u;
            // 0x1dc9a4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC9A8u;
            goto label_1dc9a8;
        }
    }
    ctx->pc = 0x1DC9A8u;
label_1dc9a8:
    // 0x1dc9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC9B0u;
}
