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

// Function: entry_00173c18
// Address: 0x173c18 - 0x173c28
void entry_00173c18_0x173c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173c18_0x173c18");
#endif

    ctx->pc = 0x173c18u;

    // 0x173c18: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x173c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
    // 0x173c1c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x173c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x173c20: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x173C20u;
    {
        const bool branch_taken_0x173c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C20u;
        // 0x173c24: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c20) {
            ctx->pc = 0x173E20u;
            return;
        }
    }
    ctx->pc = 0x173C28u;
}
