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

// Function: FUN_0011bbf0
// Address: 0x11bbf0 - 0x11bc28
void FUN_0011bbf0_0x11bbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011bbf0_0x11bbf0");
#endif

    switch (ctx->pc) {
        case 0x11bc14u: goto label_11bc14;
        default: break;
    }

    ctx->pc = 0x11bbf0u;

    // 0x11bbf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11bbf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11bbf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11bbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11bbfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11bbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc00: 0x8c840524  lw          $a0, 0x524($a0)
    ctx->pc = 0x11bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1316)));
    // 0x11bc04: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BC04u;
    {
        const bool branch_taken_0x11bc04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bc04) {
            ctx->pc = 0x11BC18u;
            goto label_11bc18;
        }
    }
    ctx->pc = 0x11BC0Cu;
    // 0x11bc0c: 0xc040150  jal         func_100540
    ctx->pc = 0x11BC0Cu;
    SET_GPR_U32(ctx, 31, 0x11BC14u);
    ctx->pc = 0x100540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100540u, 0x11BC0Cu, 0x11BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC14u;
label_11bc14:
    // 0x11bc14: 0xae000524  sw          $zero, 0x524($s0)
    ctx->pc = 0x11bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1316), GPR_U32(ctx, 0));
label_11bc18:
    // 0x11bc18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11bc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bc1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11bc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bc20: 0x3e00008  jr          $ra
    ctx->pc = 0x11BC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC20u;
        // 0x11bc24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BC28u;
}
