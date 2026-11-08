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

// Function: FUN_0013ad30
// Address: 0x13ad30 - 0x13ad70
void FUN_0013ad30_0x13ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ad30_0x13ad30");
#endif

    switch (ctx->pc) {
        case 0x13ad50u: goto label_13ad50;
        default: break;
    }

    ctx->pc = 0x13ad30u;

    // 0x13ad30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ad34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13ad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13ad38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ad38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ad3c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x13ad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13ad40: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13AD40u;
    {
        const bool branch_taken_0x13ad40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD40u;
        // 0x13ad44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad40) {
            ctx->pc = 0x13AD60u;
            goto label_13ad60;
        }
    }
    ctx->pc = 0x13AD48u;
    // 0x13ad48: 0xc04ee7c  jal         func_13B9F0
    ctx->pc = 0x13AD48u;
    SET_GPR_U32(ctx, 31, 0x13AD50u);
    ctx->pc = 0x13B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B9F0u, 0x13AD48u, 0x13AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD50u;
label_13ad50:
    // 0x13ad50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13ad54: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x13ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13ad58: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x13ad58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13ad5c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x13ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_13ad60:
    // 0x13ad60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ad60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ad64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ad64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ad68: 0x3e00008  jr          $ra
    ctx->pc = 0x13AD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD68u;
        // 0x13ad6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AD70u;
}
