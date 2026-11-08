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

// Function: entry_0016e800
// Address: 0x16e800 - 0x16e808
void entry_0016e800_0x16e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e800_0x16e800");
#endif

    ctx->pc = 0x16e800u;

    // 0x16e800: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16E800u;
    {
        const bool branch_taken_0x16e800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E800u;
        // 0x16e804: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e800) {
            ctx->pc = 0x16E824u;
            return;
        }
    }
    ctx->pc = 0x16E808u;
}
