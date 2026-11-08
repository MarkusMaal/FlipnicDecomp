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

// Function: entry_001612d8
// Address: 0x1612d8 - 0x1612e0
void entry_001612d8_0x1612d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001612d8_0x1612d8");
#endif

    ctx->pc = 0x1612d8u;

    // 0x1612d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1612D8u;
    {
        const bool branch_taken_0x1612d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1612DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612D8u;
        // 0x1612dc: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612d8) {
            ctx->pc = 0x161304u;
            return;
        }
    }
    ctx->pc = 0x1612E0u;
}
