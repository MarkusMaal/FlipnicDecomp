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

// Function: entry_00194d88
// Address: 0x194d88 - 0x194da4
void entry_00194d88_0x194d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194d88_0x194d88");
#endif

    ctx->pc = 0x194d88u;

    // 0x194d88: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x194d88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194d8c: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x194D8Cu;
    {
        const bool branch_taken_0x194d8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d8c) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194D94u;
    // 0x194d94: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x194D94u;
    {
        const bool branch_taken_0x194d94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x194d94) {
            ctx->pc = 0x194DA4u;
            return;
        }
    }
    ctx->pc = 0x194D9Cu;
    // 0x194d9c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x194D9Cu;
    {
        const bool branch_taken_0x194d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D9Cu;
        // 0x194da0: 0xac51032c  sw          $s1, 0x32C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 812), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d9c) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194DA4u;
}
