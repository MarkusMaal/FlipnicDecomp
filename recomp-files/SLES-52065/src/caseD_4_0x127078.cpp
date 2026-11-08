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

// Function: caseD_4
// Address: 0x127078 - 0x127080
void caseD_4_0x127078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x127078");
#endif

    ctx->pc = 0x127078u;

    // 0x127078: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x127078u;
    {
        const bool branch_taken_0x127078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127078u;
        // 0x12707c: 0xe7b700d4  swc1        $f23, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127078) {
            ctx->pc = 0x127094u;
            return;
        }
    }
    ctx->pc = 0x127080u;
}
