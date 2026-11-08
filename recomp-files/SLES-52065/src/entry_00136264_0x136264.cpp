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

// Function: entry_00136264
// Address: 0x136264 - 0x136274
void entry_00136264_0x136264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136264_0x136264");
#endif

    ctx->pc = 0x136264u;

    // 0x136264: 0x0  nop
    ctx->pc = 0x136264u;
    // NOP
    // 0x136268: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x136268u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13626c: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x13626Cu;
    {
        const bool branch_taken_0x13626c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13626Cu;
        // 0x136270: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13626c) {
            ctx->pc = 0x136340u;
            return;
        }
    }
    ctx->pc = 0x136274u;
}
