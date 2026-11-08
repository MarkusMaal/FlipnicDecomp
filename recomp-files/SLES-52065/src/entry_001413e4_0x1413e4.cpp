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

// Function: entry_001413e4
// Address: 0x1413e4 - 0x1413f8
void entry_001413e4_0x1413e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001413e4_0x1413e4");
#endif

    ctx->pc = 0x1413e4u;

    // 0x1413e4: 0x0  nop
    ctx->pc = 0x1413e4u;
    // NOP
    // 0x1413e8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1413e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1413ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1413ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1413f0: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1413F0u;
    {
        const bool branch_taken_0x1413f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1413F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1413F0u;
        // 0x1413f4: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1413f0) {
            ctx->pc = 0x14168Cu;
            return;
        }
    }
    ctx->pc = 0x1413F8u;
}
