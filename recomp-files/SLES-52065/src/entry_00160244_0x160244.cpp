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

// Function: entry_00160244
// Address: 0x160244 - 0x160270
void entry_00160244_0x160244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160244_0x160244");
#endif

    ctx->pc = 0x160244u;

    // 0x160244: 0x0  nop
    ctx->pc = 0x160244u;
    // NOP
    // 0x160248: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16024c: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x16024cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x160250: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x160250u;
    {
        const bool branch_taken_0x160250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160250u;
        // 0x160254: 0x265203d0  addiu       $s2, $s2, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160250) {
            ctx->pc = 0x160220u;
            return;
        }
    }
    ctx->pc = 0x160258u;
    // 0x160258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x160258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16025c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16025cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160268: 0x3e00008  jr          $ra
    ctx->pc = 0x160268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160268u;
        // 0x16026c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160270u;
}
