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

// Function: entry_0017e878
// Address: 0x17e878 - 0x17e880
void entry_0017e878_0x17e878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e878_0x17e878");
#endif

    ctx->pc = 0x17e878u;

    // 0x17e878: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17E878u;
    {
        const bool branch_taken_0x17e878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E878u;
        // 0x17e87c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e878) {
            ctx->pc = 0x17E8D0u;
            return;
        }
    }
    ctx->pc = 0x17E880u;
}
