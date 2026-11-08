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

// Function: entry_0018b11c
// Address: 0x18b11c - 0x18b154
void entry_0018b11c_0x18b11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b11c_0x18b11c");
#endif

    ctx->pc = 0x18b11cu;

    // 0x18b11c: 0x0  nop
    ctx->pc = 0x18b11cu;
    // NOP
    // 0x18b120: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b124: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x18b124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b128: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x18b128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x18b12c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18B12Cu;
    {
        const bool branch_taken_0x18b12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B12Cu;
        // 0x18b130: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b12c) {
            ctx->pc = 0x18B0F0u;
            return;
        }
    }
    ctx->pc = 0x18B134u;
    // 0x18b134: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18b134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b138: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b13c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b14c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B14Cu;
        // 0x18b150: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B154u;
}
