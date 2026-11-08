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

// Function: entry_00107bd8
// Address: 0x107bd8 - 0x107c14
void entry_00107bd8_0x107bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107bd8_0x107bd8");
#endif

    ctx->pc = 0x107bd8u;

    // 0x107bd8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x107bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x107bdc: 0x29030018  slti        $v1, $t0, 0x18
    ctx->pc = 0x107bdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x107be0: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x107BE0u;
    {
        const bool branch_taken_0x107be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BE0u;
        // 0x107be4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107be0) {
            ctx->pc = 0x107B88u;
            return;
        }
    }
    ctx->pc = 0x107BE8u;
    // 0x107be8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x107be8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x107bec: 0x29c30002  slti        $v1, $t6, 0x2
    ctx->pc = 0x107becu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x107bf0: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x107BF0u;
    {
        const bool branch_taken_0x107bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BF0u;
        // 0x107bf4: 0x254a0024  addiu       $t2, $t2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bf0) {
            ctx->pc = 0x107B7Cu;
            return;
        }
    }
    ctx->pc = 0x107BF8u;
    // 0x107bf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x107bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107bfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x107bfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107c00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x107c00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x107c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x107c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x107C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C0Cu;
        // 0x107c10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107C14u;
}
