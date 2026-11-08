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

// Function: entry_0010ac48
// Address: 0x10ac48 - 0x10ac70
void entry_0010ac48_0x10ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ac48_0x10ac48");
#endif

    ctx->pc = 0x10ac48u;

    // 0x10ac48: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x10ac48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x10ac4c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10AC4Cu;
    {
        const bool branch_taken_0x10ac4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC4Cu;
        // 0x10ac50: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac4c) {
            ctx->pc = 0x10AC30u;
            return;
        }
    }
    ctx->pc = 0x10AC54u;
    // 0x10ac54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x10ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x10ac58: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x10ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x10ac5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ac5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ac60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10ac60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ac64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ac64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x10AC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC68u;
        // 0x10ac6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AC70u;
}
