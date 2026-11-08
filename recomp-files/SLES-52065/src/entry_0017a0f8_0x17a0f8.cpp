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

// Function: entry_0017a0f8
// Address: 0x17a0f8 - 0x17a128
void entry_0017a0f8_0x17a0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a0f8_0x17a0f8");
#endif

    switch (ctx->pc) {
        case 0x17a104u: goto label_17a104;
        default: break;
    }

    ctx->pc = 0x17a0f8u;

    // 0x17a0f8: 0xaf828630  sw          $v0, -0x79D0($gp)
    ctx->pc = 0x17a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 2));
    // 0x17a0fc: 0xc05c9ac  jal         func_1726B0
    ctx->pc = 0x17A0FCu;
    SET_GPR_U32(ctx, 31, 0x17A104u);
    ctx->pc = 0x17A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0FCu;
    // 0x17a100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1726B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1726B0u, 0x17A0FCu, 0x17A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A104u;
label_17a104:
    // 0x17a104: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x17a104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x17a108: 0x8f828630  lw          $v0, -0x79D0($gp)
    ctx->pc = 0x17a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x17a10c: 0xac434024  sw          $v1, 0x4024($v0)
    ctx->pc = 0x17a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16420), GPR_U32(ctx, 3));
    // 0x17a110: 0xaf808624  sw          $zero, -0x79DC($gp)
    ctx->pc = 0x17a110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936100), GPR_U32(ctx, 0));
    // 0x17a114: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x17a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x17a118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a120: 0x3e00008  jr          $ra
    ctx->pc = 0x17A120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A120u;
        // 0x17a124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A128u;
}
