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

// Function: entry_0017e528
// Address: 0x17e528 - 0x17e530
void entry_0017e528_0x17e528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e528_0x17e528");
#endif

    ctx->pc = 0x17e528u;

    // 0x17e528: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x17E528u;
    {
        const bool branch_taken_0x17e528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E528u;
        // 0x17e52c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e528) {
            ctx->pc = 0x17E5C0u;
            return;
        }
    }
    ctx->pc = 0x17E530u;
}
