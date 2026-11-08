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

// Function: entry_0012cf58
// Address: 0x12cf58 - 0x12cf60
void entry_0012cf58_0x12cf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cf58_0x12cf58");
#endif

    ctx->pc = 0x12cf58u;

    // 0x12cf58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12CF58u;
    {
        const bool branch_taken_0x12cf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF58u;
        // 0x12cf5c: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf58) {
            ctx->pc = 0x12CF9Cu;
            return;
        }
    }
    ctx->pc = 0x12CF60u;
}
