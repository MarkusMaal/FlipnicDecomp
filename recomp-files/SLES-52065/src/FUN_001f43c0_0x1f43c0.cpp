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

// Function: FUN_001f43c0
// Address: 0x1f43c0 - 0x1f4408
void FUN_001f43c0_0x1f43c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f43c0_0x1f43c0");
#endif

    switch (ctx->pc) {
        case 0x1f43e4u: goto label_1f43e4;
        case 0x1f43f4u: goto label_1f43f4;
        default: break;
    }

    ctx->pc = 0x1f43c0u;

    // 0x1f43c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f43c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f43c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f43c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f43c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f43cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f43ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43d0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1f43d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1f43d4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1f43d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1f43d8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1f43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1f43dc: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F43DCu;
    SET_GPR_U32(ctx, 31, 0x1F43E4u);
    ctx->pc = 0x1F43E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F43DCu;
    // 0x1f43e0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F43DCu, 0x1F43E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43E4u;
label_1f43e4:
    // 0x1f43e4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f43e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f43e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f43ec: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F43ECu;
    SET_GPR_U32(ctx, 31, 0x1F43F4u);
    ctx->pc = 0x1F43F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F43ECu;
    // 0x1f43f0: 0xac62aaf0  sw          $v0, -0x5510($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F43ECu, 0x1F43F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43F4u;
label_1f43f4:
    // 0x1f43f4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f43f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f43f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f43f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f43fc: 0xac62aaf4  sw          $v0, -0x550C($v1)
    ctx->pc = 0x1f43fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x21AAF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21AAF4u, _value); } while (0);
    // 0x1f4400: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4400u;
        // 0x1f4404: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4408u;
}
