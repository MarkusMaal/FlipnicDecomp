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

// Function: entry_001fe7ec
// Address: 0x1fe7ec - 0x1fe7f8
void entry_001fe7ec_0x1fe7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe7ec_0x1fe7ec");
#endif

    ctx->pc = 0x1fe7ecu;

    // 0x1fe7ec: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1fe7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1fe7f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE7F0u;
    {
        const bool branch_taken_0x1fe7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7F0u;
        // 0x1fe7f4: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe7f0) {
            ctx->pc = 0x1FE7FCu;
            return;
        }
    }
    ctx->pc = 0x1FE7F8u;
}
