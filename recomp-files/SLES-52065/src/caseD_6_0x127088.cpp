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

// Function: caseD_6
// Address: 0x127088 - 0x127090
void caseD_6_0x127088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x127088");
#endif

    ctx->pc = 0x127088u;

    // 0x127088: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127088u;
    {
        const bool branch_taken_0x127088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127088u;
        // 0x12708c: 0xe6f70000  swc1        $f23, 0x0($s7) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x127088) {
            ctx->pc = 0x127094u;
            return;
        }
    }
    ctx->pc = 0x127090u;
}
