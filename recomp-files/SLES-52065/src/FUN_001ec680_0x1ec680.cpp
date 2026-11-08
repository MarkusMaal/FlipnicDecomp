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

// Function: FUN_001ec680
// Address: 0x1ec680 - 0x1ec6c4
void FUN_001ec680_0x1ec680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec680_0x1ec680");
#endif

    switch (ctx->pc) {
        case 0x1ec6b8u: goto label_1ec6b8;
        default: break;
    }

    ctx->pc = 0x1ec680u;

    // 0x1ec680: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ec680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ec684: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec688: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ec688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ec68c: 0x2442c260  addiu       $v0, $v0, -0x3DA0
    ctx->pc = 0x1ec68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951520));
    // 0x1ec690: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1ec690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1ec694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ec694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ec698: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1ec698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1ec69c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ec69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ec6a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ec6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec6a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec6a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ec6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec6ac: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1ec6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1ec6b0: 0xc07ae94  jal         func_1EBA50
    ctx->pc = 0x1EC6B0u;
    SET_GPR_U32(ctx, 31, 0x1EC6B8u);
    ctx->pc = 0x1EC6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC6B0u;
    // 0x1ec6b4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA50u, 0x1EC6B0u, 0x1EC6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6B8u;
label_1ec6b8:
    // 0x1ec6b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC6BCu;
        // 0x1ec6c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC6C4u;
}
