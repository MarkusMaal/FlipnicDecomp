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

// Function: FUN_0017d2b0
// Address: 0x17d2b0 - 0x17d304
void FUN_0017d2b0_0x17d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017d2b0_0x17d2b0");
#endif

    switch (ctx->pc) {
        case 0x17d2d4u: goto label_17d2d4;
        case 0x17d2ecu: goto label_17d2ec;
        default: break;
    }

    ctx->pc = 0x17d2b0u;

    // 0x17d2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d2b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17d2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d2bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d2c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17d2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2c4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17D2C4u;
    {
        const bool branch_taken_0x17d2c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2C4u;
        // 0x17d2c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2c4) {
            ctx->pc = 0x17D2ECu;
            goto label_17d2ec;
        }
    }
    ctx->pc = 0x17D2CCu;
    // 0x17d2cc: 0xc04018c  jal         func_100630
    ctx->pc = 0x17D2CCu;
    SET_GPR_U32(ctx, 31, 0x17D2D4u);
    ctx->pc = 0x17D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2CCu;
    // 0x17d2d0: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x17D2CCu, 0x17D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2D4u;
label_17d2d4:
    // 0x17d2d4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17d2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17d2d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17d2d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17d2dc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D2DCu;
    {
        const bool branch_taken_0x17d2dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2DCu;
        // 0x17d2e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2dc) {
            ctx->pc = 0x17D2F0u;
            goto label_17d2f0;
        }
    }
    ctx->pc = 0x17D2E4u;
    // 0x17d2e4: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17D2E4u;
    SET_GPR_U32(ctx, 31, 0x17D2ECu);
    ctx->pc = 0x17D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2E4u;
    // 0x17d2e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17D2E4u, 0x17D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D2ECu;
label_17d2ec:
    // 0x17d2ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17d2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17d2f0:
    // 0x17d2f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d2f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d2f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x17D2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2FCu;
        // 0x17d300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D304u;
}
