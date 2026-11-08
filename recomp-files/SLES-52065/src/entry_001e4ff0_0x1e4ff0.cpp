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

// Function: entry_001e4ff0
// Address: 0x1e4ff0 - 0x1e5008
void entry_001e4ff0_0x1e4ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4ff0_0x1e4ff0");
#endif

    ctx->pc = 0x1e4ff0u;

    // 0x1e4ff0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e4ff4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e4ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e4ff8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1e4ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4ffc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1e4ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1e5000: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1E5000u;
    {
        const bool branch_taken_0x1e5000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5000u;
        // 0x1e5004: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5000) {
            ctx->pc = 0x1E50BCu;
            return;
        }
    }
    ctx->pc = 0x1E5008u;
}
