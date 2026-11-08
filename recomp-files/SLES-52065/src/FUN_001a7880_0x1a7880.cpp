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

// Function: FUN_001a7880
// Address: 0x1a7880 - 0x1a78f0
void FUN_001a7880_0x1a7880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7880_0x1a7880");
#endif

    switch (ctx->pc) {
        case 0x1a78c0u: goto label_1a78c0;
        case 0x1a78d8u: goto label_1a78d8;
        default: break;
    }

    ctx->pc = 0x1a7880u;

    // 0x1a7880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a788c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a788cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7894: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A7894u;
    {
        const bool branch_taken_0x1a7894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7894u;
        // 0x1a7898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7894) {
            ctx->pc = 0x1A78D8u;
            goto label_1a78d8;
        }
    }
    ctx->pc = 0x1A789Cu;
    // 0x1a789c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a78a0: 0x2442b460  addiu       $v0, $v0, -0x4BA0
    ctx->pc = 0x1a78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x1a78a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A78A4u;
    {
        const bool branch_taken_0x1a78a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78A4u;
        // 0x1a78a8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78a4) {
            ctx->pc = 0x1A78C0u;
            goto label_1a78c0;
        }
    }
    ctx->pc = 0x1A78ACu;
    // 0x1a78ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a78acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a78b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a78b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a78b4: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1a78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1a78b8: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x1A78B8u;
    SET_GPR_U32(ctx, 31, 0x1A78C0u);
    ctx->pc = 0x1A78BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A78B8u;
    // 0x1a78bc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x1A78B8u, 0x1A78C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A78C0u;
label_1a78c0:
    // 0x1a78c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a78c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a78c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a78c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a78c8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A78C8u;
    {
        const bool branch_taken_0x1a78c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78C8u;
        // 0x1a78cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78c8) {
            ctx->pc = 0x1A78DCu;
            goto label_1a78dc;
        }
    }
    ctx->pc = 0x1A78D0u;
    // 0x1a78d0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A78D0u;
    SET_GPR_U32(ctx, 31, 0x1A78D8u);
    ctx->pc = 0x1A78D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A78D0u;
    // 0x1a78d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A78D0u, 0x1A78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A78D8u;
label_1a78d8:
    // 0x1a78d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a78d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a78dc:
    // 0x1a78dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a78dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a78e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a78e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a78e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a78e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a78e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A78E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78E8u;
        // 0x1a78ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A78E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A78F0u;
}
