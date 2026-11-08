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

// Function: FUN_001ee008
// Address: 0x1ee008 - 0x1ee02c
void FUN_001ee008_0x1ee008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ee008_0x1ee008");
#endif

    switch (ctx->pc) {
        case 0x1ee018u: goto label_1ee018;
        default: break;
    }

    ctx->pc = 0x1ee008u;

    // 0x1ee008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ee008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ee00c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ee00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ee010: 0xc07b686  jal         func_1EDA18
    ctx->pc = 0x1EE010u;
    SET_GPR_U32(ctx, 31, 0x1EE018u);
    ctx->pc = 0x1EDA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDA18u, 0x1EE010u, 0x1EE018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE018u;
label_1ee018:
    // 0x1ee018: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1ee018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1ee01c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee020: 0xac40a3d0  sw          $zero, -0x5C30($v0)
    ctx->pc = 0x1ee020u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21A3D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21A3D0u, _value); } while (0);
    // 0x1ee024: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE024u;
        // 0x1ee028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE02Cu;
}
