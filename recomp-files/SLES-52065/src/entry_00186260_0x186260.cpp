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

// Function: entry_00186260
// Address: 0x186260 - 0x186268
void entry_00186260_0x186260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186260_0x186260");
#endif

    ctx->pc = 0x186260u;

    // 0x186260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x186260u;
    {
        const bool branch_taken_0x186260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186260u;
        // 0x186264: 0xc4740010  lwc1        $f20, 0x10($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186260) {
            ctx->pc = 0x18627Cu;
            return;
        }
    }
    ctx->pc = 0x186268u;
}
