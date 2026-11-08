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

// Function: FUN_001a0860
// Address: 0x1a0860 - 0x1a08c0
void FUN_001a0860_0x1a0860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0860_0x1a0860");
#endif

    switch (ctx->pc) {
        case 0x1a0890u: goto label_1a0890;
        case 0x1a08a8u: goto label_1a08a8;
        default: break;
    }

    ctx->pc = 0x1a0860u;

    // 0x1a0860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a0860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a086c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a086cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0874: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A0874u;
    {
        const bool branch_taken_0x1a0874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0874u;
        // 0x1a0878: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0874) {
            ctx->pc = 0x1A08A8u;
            goto label_1a08a8;
        }
    }
    ctx->pc = 0x1A087Cu;
    // 0x1a087c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1a087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1a0880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0884: 0x2442b340  addiu       $v0, $v0, -0x4CC0
    ctx->pc = 0x1a0884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947648));
    // 0x1a0888: 0xc064324  jal         func_190C90
    ctx->pc = 0x1A0888u;
    SET_GPR_U32(ctx, 31, 0x1A0890u);
    ctx->pc = 0x1A088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0888u;
    // 0x1a088c: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1A0888u, 0x1A0890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0890u;
label_1a0890:
    // 0x1a0890: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1a0890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1a0894: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a0894u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a0898: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0898u;
    {
        const bool branch_taken_0x1a0898 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0898u;
        // 0x1a089c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0898) {
            ctx->pc = 0x1A08ACu;
            goto label_1a08ac;
        }
    }
    ctx->pc = 0x1A08A0u;
    // 0x1a08a0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1A08A0u;
    SET_GPR_U32(ctx, 31, 0x1A08A8u);
    ctx->pc = 0x1A08A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A08A0u;
    // 0x1a08a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1A08A0u, 0x1A08A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08A8u;
label_1a08a8:
    // 0x1a08a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a08a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a08ac:
    // 0x1a08ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a08acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a08b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a08b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a08b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a08b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a08b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A08B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08B8u;
        // 0x1a08bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A08B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A08C0u;
}
