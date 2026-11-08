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

// Function: entry_0016a710
// Address: 0x16a710 - 0x16a720
void entry_0016a710_0x16a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a710_0x16a710");
#endif

    ctx->pc = 0x16a710u;

    // 0x16a710: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A710u;
    {
        const bool branch_taken_0x16a710 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a710) {
            ctx->pc = 0x16A720u;
            return;
        }
    }
    ctx->pc = 0x16A718u;
    // 0x16a718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A718u;
    {
        const bool branch_taken_0x16a718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A718u;
        // 0x16a71c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a718) {
            ctx->pc = 0x16A728u;
            return;
        }
    }
    ctx->pc = 0x16A720u;
}
