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

// Function: FUN_00180050
// Address: 0x180050 - 0x18007c
void FUN_00180050_0x180050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180050_0x180050");
#endif

    ctx->pc = 0x180050u;

    // 0x180050: 0x8f838660  lw          $v1, -0x79A0($gp)
    ctx->pc = 0x180050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x180054: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x180054u;
    {
        const bool branch_taken_0x180054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x180058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180054u;
        // 0x180058: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180054) {
            ctx->pc = 0x180074u;
            goto label_180074;
        }
    }
    ctx->pc = 0x18005Cu;
    // 0x18005c: 0xaf84865c  sw          $a0, -0x79A4($gp)
    ctx->pc = 0x18005cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 4));
    // 0x180060: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x180060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x180064: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180064u;
    {
        const bool branch_taken_0x180064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x180064) {
            ctx->pc = 0x180074u;
            goto label_180074;
        }
    }
    ctx->pc = 0x18006Cu;
    // 0x18006c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x180070: 0xaf83865c  sw          $v1, -0x79A4($gp)
    ctx->pc = 0x180070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936156), GPR_U32(ctx, 3));
label_180074:
    // 0x180074: 0x3e00008  jr          $ra
    ctx->pc = 0x180074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18007Cu;
}
