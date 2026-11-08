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

// Function: entry_00130248
// Address: 0x130248 - 0x130280
void entry_00130248_0x130248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130248_0x130248");
#endif

    switch (ctx->pc) {
        case 0x130260u: goto label_130260;
        case 0x130268u: goto label_130268;
        case 0x130270u: goto label_130270;
        default: break;
    }

    ctx->pc = 0x130248u;

    // 0x130248: 0xaf808588  sw          $zero, -0x7A78($gp)
    ctx->pc = 0x130248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 0));
    // 0x13024c: 0xaf808584  sw          $zero, -0x7A7C($gp)
    ctx->pc = 0x13024cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935940), GPR_U32(ctx, 0));
    // 0x130250: 0xaf808580  sw          $zero, -0x7A80($gp)
    ctx->pc = 0x130250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935936), GPR_U32(ctx, 0));
    // 0x130254: 0xaf80858c  sw          $zero, -0x7A74($gp)
    ctx->pc = 0x130254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 0));
    // 0x130258: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x130258u;
    SET_GPR_U32(ctx, 31, 0x130260u);
    ctx->pc = 0x13025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130258u;
    // 0x13025c: 0xaf8085c8  sw          $zero, -0x7A38($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936008), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x130258u, 0x130260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130260u;
label_130260:
    // 0x130260: 0xc051404  jal         func_145010
    ctx->pc = 0x130260u;
    SET_GPR_U32(ctx, 31, 0x130268u);
    ctx->pc = 0x130264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130260u;
    // 0x130264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145010u, 0x130260u, 0x130268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130268u;
label_130268:
    // 0x130268: 0xc04bc68  jal         func_12F1A0
    ctx->pc = 0x130268u;
    SET_GPR_U32(ctx, 31, 0x130270u);
    ctx->pc = 0x13026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130268u;
    // 0x13026c: 0xaf8084b4  sw          $zero, -0x7B4C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935732), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F1A0u, 0x130268u, 0x130270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130270u;
label_130270:
    // 0x130270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130278: 0x3e00008  jr          $ra
    ctx->pc = 0x130278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130278u;
        // 0x13027c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130280u;
}
