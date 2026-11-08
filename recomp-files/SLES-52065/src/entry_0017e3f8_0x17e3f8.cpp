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

// Function: entry_0017e3f8
// Address: 0x17e3f8 - 0x17e400
void entry_0017e3f8_0x17e3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e3f8_0x17e3f8");
#endif

    ctx->pc = 0x17e3f8u;

    // 0x17e3f8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x17E3F8u;
    {
        const bool branch_taken_0x17e3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3F8u;
        // 0x17e3fc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3f8) {
            ctx->pc = 0x17E498u;
            return;
        }
    }
    ctx->pc = 0x17E400u;
}
