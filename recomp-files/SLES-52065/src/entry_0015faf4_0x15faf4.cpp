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

// Function: entry_0015faf4
// Address: 0x15faf4 - 0x15fb30
void entry_0015faf4_0x15faf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015faf4_0x15faf4");
#endif

    ctx->pc = 0x15faf4u;

    // 0x15faf4: 0x0  nop
    ctx->pc = 0x15faf4u;
    // NOP
    // 0x15faf8: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x15faf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15fafc: 0x1460fd73  bnez        $v1, . + 4 + (-0x28D << 2)
    ctx->pc = 0x15FAFCu;
    {
        const bool branch_taken_0x15fafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FAFCu;
        // 0x15fb00: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fafc) {
            ctx->pc = 0x15F0CCu;
            return;
        }
    }
    ctx->pc = 0x15FB04u;
    // 0x15fb04: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x15fb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fb08: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15fb08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15fb0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15fb0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15fb10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15fb10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15fb14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15fb14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15fb18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15fb18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15fb1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15fb1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15fb20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fb20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fb24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fb28: 0x3e00008  jr          $ra
    ctx->pc = 0x15FB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FB28u;
        // 0x15fb2c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FB30u;
}
