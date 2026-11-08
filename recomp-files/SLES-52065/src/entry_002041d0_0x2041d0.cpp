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

// Function: entry_002041d0
// Address: 0x2041d0 - 0x2041e0
void entry_002041d0_0x2041d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002041d0_0x2041d0");
#endif

    ctx->pc = 0x2041d0u;

    // 0x2041d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2041D0u;
    {
        const bool branch_taken_0x2041d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041D0u;
        // 0x2041d4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041d0) {
            ctx->pc = 0x2041E0u;
            return;
        }
    }
    ctx->pc = 0x2041D8u;
    // 0x2041d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2041D8u;
    {
        const bool branch_taken_0x2041d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2041D8u;
        // 0x2041dc: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041d8) {
            ctx->pc = 0x2041E4u;
            return;
        }
    }
    ctx->pc = 0x2041E0u;
}
