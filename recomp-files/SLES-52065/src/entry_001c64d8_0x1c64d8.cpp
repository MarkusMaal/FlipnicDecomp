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

// Function: entry_001c64d8
// Address: 0x1c64d8 - 0x1c6520
void entry_001c64d8_0x1c64d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c64d8_0x1c64d8");
#endif

    switch (ctx->pc) {
        case 0x1c64e4u: goto label_1c64e4;
        default: break;
    }

    ctx->pc = 0x1c64d8u;

label_1c64d8:
    // 0x1c64d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c64d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64dc: 0xc06e1d4  jal         func_1B8750
    ctx->pc = 0x1C64DCu;
    SET_GPR_U32(ctx, 31, 0x1C64E4u);
    ctx->pc = 0x1C64E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64DCu;
    // 0x1c64e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8750u, 0x1C64DCu, 0x1C64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64E4u;
label_1c64e4:
    // 0x1c64e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c64e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c64e8: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x1c64e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c64ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C64ECu;
    {
        const bool branch_taken_0x1c64ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64ECu;
        // 0x1c64f0: 0xa0500008  sb          $s0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64ec) {
            ctx->pc = 0x1C64D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c64d8;
        }
    }
    ctx->pc = 0x1C64F4u;
    // 0x1c64f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c64f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c64f8: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x1c64f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x1c64fc: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x1c64fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x1c6500: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c6500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6504: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c6504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6508: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c6508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c650c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c650cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c6514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6518: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6518u;
        // 0x1c651c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6520u;
}
