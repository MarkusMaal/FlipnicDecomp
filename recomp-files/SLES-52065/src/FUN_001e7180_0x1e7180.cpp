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

// Function: FUN_001e7180
// Address: 0x1e7180 - 0x1e71a4
void FUN_001e7180_0x1e7180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e7180_0x1e7180");
#endif

    switch (ctx->pc) {
        case 0x1e7198u: goto label_1e7198;
        default: break;
    }

    ctx->pc = 0x1e7180u;

    // 0x1e7180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7184: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1e7184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1e7188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e718c: 0xa7a5001e  sh          $a1, 0x1E($sp)
    ctx->pc = 0x1e718cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e7190: 0xc07a200  jal         func_1E8800
    ctx->pc = 0x1E7190u;
    SET_GPR_U32(ctx, 31, 0x1E7198u);
    ctx->pc = 0x1E7194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7190u;
    // 0x1e7194: 0x27a5001e  addiu       $a1, $sp, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8800u, 0x1E7190u, 0x1E7198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7198u;
label_1e7198:
    // 0x1e7198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e719c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E719Cu;
        // 0x1e71a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E719Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E71A4u;
}
