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

// Function: entry_0019caac
// Address: 0x19caac - 0x19cab4
void entry_0019caac_0x19caac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019caac_0x19caac");
#endif

    ctx->pc = 0x19caacu;

    // 0x19caac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x19CAACu;
    {
        const bool branch_taken_0x19caac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAACu;
        // 0x19cab0: 0xae40068c  sw          $zero, 0x68C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19caac) {
            ctx->pc = 0x19CB7Cu;
            return;
        }
    }
    ctx->pc = 0x19CAB4u;
}
