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

// Function: entry_00194038
// Address: 0x194038 - 0x194040
void entry_00194038_0x194038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194038_0x194038");
#endif

    ctx->pc = 0x194038u;

    // 0x194038: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194038u;
    {
        const bool branch_taken_0x194038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194038u;
        // 0x19403c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194038) {
            ctx->pc = 0x194044u;
            return;
        }
    }
    ctx->pc = 0x194040u;
}
