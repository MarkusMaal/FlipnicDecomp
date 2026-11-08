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

// Function: FUN_001e2450
// Address: 0x1e2450 - 0x1e24a4
void FUN_001e2450_0x1e2450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2450_0x1e2450");
#endif

    switch (ctx->pc) {
        case 0x1e2450u: goto label_1e2450;
        case 0x1e2454u: goto label_1e2454;
        case 0x1e2458u: goto label_1e2458;
        case 0x1e245cu: goto label_1e245c;
        case 0x1e2460u: goto label_1e2460;
        case 0x1e2464u: goto label_1e2464;
        case 0x1e2468u: goto label_1e2468;
        case 0x1e246cu: goto label_1e246c;
        case 0x1e2470u: goto label_1e2470;
        case 0x1e2474u: goto label_1e2474;
        case 0x1e2478u: goto label_1e2478;
        case 0x1e247cu: goto label_1e247c;
        case 0x1e2480u: goto label_1e2480;
        case 0x1e2484u: goto label_1e2484;
        case 0x1e2488u: goto label_1e2488;
        case 0x1e248cu: goto label_1e248c;
        case 0x1e2490u: goto label_1e2490;
        case 0x1e2494u: goto label_1e2494;
        case 0x1e2498u: goto label_1e2498;
        case 0x1e249cu: goto label_1e249c;
        case 0x1e24a0u: goto label_1e24a0;
        default: break;
    }

    ctx->pc = 0x1e2450u;

label_1e2450:
    // 0x1e2450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e2454:
    // 0x1e2454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e2458:
    // 0x1e2458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e245c:
    // 0x1e245c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e245cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2460:
    // 0x1e2460: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1e2460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1e2464:
    // 0x1e2464: 0x320f809  jalr        $t9
label_1e2468:
    if (ctx->pc == 0x1E2468u) {
        ctx->pc = 0x1E2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2464u;
        // 0x1e2468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E246Cu;
        goto label_1e246c;
    }
    ctx->pc = 0x1E2464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E246Cu);
        ctx->pc = 0x1E2468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2464u;
        // 0x1e2468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2464u, 0x1E246Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E246Cu;
label_1e246c:
    // 0x1e246c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e246cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e2470:
    // 0x1e2470: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e2474:
    if (ctx->pc == 0x1E2474u) {
        ctx->pc = 0x1E2478u;
        goto label_1e2478;
    }
    ctx->pc = 0x1E2470u;
    {
        const bool branch_taken_0x1e2470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e2470) {
            ctx->pc = 0x1E2480u;
            goto label_1e2480;
        }
    }
    ctx->pc = 0x1E2478u;
label_1e2478:
    // 0x1e2478: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e247c:
    if (ctx->pc == 0x1E247Cu) {
        ctx->pc = 0x1E247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2478u;
        // 0x1e247c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2480u;
        goto label_1e2480;
    }
    ctx->pc = 0x1E2478u;
    {
        const bool branch_taken_0x1e2478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2478u;
        // 0x1e247c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2478) {
            ctx->pc = 0x1E2494u;
            goto label_1e2494;
        }
    }
    ctx->pc = 0x1E2480u;
label_1e2480:
    // 0x1e2480: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e2480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e2484:
    // 0x1e2484: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e2484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e2488:
    // 0x1e2488: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e2488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1e248c:
    // 0x1e248c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e248cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e2490:
    // 0x1e2490: 0x0  nop
    ctx->pc = 0x1e2490u;
    // NOP
label_1e2494:
    // 0x1e2494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2498:
    // 0x1e2498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e249c:
    // 0x1e249c: 0x3e00008  jr          $ra
label_1e24a0:
    if (ctx->pc == 0x1E24A0u) {
        ctx->pc = 0x1E24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E249Cu;
        // 0x1e24a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24A4u;
        goto label_fallthrough_0x1e249c;
    }
    ctx->pc = 0x1E249Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E249Cu;
        // 0x1e24a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E249Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e249c:
    ctx->pc = 0x1E24A4u;
}
