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

// Function: entry_001820c4
// Address: 0x1820c4 - 0x1820d0
void entry_001820c4_0x1820c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001820c4_0x1820c4");
#endif

    ctx->pc = 0x1820c4u;

    // 0x1820c4: 0xaf808660  sw          $zero, -0x79A0($gp)
    ctx->pc = 0x1820c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 0));
    // 0x1820c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1820C8u;
    {
        const bool branch_taken_0x1820c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1820CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820C8u;
        // 0x1820cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820c8) {
            ctx->pc = 0x1820D8u;
            return;
        }
    }
    ctx->pc = 0x1820D0u;
}
