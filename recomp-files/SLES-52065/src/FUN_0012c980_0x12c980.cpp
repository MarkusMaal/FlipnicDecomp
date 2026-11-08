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

// Function: FUN_0012c980
// Address: 0x12c980 - 0x12c9e8
void FUN_0012c980_0x12c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012c980_0x12c980");
#endif

    switch (ctx->pc) {
        case 0x12c9b0u: goto label_12c9b0;
        case 0x12c9b8u: goto label_12c9b8;
        case 0x12c9d0u: goto label_12c9d0;
        default: break;
    }

    ctx->pc = 0x12c980u;

    // 0x12c980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12c984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12c988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12c98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12c98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12c990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12c990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c994: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x12C994u;
    {
        const bool branch_taken_0x12c994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C994u;
        // 0x12c998: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c994) {
            ctx->pc = 0x12C9D0u;
            goto label_12c9d0;
        }
    }
    ctx->pc = 0x12C99Cu;
    // 0x12c99c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x12c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x12c9a0: 0x24428b90  addiu       $v0, $v0, -0x7470
    ctx->pc = 0x12c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937488));
    // 0x12c9a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12c9a8: 0xc040150  jal         func_100540
    ctx->pc = 0x12C9A8u;
    SET_GPR_U32(ctx, 31, 0x12C9B0u);
    ctx->pc = 0x12C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9A8u;
    // 0x12c9ac: 0x8e240070  lw          $a0, 0x70($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x12C9A8u, 0x12C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9B0u;
label_12c9b0:
    // 0x12c9b0: 0xc040150  jal         func_100540
    ctx->pc = 0x12C9B0u;
    SET_GPR_U32(ctx, 31, 0x12C9B8u);
    ctx->pc = 0x12C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9B0u;
    // 0x12c9b4: 0x8e240074  lw          $a0, 0x74($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x12C9B0u, 0x12C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9B8u;
label_12c9b8:
    // 0x12c9b8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x12c9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x12c9bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12c9bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12c9c0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C9C0u;
    {
        const bool branch_taken_0x12c9c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9C0u;
        // 0x12c9c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9c0) {
            ctx->pc = 0x12C9D4u;
            goto label_12c9d4;
        }
    }
    ctx->pc = 0x12C9C8u;
    // 0x12c9c8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12C9C8u;
    SET_GPR_U32(ctx, 31, 0x12C9D0u);
    ctx->pc = 0x12C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C9C8u;
    // 0x12c9cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12C9C8u, 0x12C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C9D0u;
label_12c9d0:
    // 0x12c9d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12c9d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12c9d4:
    // 0x12c9d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12c9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c9d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12c9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c9dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x12C9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9E0u;
        // 0x12c9e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C9E8u;
}
