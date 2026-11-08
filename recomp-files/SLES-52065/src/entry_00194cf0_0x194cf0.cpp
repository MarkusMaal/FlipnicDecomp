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

// Function: entry_00194cf0
// Address: 0x194cf0 - 0x194cf8
void entry_00194cf0_0x194cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194cf0_0x194cf0");
#endif

    ctx->pc = 0x194cf0u;

    // 0x194cf0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x194CF0u;
    {
        const bool branch_taken_0x194cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CF0u;
        // 0x194cf4: 0xac510328  sw          $s1, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194cf0) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194CF8u;
}
