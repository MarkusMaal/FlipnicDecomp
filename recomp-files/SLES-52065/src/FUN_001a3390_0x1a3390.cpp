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

// Function: FUN_001a3390
// Address: 0x1a3390 - 0x1a33f0
void FUN_001a3390_0x1a3390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3390_0x1a3390");
#endif

    switch (ctx->pc) {
        case 0x1a33c0u: goto label_1a33c0;
        case 0x1a33d8u: goto label_1a33d8;
        default: break;
    }

    ctx->pc = 0x1a3390u;

    // 0x1a3390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a3398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a339c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a339cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a33a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a33a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33a4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A33A4u;
    {
        const bool branch_taken_0x1a33a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33A4u;
        // 0x1a33a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a33a4) {
            ctx->pc = 0x1A33D8u;
            goto label_1a33d8;
        }
    }
    ctx->pc = 0x1A33ACu;
    // 0x1a33ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a33acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a33b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a33b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33b4: 0x2442b380  addiu       $v0, $v0, -0x4C80
    ctx->pc = 0x1a33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947712));
    // 0x1a33b8: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A33B8u;
    SET_GPR_U32(ctx, 31, 0x1A33C0u);
    ctx->pc = 0x1A33BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33B8u;
    // 0x1a33bc: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A33B8u, 0x1A33C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33C0u;
label_1a33c0:
    // 0x1a33c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a33c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a33c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a33c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a33c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A33C8u;
    {
        const bool branch_taken_0x1a33c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33C8u;
        // 0x1a33cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a33c8) {
            ctx->pc = 0x1A33DCu;
            goto label_1a33dc;
        }
    }
    ctx->pc = 0x1A33D0u;
    // 0x1a33d0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A33D0u;
    SET_GPR_U32(ctx, 31, 0x1A33D8u);
    ctx->pc = 0x1A33D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A33D0u;
    // 0x1a33d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A33D0u, 0x1A33D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33D8u;
label_1a33d8:
    // 0x1a33d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a33d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a33dc:
    // 0x1a33dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a33dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a33e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a33e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a33e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a33e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a33e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A33E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33E8u;
        // 0x1a33ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A33E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A33F0u;
}
