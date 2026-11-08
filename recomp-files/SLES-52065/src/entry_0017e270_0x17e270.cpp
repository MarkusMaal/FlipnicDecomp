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

// Function: entry_0017e270
// Address: 0x17e270 - 0x17e278
void entry_0017e270_0x17e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e270_0x17e270");
#endif

    ctx->pc = 0x17e270u;

    // 0x17e270: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17E270u;
    {
        const bool branch_taken_0x17e270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E270u;
        // 0x17e274: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e270) {
            ctx->pc = 0x17E2BCu;
            return;
        }
    }
    ctx->pc = 0x17E278u;
}
