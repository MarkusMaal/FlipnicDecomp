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

// Function: entry_00193bd4
// Address: 0x193bd4 - 0x193bf4
void entry_00193bd4_0x193bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193bd4_0x193bd4");
#endif

    switch (ctx->pc) {
        case 0x193be4u: goto label_193be4;
        default: break;
    }

    ctx->pc = 0x193bd4u;

    // 0x193bd4: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x193bd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x193bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bdc: 0xc062b74  jal         func_18ADD0
    ctx->pc = 0x193BDCu;
    SET_GPR_U32(ctx, 31, 0x193BE4u);
    ctx->pc = 0x193BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193BDCu;
    // 0x193be0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADD0u, 0x193BDCu, 0x193BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193BE4u;
label_193be4:
    // 0x193be4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193be8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193bec: 0x3e00008  jr          $ra
    ctx->pc = 0x193BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BECu;
        // 0x193bf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193BF4u;
}
