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

// Function: caseD_2
// Address: 0x127068 - 0x127070
void caseD_2_0x127068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x127068");
#endif

    ctx->pc = 0x127068u;

    // 0x127068: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x127068u;
    {
        const bool branch_taken_0x127068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127068u;
        // 0x12706c: 0xe7b700c8  swc1        $f23, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127068) {
            ctx->pc = 0x127094u;
            return;
        }
    }
    ctx->pc = 0x127070u;
}
