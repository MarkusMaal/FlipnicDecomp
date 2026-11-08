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

// Function: entry_00166210
// Address: 0x166210 - 0x166218
void entry_00166210_0x166210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166210_0x166210");
#endif

    ctx->pc = 0x166210u;

    // 0x166210: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x166210u;
    {
        const bool branch_taken_0x166210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166210u;
        // 0x166214: 0xa6000224  sh          $zero, 0x224($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 548), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166210) {
            ctx->pc = 0x166270u;
            return;
        }
    }
    ctx->pc = 0x166218u;
}
