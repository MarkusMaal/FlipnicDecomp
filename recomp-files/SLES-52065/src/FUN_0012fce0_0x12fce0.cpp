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

// Function: FUN_0012fce0
// Address: 0x12fce0 - 0x12fd04
void FUN_0012fce0_0x12fce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012fce0_0x12fce0");
#endif

    switch (ctx->pc) {
        case 0x12fcf8u: goto label_12fcf8;
        default: break;
    }

    ctx->pc = 0x12fce0u;

    // 0x12fce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12fce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fce4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12fce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12fcec: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x12fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x12fcf0: 0xc04bea0  jal         func_12FA80
    ctx->pc = 0x12FCF0u;
    SET_GPR_U32(ctx, 31, 0x12FCF8u);
    ctx->pc = 0x12FCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCF0u;
    // 0x12fcf4: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FA80u, 0x12FCF0u, 0x12FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCF8u;
label_12fcf8:
    // 0x12fcf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12fcf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x12FCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCFCu;
        // 0x12fd00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FD04u;
}
