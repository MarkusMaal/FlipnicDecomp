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

// Function: entry_00169164
// Address: 0x169164 - 0x169170
void entry_00169164_0x169164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169164_0x169164");
#endif

    ctx->pc = 0x169164u;

    // 0x169164: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x169164u;
    {
        const bool branch_taken_0x169164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169164) {
            ctx->pc = 0x169170u;
            return;
        }
    }
    ctx->pc = 0x16916Cu;
    // 0x16916c: 0xae050220  sw          $a1, 0x220($s0)
    ctx->pc = 0x16916cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 5));
    ctx->pc = 0x169170u;
}
