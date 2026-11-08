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

// Function: entry_001e98a8
// Address: 0x1e98a8 - 0x1e98dc
void entry_001e98a8_0x1e98a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e98a8_0x1e98a8");
#endif

    switch (ctx->pc) {
        case 0x1e98c0u: goto label_1e98c0;
        default: break;
    }

    ctx->pc = 0x1e98a8u;

    // 0x1e98a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e98ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e98acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98b0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e98b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e98b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e98b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e98b8: 0xc07ab48  jal         func_1EAD20
    ctx->pc = 0x1E98B8u;
    SET_GPR_U32(ctx, 31, 0x1E98C0u);
    ctx->pc = 0x1E98BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E98B8u;
    // 0x1e98bc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD20u, 0x1E98B8u, 0x1E98C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E98C0u;
label_1e98c0:
    // 0x1e98c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e98c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e98c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e98c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e98c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e98c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e98cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e98ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e98d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e98d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e98d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E98D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E98D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98D4u;
        // 0x1e98d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E98D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E98DCu;
}
