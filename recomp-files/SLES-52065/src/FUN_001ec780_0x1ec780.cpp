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

// Function: FUN_001ec780
// Address: 0x1ec780 - 0x1ec7b4
void FUN_001ec780_0x1ec780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ec780_0x1ec780");
#endif

    switch (ctx->pc) {
        case 0x1ec7a8u: goto label_1ec7a8;
        default: break;
    }

    ctx->pc = 0x1ec780u;

    // 0x1ec780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec784: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ec784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec788: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1ec788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1ec78c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ec78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ec790: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec794: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ec794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec798: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1ec798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1ec79c: 0x2404fffa  addiu       $a0, $zero, -0x6
    ctx->pc = 0x1ec79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x1ec7a0: 0xc07ae94  jal         func_1EBA50
    ctx->pc = 0x1EC7A0u;
    SET_GPR_U32(ctx, 31, 0x1EC7A8u);
    ctx->pc = 0x1EC7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC7A0u;
    // 0x1ec7a4: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBA50u, 0x1EC7A0u, 0x1EC7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC7A8u;
label_1ec7a8:
    // 0x1ec7a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7ACu;
        // 0x1ec7b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC7B4u;
}
