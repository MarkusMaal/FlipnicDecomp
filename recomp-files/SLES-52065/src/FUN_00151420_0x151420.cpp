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

// Function: FUN_00151420
// Address: 0x151420 - 0x151480
void FUN_00151420_0x151420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151420_0x151420");
#endif

    switch (ctx->pc) {
        case 0x151450u: goto label_151450;
        case 0x151468u: goto label_151468;
        default: break;
    }

    ctx->pc = 0x151420u;

    // 0x151420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x151428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15142c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x151430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151434: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x151434u;
    {
        const bool branch_taken_0x151434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x151438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151434u;
        // 0x151438: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151434) {
            ctx->pc = 0x151468u;
            goto label_151468;
        }
    }
    ctx->pc = 0x15143Cu;
    // 0x15143c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15143cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x151440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151444: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x151444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
    // 0x151448: 0xc04dd5c  jal         func_137570
    ctx->pc = 0x151448u;
    SET_GPR_U32(ctx, 31, 0x151450u);
    ctx->pc = 0x15144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151448u;
    // 0x15144c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137570u, 0x151448u, 0x151450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151450u;
label_151450:
    // 0x151450: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x151450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x151454: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x151454u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x151458: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151458u;
    {
        const bool branch_taken_0x151458 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151458u;
        // 0x15145c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151458) {
            ctx->pc = 0x15146Cu;
            goto label_15146c;
        }
    }
    ctx->pc = 0x151460u;
    // 0x151460: 0xc0401a4  jal         func_100690
    ctx->pc = 0x151460u;
    SET_GPR_U32(ctx, 31, 0x151468u);
    ctx->pc = 0x151464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151460u;
    // 0x151464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x151460u, 0x151468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151468u;
label_151468:
    // 0x151468: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x151468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15146c:
    // 0x15146c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15146cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151478: 0x3e00008  jr          $ra
    ctx->pc = 0x151478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151478u;
        // 0x15147c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151480u;
}
