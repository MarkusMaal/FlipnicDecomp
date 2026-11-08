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

// Function: entry_0011ca58
// Address: 0x11ca58 - 0x11ca70
void entry_0011ca58_0x11ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ca58_0x11ca58");
#endif

    ctx->pc = 0x11ca58u;

    // 0x11ca58: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x11ca58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x11ca5c: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x11ca5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x11ca60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CA60u;
    {
        const bool branch_taken_0x11ca60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ca60) {
            ctx->pc = 0x11CA70u;
            return;
        }
    }
    ctx->pc = 0x11CA68u;
    // 0x11ca68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CA68u;
    {
        const bool branch_taken_0x11ca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA68u;
        // 0x11ca6c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca68) {
            ctx->pc = 0x11CA74u;
            return;
        }
    }
    ctx->pc = 0x11CA70u;
}
