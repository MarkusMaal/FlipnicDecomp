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

// Function: entry_00194d14
// Address: 0x194d14 - 0x194d20
void entry_00194d14_0x194d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194d14_0x194d14");
#endif

    ctx->pc = 0x194d14u;

    // 0x194d14: 0x0  nop
    ctx->pc = 0x194d14u;
    // NOP
    // 0x194d18: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x194D18u;
    {
        const bool branch_taken_0x194d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194D18u;
        // 0x194d1c: 0xac520328  sw          $s2, 0x328($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 808), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194d18) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194D20u;
}
