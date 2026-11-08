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

// Function: FUN_001b4170
// Address: 0x1b4170 - 0x1b41fc
void FUN_001b4170_0x1b4170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4170_0x1b4170");
#endif

    switch (ctx->pc) {
        case 0x1b41b0u: goto label_1b41b0;
        case 0x1b41ccu: goto label_1b41cc;
        default: break;
    }

    ctx->pc = 0x1b4170u;

    // 0x1b4170: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b4170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b4174: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b4174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b4178: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b4178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b417c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b4180: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b4180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4184: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b4184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b4188: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b4188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b418c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b418cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4190: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1b4190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4194: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4198: 0x27b1006c  addiu       $s1, $sp, 0x6C
    ctx->pc = 0x1b4198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1b419c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b419cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41a0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1b41a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1b41a4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1b41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b41a8: 0xc040168  jal         func_1005A0
    ctx->pc = 0x1B41A8u;
    SET_GPR_U32(ctx, 31, 0x1B41B0u);
    ctx->pc = 0x1B41ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41A8u;
    // 0x1b41ac: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x1B41A8u, 0x1B41B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41B0u;
label_1b41b0:
    // 0x1b41b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b41b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41b4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B41B4u;
    {
        const bool branch_taken_0x1b41b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41B4u;
        // 0x1b41b8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41b4) {
            ctx->pc = 0x1B41CCu;
            goto label_1b41cc;
        }
    }
    ctx->pc = 0x1B41BCu;
    // 0x1b41bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b41bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41c0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1b41c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41c4: 0xc06d084  jal         func_1B4210
    ctx->pc = 0x1B41C4u;
    SET_GPR_U32(ctx, 31, 0x1B41CCu);
    ctx->pc = 0x1B41C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41C4u;
    // 0x1b41c8: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4210u, 0x1B41C4u, 0x1B41CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41CCu;
label_1b41cc:
    // 0x1b41cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b41d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1b41d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1b41d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b41d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b41d8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1b41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1b41dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b41dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b41e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b41e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b41e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b41e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b41e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b41e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b41ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b41ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b41f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b41f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b41f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B41F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41F4u;
        // 0x1b41f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B41F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B41FCu;
}
