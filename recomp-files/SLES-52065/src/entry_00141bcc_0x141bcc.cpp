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

// Function: entry_00141bcc
// Address: 0x141bcc - 0x141bd4
void entry_00141bcc_0x141bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141bcc_0x141bcc");
#endif

    ctx->pc = 0x141bccu;

    // 0x141bcc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x141BCCu;
    {
        const bool branch_taken_0x141bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BCCu;
        // 0x141bd0: 0xa223002a  sb          $v1, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bcc) {
            ctx->pc = 0x141C34u;
            return;
        }
    }
    ctx->pc = 0x141BD4u;
}
