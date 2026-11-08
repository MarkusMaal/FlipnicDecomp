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

// Function: FUN_001aac60
// Address: 0x1aac60 - 0x1aacd0
void FUN_001aac60_0x1aac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aac60_0x1aac60");
#endif

    switch (ctx->pc) {
        case 0x1aaca0u: goto label_1aaca0;
        case 0x1aacb8u: goto label_1aacb8;
        default: break;
    }

    ctx->pc = 0x1aac60u;

    // 0x1aac60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aac64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aac68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aac6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aac70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aac70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac74: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AAC74u;
    {
        const bool branch_taken_0x1aac74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC74u;
        // 0x1aac78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac74) {
            ctx->pc = 0x1AACB8u;
            goto label_1aacb8;
        }
    }
    ctx->pc = 0x1AAC7Cu;
    // 0x1aac7c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aac80: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x1aac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
    // 0x1aac84: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAC84u;
    {
        const bool branch_taken_0x1aac84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC84u;
        // 0x1aac88: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac84) {
            ctx->pc = 0x1AACA0u;
            goto label_1aaca0;
        }
    }
    ctx->pc = 0x1AAC8Cu;
    // 0x1aac8c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1aac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1aac90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aac90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac94: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1aac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1aac98: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1AAC98u;
    SET_GPR_U32(ctx, 31, 0x1AACA0u);
    ctx->pc = 0x1AAC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC98u;
    // 0x1aac9c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1AAC98u, 0x1AACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACA0u;
label_1aaca0:
    // 0x1aaca0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1aaca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1aaca4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1aaca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1aaca8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AACA8u;
    {
        const bool branch_taken_0x1aaca8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACA8u;
        // 0x1aacac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaca8) {
            ctx->pc = 0x1AACBCu;
            goto label_1aacbc;
        }
    }
    ctx->pc = 0x1AACB0u;
    // 0x1aacb0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1AACB0u;
    SET_GPR_U32(ctx, 31, 0x1AACB8u);
    ctx->pc = 0x1AACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACB0u;
    // 0x1aacb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1AACB0u, 0x1AACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACB8u;
label_1aacb8:
    // 0x1aacb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1aacb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aacbc:
    // 0x1aacbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aacbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aacc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aacc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aacc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aacc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aacc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AACC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACC8u;
        // 0x1aaccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AACC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AACD0u;
}
