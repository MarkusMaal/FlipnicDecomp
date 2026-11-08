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

// Function: FUN_001d96d0
// Address: 0x1d96d0 - 0x1d9710
void FUN_001d96d0_0x1d96d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d96d0_0x1d96d0");
#endif

    switch (ctx->pc) {
        case 0x1d9700u: goto label_1d9700;
        default: break;
    }

    ctx->pc = 0x1d96d0u;

    // 0x1d96d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d96d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d96d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d96d8: 0x2c830020  sltiu       $v1, $a0, 0x20
    ctx->pc = 0x1d96d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d96dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d96dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d96e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D96E0u;
    {
        const bool branch_taken_0x1d96e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96E0u;
        // 0x1d96e4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96e0) {
            ctx->pc = 0x1D9700u;
            goto label_1d9700;
        }
    }
    ctx->pc = 0x1D96E8u;
    // 0x1d96e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d96ec: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1d96ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1d96f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d96f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d96f4: 0x8c8466d0  lw          $a0, 0x66D0($a0)
    ctx->pc = 0x1d96f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 26320)));
    // 0x1d96f8: 0xc07565e  jal         func_1D5978
    ctx->pc = 0x1D96F8u;
    SET_GPR_U32(ctx, 31, 0x1D9700u);
    ctx->pc = 0x1D5978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5978u, 0x1D96F8u, 0x1D9700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9700u;
label_1d9700:
    // 0x1d9700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9708: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9708u;
        // 0x1d970c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9710u;
}
