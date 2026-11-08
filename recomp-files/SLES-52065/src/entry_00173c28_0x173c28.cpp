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

// Function: entry_00173c28
// Address: 0x173c28 - 0x173c34
void entry_00173c28_0x173c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173c28_0x173c28");
#endif

    ctx->pc = 0x173c28u;

    // 0x173c28: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x173c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x173c2c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x173C2Cu;
    {
        const bool branch_taken_0x173c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C2Cu;
        // 0x173c30: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c2c) {
            ctx->pc = 0x173CE4u;
            return;
        }
    }
    ctx->pc = 0x173C34u;
}
