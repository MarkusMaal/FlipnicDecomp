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

// Function: FUN_001a3330
// Address: 0x1a3330 - 0x1a3388
void FUN_001a3330_0x1a3330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3330_0x1a3330");
#endif

    switch (ctx->pc) {
        case 0x1a3330u: goto label_1a3330;
        case 0x1a3334u: goto label_1a3334;
        case 0x1a3338u: goto label_1a3338;
        case 0x1a333cu: goto label_1a333c;
        case 0x1a3340u: goto label_1a3340;
        case 0x1a3344u: goto label_1a3344;
        case 0x1a3348u: goto label_1a3348;
        case 0x1a334cu: goto label_1a334c;
        case 0x1a3350u: goto label_1a3350;
        case 0x1a3354u: goto label_1a3354;
        case 0x1a3358u: goto label_1a3358;
        case 0x1a335cu: goto label_1a335c;
        case 0x1a3360u: goto label_1a3360;
        case 0x1a3364u: goto label_1a3364;
        case 0x1a3368u: goto label_1a3368;
        case 0x1a336cu: goto label_1a336c;
        case 0x1a3370u: goto label_1a3370;
        case 0x1a3374u: goto label_1a3374;
        case 0x1a3378u: goto label_1a3378;
        case 0x1a337cu: goto label_1a337c;
        case 0x1a3380u: goto label_1a3380;
        case 0x1a3384u: goto label_1a3384;
        default: break;
    }

    ctx->pc = 0x1a3330u;

label_1a3330:
    // 0x1a3330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a3334:
    // 0x1a3334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3338:
    // 0x1a3338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a333c:
    // 0x1a333c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3340:
    // 0x1a3340: 0x8c820664  lw          $v0, 0x664($a0)
    ctx->pc = 0x1a3340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1636)));
label_1a3344:
    // 0x1a3344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3348:
    // 0x1a3348: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x1a3348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
label_1a334c:
    // 0x1a334c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1a334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1a3350:
    // 0x1a3350: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x1a3350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_1a3354:
    // 0x1a3354: 0xc06bd80  jal         func_1AF600
label_1a3358:
    if (ctx->pc == 0x1A3358u) {
        ctx->pc = 0x1A3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3354u;
        // 0x1a3358: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A335Cu;
        goto label_1a335c;
    }
    ctx->pc = 0x1A3354u;
    SET_GPR_U32(ctx, 31, 0x1A335Cu);
    ctx->pc = 0x1A3358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3354u;
    // 0x1a3358: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF600u, 0x1A3354u, 0x1A335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A335Cu;
label_1a335c:
    // 0x1a335c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1a3360:
    if (ctx->pc == 0x1A3360u) {
        ctx->pc = 0x1A3364u;
        goto label_1a3364;
    }
    ctx->pc = 0x1A335Cu;
    {
        const bool branch_taken_0x1a335c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a335c) {
            ctx->pc = 0x1A3378u;
            goto label_1a3378;
        }
    }
    ctx->pc = 0x1A3364u;
label_1a3364:
    // 0x1a3364: 0x8e19031c  lw          $t9, 0x31C($s0)
    ctx->pc = 0x1a3364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 796)));
label_1a3368:
    // 0x1a3368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a336c:
    // 0x1a336c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a336cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a3370:
    // 0x1a3370: 0x320f809  jalr        $t9
label_1a3374:
    if (ctx->pc == 0x1A3374u) {
        ctx->pc = 0x1A3374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3370u;
        // 0x1a3374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3378u;
        goto label_1a3378;
    }
    ctx->pc = 0x1A3370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A3378u);
        ctx->pc = 0x1A3374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3370u;
        // 0x1a3374: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3370u, 0x1A3378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3378u;
label_1a3378:
    // 0x1a3378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a337c:
    // 0x1a337c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a337cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3380:
    // 0x1a3380: 0x3e00008  jr          $ra
label_1a3384:
    if (ctx->pc == 0x1A3384u) {
        ctx->pc = 0x1A3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3380u;
        // 0x1a3384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3388u;
        goto label_fallthrough_0x1a3380;
    }
    ctx->pc = 0x1A3380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3380u;
        // 0x1a3384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3380:
    ctx->pc = 0x1A3388u;
}
