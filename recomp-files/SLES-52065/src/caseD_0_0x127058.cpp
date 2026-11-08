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

// Function: caseD_0
// Address: 0x127058 - 0x127060
void caseD_0_0x127058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x127058");
#endif

    ctx->pc = 0x127058u;

    // 0x127058: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x127058u;
    {
        const bool branch_taken_0x127058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127058u;
        // 0x12705c: 0xe7b700c0  swc1        $f23, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127058) {
            ctx->pc = 0x127094u;
            return;
        }
    }
    ctx->pc = 0x127060u;
}
