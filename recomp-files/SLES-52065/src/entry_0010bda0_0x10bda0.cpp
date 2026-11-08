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

// Function: entry_0010bda0
// Address: 0x10bda0 - 0x10bdac
void entry_0010bda0_0x10bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bda0_0x10bda0");
#endif

    ctx->pc = 0x10bda0u;

    // 0x10bda0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10BDA0u;
    {
        const bool branch_taken_0x10bda0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bda0) {
            ctx->pc = 0x10BDACu;
            return;
        }
    }
    ctx->pc = 0x10BDA8u;
    // 0x10bda8: 0xae93231c  sw          $s3, 0x231C($s4)
    ctx->pc = 0x10bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8988), GPR_U32(ctx, 19));
    ctx->pc = 0x10bdacu;
}
