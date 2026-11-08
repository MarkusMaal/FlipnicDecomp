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

// Function: entry_001a5518
// Address: 0x1a5518 - 0x1a5524
void entry_001a5518_0x1a5518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5518_0x1a5518");
#endif

    ctx->pc = 0x1a5518u;

    // 0x1a5518: 0xae00074c  sw          $zero, 0x74C($s0)
    ctx->pc = 0x1a5518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1868), GPR_U32(ctx, 0));
    // 0x1a551c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1A551Cu;
    {
        const bool branch_taken_0x1a551c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A551Cu;
        // 0x1a5520: 0xae03073c  sw          $v1, 0x73C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a551c) {
            ctx->pc = 0x1A55D8u;
            return;
        }
    }
    ctx->pc = 0x1A5524u;
}
