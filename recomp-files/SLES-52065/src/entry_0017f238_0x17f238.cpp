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

// Function: entry_0017f238
// Address: 0x17f238 - 0x17f26c
void entry_0017f238_0x17f238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f238_0x17f238");
#endif

    ctx->pc = 0x17f238u;

    // 0x17f238: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17f238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17f23c: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x17f23cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x17f240: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x17F240u;
    {
        const bool branch_taken_0x17f240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f240) {
            ctx->pc = 0x17F184u;
            return;
        }
    }
    ctx->pc = 0x17F248u;
    // 0x17f248: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17f248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17f24c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17f24cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f250: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17f250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f254: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17f254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f258: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f25c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f264: 0x3e00008  jr          $ra
    ctx->pc = 0x17F264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F264u;
        // 0x17f268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F26Cu;
}
