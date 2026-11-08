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

// Function: entry_001af5a4
// Address: 0x1af5a4 - 0x1af5bc
void entry_001af5a4_0x1af5a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af5a4_0x1af5a4");
#endif

    ctx->pc = 0x1af5a4u;

    // 0x1af5a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1af5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1af5a8: 0x920328f8  lbu         $v1, 0x28F8($s0)
    ctx->pc = 0x1af5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10488)));
    // 0x1af5ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF5ACu;
    {
        const bool branch_taken_0x1af5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af5ac) {
            ctx->pc = 0x1AF5BCu;
            return;
        }
    }
    ctx->pc = 0x1AF5B4u;
    // 0x1af5b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF5B4u;
    {
        const bool branch_taken_0x1af5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5B4u;
        // 0x1af5b8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5b4) {
            ctx->pc = 0x1AF5C0u;
            return;
        }
    }
    ctx->pc = 0x1AF5BCu;
}
