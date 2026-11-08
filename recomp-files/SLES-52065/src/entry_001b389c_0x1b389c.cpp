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

// Function: entry_001b389c
// Address: 0x1b389c - 0x1b38d8
void entry_001b389c_0x1b389c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b389c_0x1b389c");
#endif

    ctx->pc = 0x1b389cu;

label_1b389c:
    // 0x1b389c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1b389cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1b38a0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1b38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1b38a4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1b38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1b38a8: 0xa0600010  sb          $zero, 0x10($v1)
    ctx->pc = 0x1b38a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b38ac: 0xa0600031  sb          $zero, 0x31($v1)
    ctx->pc = 0x1b38acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b38b0: 0xa0600030  sb          $zero, 0x30($v1)
    ctx->pc = 0x1b38b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b38b4: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x1b38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x1b38b8: 0x248210c8  addiu       $v0, $a0, 0x10C8
    ctx->pc = 0x1b38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    // 0x1b38bc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1b38bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b38c0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B38C0u;
    {
        const bool branch_taken_0x1b38c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b38c0) {
            ctx->pc = 0x1B389Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b389c;
        }
    }
    ctx->pc = 0x1B38C8u;
    // 0x1b38c8: 0xac802780  sw          $zero, 0x2780($a0)
    ctx->pc = 0x1b38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10112), GPR_U32(ctx, 0));
    // 0x1b38cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b38ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b38d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B38D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B38D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B38D8u;
}
