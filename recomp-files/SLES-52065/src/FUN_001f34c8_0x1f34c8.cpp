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

// Function: FUN_001f34c8
// Address: 0x1f34c8 - 0x1f34e8
void FUN_001f34c8_0x1f34c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f34c8_0x1f34c8");
#endif

    switch (ctx->pc) {
        case 0x1f34dcu: goto label_1f34dc;
        default: break;
    }

    ctx->pc = 0x1f34c8u;

    // 0x1f34c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f34c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f34cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f34ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f34d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f34d4: 0xc07cca8  jal         func_1F32A0
    ctx->pc = 0x1F34D4u;
    SET_GPR_U32(ctx, 31, 0x1F34DCu);
    ctx->pc = 0x1F34D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F34D4u;
    // 0x1f34d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F32A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F32A0u, 0x1F34D4u, 0x1F34DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34DCu;
label_1f34dc:
    // 0x1f34dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f34dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f34e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F34E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F34E0u;
        // 0x1f34e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F34E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F34E8u;
}
