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

// Function: FUN_0011b700
// Address: 0x11b700 - 0x11b750
void FUN_0011b700_0x11b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011b700_0x11b700");
#endif

    switch (ctx->pc) {
        case 0x11b71cu: goto label_11b71c;
        case 0x11b72cu: goto label_11b72c;
        default: break;
    }

    ctx->pc = 0x11b700u;

    // 0x11b700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b70c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11b70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11b710: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11b710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b714: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x11b714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b718: 0x0  nop
    ctx->pc = 0x11b718u;
    // NOP
label_11b71c:
    // 0x11b71c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B71Cu;
    {
        const bool branch_taken_0x11b71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b71c) {
            ctx->pc = 0x11B734u;
            goto label_11b734;
        }
    }
    ctx->pc = 0x11B724u;
    // 0x11b724: 0xc040150  jal         func_100540
    ctx->pc = 0x11B724u;
    SET_GPR_U32(ctx, 31, 0x11B72Cu);
    ctx->pc = 0x11B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B724u;
    // 0x11b728: 0x8c90003c  lw          $s0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11B724u, 0x11B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B72Cu;
label_11b72c:
    // 0x11b72c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x11B72Cu;
    {
        const bool branch_taken_0x11b72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B72Cu;
        // 0x11b730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b72c) {
            ctx->pc = 0x11B71Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b71c;
        }
    }
    ctx->pc = 0x11B734u;
label_11b734:
    // 0x11b734: 0x0  nop
    ctx->pc = 0x11b734u;
    // NOP
    // 0x11b738: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x11b738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x11b73c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11b740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11b744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b748: 0x3e00008  jr          $ra
    ctx->pc = 0x11B748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B748u;
        // 0x11b74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B750u;
}
