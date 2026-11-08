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

// Function: entry_001222e4
// Address: 0x1222e4 - 0x12231c
void entry_001222e4_0x1222e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001222e4_0x1222e4");
#endif

    switch (ctx->pc) {
        case 0x1222fcu: goto label_1222fc;
        default: break;
    }

    ctx->pc = 0x1222e4u;

    // 0x1222e4: 0x83a8005c  lb          $t0, 0x5C($sp)
    ctx->pc = 0x1222e4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1222e8: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x1222e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1222ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1222ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1222f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222f4: 0xc048ab8  jal         func_122AE0
    ctx->pc = 0x1222F4u;
    SET_GPR_U32(ctx, 31, 0x1222FCu);
    ctx->pc = 0x1222F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1222F4u;
    // 0x1222f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122AE0u, 0x1222F4u, 0x1222FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222FCu;
label_1222fc:
    // 0x1222fc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1222fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122300: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x122300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122304: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x122304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12230c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12230cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122314: 0x3e00008  jr          $ra
    ctx->pc = 0x122314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122314u;
        // 0x122318: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12231Cu;
}
