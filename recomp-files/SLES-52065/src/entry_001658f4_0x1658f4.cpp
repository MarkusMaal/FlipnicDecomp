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

// Function: entry_001658f4
// Address: 0x1658f4 - 0x1658fc
void entry_001658f4_0x1658f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001658f4_0x1658f4");
#endif

    ctx->pc = 0x1658f4u;

    // 0x1658f4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1658F4u;
    {
        const bool branch_taken_0x1658f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1658F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658F4u;
        // 0x1658f8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658f4) {
            ctx->pc = 0x165A0Cu;
            return;
        }
    }
    ctx->pc = 0x1658FCu;
}
