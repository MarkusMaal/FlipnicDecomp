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

// Function: entry_001c18b4
// Address: 0x1c18b4 - 0x1c18bc
void entry_001c18b4_0x1c18b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c18b4_0x1c18b4");
#endif

    ctx->pc = 0x1c18b4u;

    // 0x1c18b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C18B4u;
    {
        const bool branch_taken_0x1c18b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18B4u;
        // 0x1c18b8: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18b4) {
            ctx->pc = 0x1C18C0u;
            return;
        }
    }
    ctx->pc = 0x1C18BCu;
}
