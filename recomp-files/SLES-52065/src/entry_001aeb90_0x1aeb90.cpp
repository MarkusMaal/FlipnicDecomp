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

// Function: entry_001aeb90
// Address: 0x1aeb90 - 0x1aeba8
void entry_001aeb90_0x1aeb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aeb90_0x1aeb90");
#endif

    switch (ctx->pc) {
        case 0x1aeba0u: goto label_1aeba0;
        default: break;
    }

    ctx->pc = 0x1aeb90u;

    // 0x1aeb90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aeb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb94: 0xa28206b9  sb          $v0, 0x6B9($s4)
    ctx->pc = 0x1aeb94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1721), (uint8_t)GPR_U32(ctx, 2));
    // 0x1aeb98: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AEB98u;
    SET_GPR_U32(ctx, 31, 0x1AEBA0u);
    ctx->pc = 0x1AEB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB98u;
    // 0x1aeb9c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AEB98u, 0x1AEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBA0u;
label_1aeba0:
    // 0x1aeba0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1AEBA0u;
    {
        const bool branch_taken_0x1aeba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aeba0) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AEBA8u;
}
