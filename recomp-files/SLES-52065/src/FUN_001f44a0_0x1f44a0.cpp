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

// Function: FUN_001f44a0
// Address: 0x1f44a0 - 0x1f44d4
void FUN_001f44a0_0x1f44a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f44a0_0x1f44a0");
#endif

    switch (ctx->pc) {
        case 0x1f44c4u: goto label_1f44c4;
        default: break;
    }

    ctx->pc = 0x1f44a0u;

    // 0x1f44a0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f44a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f44a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f44a8: 0x8c45aad8  lw          $a1, -0x5528($v0)
    ctx->pc = 0x1f44a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21AAD8u));
    // 0x1f44ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f44acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f44b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f44b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f44b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f44b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f44b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f44b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f44bc: 0xc07d102  jal         func_1F4408
    ctx->pc = 0x1F44BCu;
    SET_GPR_U32(ctx, 31, 0x1F44C4u);
    ctx->pc = 0x1F44C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F44BCu;
    // 0x1f44c0: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4408u, 0x1F44BCu, 0x1F44C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F44C4u;
label_1f44c4:
    // 0x1f44c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f44c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f44c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f44cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F44CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F44CCu;
        // 0x1f44d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F44CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F44D4u;
}
