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

// Function: caseD_1
// Address: 0x127060 - 0x127068
void caseD_1_0x127060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x127060");
#endif

    ctx->pc = 0x127060u;

    // 0x127060: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x127060u;
    {
        const bool branch_taken_0x127060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127060u;
        // 0x127064: 0xe7b700c4  swc1        $f23, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127060) {
            ctx->pc = 0x127094u;
            return;
        }
    }
    ctx->pc = 0x127068u;
}
