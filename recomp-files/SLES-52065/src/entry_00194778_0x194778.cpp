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

// Function: entry_00194778
// Address: 0x194778 - 0x194780
void entry_00194778_0x194778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194778_0x194778");
#endif

    ctx->pc = 0x194778u;

    // 0x194778: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194778u;
    {
        const bool branch_taken_0x194778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194778u;
        // 0x19477c: 0xae910664  sw          $s1, 0x664($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1636), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194778) {
            ctx->pc = 0x194788u;
            return;
        }
    }
    ctx->pc = 0x194780u;
}
