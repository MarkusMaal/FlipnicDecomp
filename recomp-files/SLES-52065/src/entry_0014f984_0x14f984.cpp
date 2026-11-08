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

// Function: entry_0014f984
// Address: 0x14f984 - 0x14f9b0
void entry_0014f984_0x14f984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f984_0x14f984");
#endif

    ctx->pc = 0x14f984u;

    // 0x14f984: 0x0  nop
    ctx->pc = 0x14f984u;
    // NOP
    // 0x14f988: 0x1af582b  sltu        $t3, $t5, $t7
    ctx->pc = 0x14f988u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x14f98c: 0x1560ffc5  bnez        $t3, . + 4 + (-0x3B << 2)
    ctx->pc = 0x14F98Cu;
    {
        const bool branch_taken_0x14f98c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f98c) {
            ctx->pc = 0x14F8A4u;
            return;
        }
    }
    ctx->pc = 0x14F994u;
    // 0x14f994: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14f994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f998: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14f998u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f99c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f99cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f9a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f9a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x14F9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9A8u;
        // 0x14f9ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F9B0u;
}
