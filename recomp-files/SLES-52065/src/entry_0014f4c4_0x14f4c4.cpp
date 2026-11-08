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

// Function: entry_0014f4c4
// Address: 0x14f4c4 - 0x14f4cc
void entry_0014f4c4_0x14f4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f4c4_0x14f4c4");
#endif

    ctx->pc = 0x14f4c4u;

    // 0x14f4c4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14F4C4u;
    {
        const bool branch_taken_0x14f4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4C4u;
        // 0x14f4c8: 0xe6010050  swc1        $f1, 0x50($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4c4) {
            ctx->pc = 0x14F538u;
            return;
        }
    }
    ctx->pc = 0x14F4CCu;
}
