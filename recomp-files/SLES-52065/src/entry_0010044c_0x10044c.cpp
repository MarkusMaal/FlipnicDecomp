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

// Function: entry_0010044c
// Address: 0x10044c - 0x1004a0
void entry_0010044c_0x10044c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010044c_0x10044c");
#endif

    switch (ctx->pc) {
        case 0x100478u: goto label_100478;
        case 0x100484u: goto label_100484;
        default: break;
    }

    ctx->pc = 0x10044cu;

    // 0x10044c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x10044cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x100450: 0x24842c80  addiu       $a0, $a0, 0x2C80
    ctx->pc = 0x100450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11392));
    // 0x100454: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x100454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x100458: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x100458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x10045c: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x10045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x100460: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x100460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x100464: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x100464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x100468: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x100468u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10046c: 0x2604fff0  addiu       $a0, $s0, -0x10
    ctx->pc = 0x10046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x100470: 0xc07fb0e  jal         func_1FEC38
    ctx->pc = 0x100470u;
    SET_GPR_U32(ctx, 31, 0x100478u);
    ctx->pc = 0x1FEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC38u, 0x100470u, 0x100478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100478u;
label_100478:
    // 0x100478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10047c: 0xc07fb18  jal         func_1FEC60
    ctx->pc = 0x10047Cu;
    SET_GPR_U32(ctx, 31, 0x100484u);
    ctx->pc = 0x1FEC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC60u, 0x10047Cu, 0x100484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100484u;
label_100484:
    // 0x100484: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x100484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x100488: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10048c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10048cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100494: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x100494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x100498: 0x3e00008  jr          $ra
    ctx->pc = 0x100498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1004A0u;
}
