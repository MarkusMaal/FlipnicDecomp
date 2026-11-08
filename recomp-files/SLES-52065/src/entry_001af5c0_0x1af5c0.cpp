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

// Function: entry_001af5c0
// Address: 0x1af5c0 - 0x1af5d8
void entry_001af5c0_0x1af5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af5c0_0x1af5c0");
#endif

    ctx->pc = 0x1af5c0u;

    // 0x1af5c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1af5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1af5c4: 0x920328fc  lbu         $v1, 0x28FC($s0)
    ctx->pc = 0x1af5c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10492)));
    // 0x1af5c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF5C8u;
    {
        const bool branch_taken_0x1af5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af5c8) {
            ctx->pc = 0x1AF5D8u;
            return;
        }
    }
    ctx->pc = 0x1AF5D0u;
    // 0x1af5d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF5D0u;
    {
        const bool branch_taken_0x1af5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5D0u;
        // 0x1af5d4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5d0) {
            ctx->pc = 0x1AF5DCu;
            return;
        }
    }
    ctx->pc = 0x1AF5D8u;
}
