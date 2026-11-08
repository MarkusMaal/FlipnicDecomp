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

// Function: FUN_001f2c58
// Address: 0x1f2c58 - 0x1f2c90
void FUN_001f2c58_0x1f2c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f2c58_0x1f2c58");
#endif

    switch (ctx->pc) {
        case 0x1f2c80u: goto label_1f2c80;
        default: break;
    }

    ctx->pc = 0x1f2c58u;

    // 0x1f2c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f2c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f2c5c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f2c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f2c60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2c64: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f2c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f2c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2c6c: 0x2484fda8  addiu       $a0, $a0, -0x258
    ctx->pc = 0x1f2c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966696));
    // 0x1f2c70: 0xac43a480  sw          $v1, -0x5B80($v0)
    ctx->pc = 0x1f2c70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x21A480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21A480u, _value); } while (0);
    // 0x1f2c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c78: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1F2C78u;
    SET_GPR_U32(ctx, 31, 0x1F2C80u);
    ctx->pc = 0x1F2C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C78u;
    // 0x1f2c7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1F2C78u, 0x1F2C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C80u;
label_1f2c80:
    // 0x1f2c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2c84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f2c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c88: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C88u;
        // 0x1f2c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2C90u;
}
