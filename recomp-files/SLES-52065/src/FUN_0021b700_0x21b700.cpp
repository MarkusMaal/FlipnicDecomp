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

// Function: FUN_0021b700
// Address: 0x21b700 - 0x21b720
void FUN_0021b700_0x21b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021b700_0x21b700");
#endif

    switch (ctx->pc) {
        case 0x21b710u: goto label_21b710;
        default: break;
    }

    ctx->pc = 0x21b700u;

    // 0x21b700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b708: 0xc01d858  jal         func_076160
    ctx->pc = 0x21B708u;
    SET_GPR_U32(ctx, 31, 0x21B710u);
    ctx->pc = 0x21B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B708u;
    // 0x21b70c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x76160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76160u, 0x21B708u, 0x21B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B710u;
label_21b710:
    // 0x21b710: 0xf  sync
    ctx->pc = 0x21b710u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21b714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b718: 0x3e00008  jr          $ra
    ctx->pc = 0x21B718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B718u;
        // 0x21b71c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B720u;
}
