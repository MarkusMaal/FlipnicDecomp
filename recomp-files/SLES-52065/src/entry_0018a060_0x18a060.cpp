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

// Function: entry_0018a060
// Address: 0x18a060 - 0x18a0a0
void entry_0018a060_0x18a060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a060_0x18a060");
#endif

    switch (ctx->pc) {
        case 0x18a078u: goto label_18a078;
        case 0x18a088u: goto label_18a088;
        default: break;
    }

    ctx->pc = 0x18a060u;

    // 0x18a060: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x18a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x18a064: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x18a064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18a068: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x18a068u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a06c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18a070: 0xc081798  jal         func_205E60
    ctx->pc = 0x18A070u;
    SET_GPR_U32(ctx, 31, 0x18A078u);
    ctx->pc = 0x18A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A070u;
    // 0x18a074: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205E60u, 0x18A070u, 0x18A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A078u;
label_18a078:
    // 0x18a078: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18a078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a080: 0xc0624f4  jal         func_1893D0
    ctx->pc = 0x18A080u;
    SET_GPR_U32(ctx, 31, 0x18A088u);
    ctx->pc = 0x18A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A080u;
    // 0x18a084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1893D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1893D0u, 0x18A080u, 0x18A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A088u;
label_18a088:
    // 0x18a088: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18a088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a08c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18a08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a098: 0x3e00008  jr          $ra
    ctx->pc = 0x18A098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A098u;
        // 0x18a09c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A0A0u;
}
