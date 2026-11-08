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

// Function: FUN_0019d7a0
// Address: 0x19d7a0 - 0x19d800
void FUN_0019d7a0_0x19d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019d7a0_0x19d7a0");
#endif

    switch (ctx->pc) {
        case 0x19d7d0u: goto label_19d7d0;
        case 0x19d7e8u: goto label_19d7e8;
        default: break;
    }

    ctx->pc = 0x19d7a0u;

    // 0x19d7a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d7a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d7a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d7b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19d7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7b4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x19D7B4u;
    {
        const bool branch_taken_0x19d7b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7B4u;
        // 0x19d7b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7b4) {
            ctx->pc = 0x19D7E8u;
            goto label_19d7e8;
        }
    }
    ctx->pc = 0x19D7BCu;
    // 0x19d7bc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x19d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x19d7c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19d7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d7c4: 0x2442b320  addiu       $v0, $v0, -0x4CE0
    ctx->pc = 0x19d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947616));
    // 0x19d7c8: 0xc064324  jal         func_190C90
    ctx->pc = 0x19D7C8u;
    SET_GPR_U32(ctx, 31, 0x19D7D0u);
    ctx->pc = 0x19D7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D7C8u;
    // 0x19d7cc: 0xae22031c  sw          $v0, 0x31C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x19D7C8u, 0x19D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D7D0u;
label_19d7d0:
    // 0x19d7d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19d7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19d7d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19d7d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19d7d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D7D8u;
    {
        const bool branch_taken_0x19d7d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x19D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7D8u;
        // 0x19d7dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d7d8) {
            ctx->pc = 0x19D7ECu;
            goto label_19d7ec;
        }
    }
    ctx->pc = 0x19D7E0u;
    // 0x19d7e0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x19D7E0u;
    SET_GPR_U32(ctx, 31, 0x19D7E8u);
    ctx->pc = 0x19D7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D7E0u;
    // 0x19d7e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x19D7E0u, 0x19D7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D7E8u;
label_19d7e8:
    // 0x19d7e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19d7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19d7ec:
    // 0x19d7ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d7f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d7f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d7f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D7F8u;
        // 0x19d7fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D800u;
}
