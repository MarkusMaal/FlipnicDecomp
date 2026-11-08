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

// Function: caseD_3
// Address: 0x127070 - 0x127078
void caseD_3_0x127070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x127070");
#endif

    ctx->pc = 0x127070u;

    // 0x127070: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x127070u;
    {
        const bool branch_taken_0x127070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127070u;
        // 0x127074: 0xe7d70000  swc1        $f23, 0x0($fp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127070) {
            ctx->pc = 0x127094u;
            return;
        }
    }
    ctx->pc = 0x127078u;
}
