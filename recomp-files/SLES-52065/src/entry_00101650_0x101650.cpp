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

// Function: entry_00101650
// Address: 0x101650 - 0x10168c
void entry_00101650_0x101650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101650_0x101650");
#endif

    switch (ctx->pc) {
        case 0x101658u: goto label_101658;
        case 0x101668u: goto label_101668;
        case 0x101670u: goto label_101670;
        default: break;
    }

    ctx->pc = 0x101650u;

    // 0x101650: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x101650u;
    SET_GPR_U32(ctx, 31, 0x101658u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x101650u, 0x101658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101658u;
label_101658:
    // 0x101658: 0xaf828214  sw          $v0, -0x7DEC($gp)
    ctx->pc = 0x101658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935060), GPR_U32(ctx, 2));
    // 0x10165c: 0x8f858388  lw          $a1, -0x7C78($gp)
    ctx->pc = 0x10165cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x101660: 0xc040638  jal         func_1018E0
    ctx->pc = 0x101660u;
    SET_GPR_U32(ctx, 31, 0x101668u);
    ctx->pc = 0x101664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101660u;
    // 0x101664: 0x8f848214  lw          $a0, -0x7DEC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1018E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1018E0u, 0x101660u, 0x101668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101668u;
label_101668:
    // 0x101668: 0xc040840  jal         func_102100
    ctx->pc = 0x101668u;
    SET_GPR_U32(ctx, 31, 0x101670u);
    ctx->pc = 0x10166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101668u;
    // 0x10166c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102100u, 0x101668u, 0x101670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101670u;
label_101670:
    // 0x101670: 0xff808390  sd          $zero, -0x7C70($gp)
    ctx->pc = 0x101670u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U64(ctx, 0));
    // 0x101674: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10167c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10167cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101680: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101684: 0x3e00008  jr          $ra
    ctx->pc = 0x101684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101684u;
        // 0x101688: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10168Cu;
}
