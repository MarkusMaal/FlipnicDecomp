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

// Function: entry_00168864
// Address: 0x168864 - 0x168874
void entry_00168864_0x168864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168864_0x168864");
#endif

    ctx->pc = 0x168864u;

    // 0x168864: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168864u;
    {
        const bool branch_taken_0x168864 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x168868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168864u;
        // 0x168868: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168864) {
            ctx->pc = 0x168874u;
            return;
        }
    }
    ctx->pc = 0x16886Cu;
    // 0x16886c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16886Cu;
    {
        const bool branch_taken_0x16886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16886c) {
            ctx->pc = 0x168898u;
            return;
        }
    }
    ctx->pc = 0x168874u;
}
