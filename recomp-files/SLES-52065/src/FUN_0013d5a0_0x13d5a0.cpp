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

// Function: FUN_0013d5a0
// Address: 0x13d5a0 - 0x13d5d8
void FUN_0013d5a0_0x13d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d5a0_0x13d5a0");
#endif

    switch (ctx->pc) {
        case 0x13d5ccu: goto label_13d5cc;
        default: break;
    }

    ctx->pc = 0x13d5a0u;

    // 0x13d5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d5a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13d5a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d5ac: 0x8c86017c  lw          $a2, 0x17C($a0)
    ctx->pc = 0x13d5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x13d5b0: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D5B0u;
    {
        const bool branch_taken_0x13d5b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13d5b0) {
            ctx->pc = 0x13D5C4u;
            goto label_13d5c4;
        }
    }
    ctx->pc = 0x13D5B8u;
    // 0x13d5b8: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x13d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
    // 0x13d5bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D5BCu;
    {
        const bool branch_taken_0x13d5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d5bc) {
            ctx->pc = 0x13D5CCu;
            goto label_13d5cc;
        }
    }
    ctx->pc = 0x13D5C4u;
label_13d5c4:
    // 0x13d5c4: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x13D5C4u;
    SET_GPR_U32(ctx, 31, 0x13D5CCu);
    ctx->pc = 0x13D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D5C4u;
    // 0x13d5c8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x13D5C4u, 0x13D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D5CCu;
label_13d5cc:
    // 0x13d5cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5D0u;
        // 0x13d5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D5D8u;
}
