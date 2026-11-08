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

// Function: entry_001c5428
// Address: 0x1c5428 - 0x1c5438
void entry_001c5428_0x1c5428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5428_0x1c5428");
#endif

    ctx->pc = 0x1c5428u;

    // 0x1c5428: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1c5428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c542c: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x1c542cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x1c5430: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1C5430u;
    {
        const bool branch_taken_0x1c5430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5430u;
        // 0x1c5434: 0xae04006c  sw          $a0, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5430) {
            ctx->pc = 0x1C5510u;
            return;
        }
    }
    ctx->pc = 0x1C5438u;
}
