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

// Function: entry_001bafc8
// Address: 0x1bafc8 - 0x1bafd4
void entry_001bafc8_0x1bafc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bafc8_0x1bafc8");
#endif

    ctx->pc = 0x1bafc8u;

    // 0x1bafc8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1bafc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BAFCCu;
    {
        const bool branch_taken_0x1bafcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFCCu;
        // 0x1bafd0: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bafcc) {
            ctx->pc = 0x1BAFD8u;
            return;
        }
    }
    ctx->pc = 0x1BAFD4u;
}
