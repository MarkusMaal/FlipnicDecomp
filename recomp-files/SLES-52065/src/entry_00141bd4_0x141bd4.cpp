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

// Function: entry_00141bd4
// Address: 0x141bd4 - 0x141bdc
void entry_00141bd4_0x141bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141bd4_0x141bd4");
#endif

    ctx->pc = 0x141bd4u;

    // 0x141bd4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x141BD4u;
    {
        const bool branch_taken_0x141bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BD4u;
        // 0x141bd8: 0xa220002a  sb          $zero, 0x2A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bd4) {
            ctx->pc = 0x141C34u;
            return;
        }
    }
    ctx->pc = 0x141BDCu;
}
