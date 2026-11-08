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

// Function: FUN_00119000
// Address: 0x119000 - 0x119044
void FUN_00119000_0x119000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00119000_0x119000");
#endif

    switch (ctx->pc) {
        case 0x11901cu: goto label_11901c;
        case 0x119024u: goto label_119024;
        case 0x119030u: goto label_119030;
        default: break;
    }

    ctx->pc = 0x119000u;

    // 0x119000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11900c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11900cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x119010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x119010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119014: 0xc062d50  jal         func_18B540
    ctx->pc = 0x119014u;
    SET_GPR_U32(ctx, 31, 0x11901Cu);
    ctx->pc = 0x119018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119014u;
    // 0x119018: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x119014u, 0x11901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11901Cu;
label_11901c:
    // 0x11901c: 0xc062c58  jal         func_18B160
    ctx->pc = 0x11901Cu;
    SET_GPR_U32(ctx, 31, 0x119024u);
    ctx->pc = 0x119020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11901Cu;
    // 0x119020: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B160u, 0x11901Cu, 0x119024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119024u;
label_119024:
    // 0x119024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119028: 0xc046414  jal         func_119050
    ctx->pc = 0x119028u;
    SET_GPR_U32(ctx, 31, 0x119030u);
    ctx->pc = 0x11902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119028u;
    // 0x11902c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119050u, 0x119028u, 0x119030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119030u;
label_119030:
    // 0x119030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11903c: 0x3e00008  jr          $ra
    ctx->pc = 0x11903Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11903Cu;
        // 0x119040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11903Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119044u;
}
