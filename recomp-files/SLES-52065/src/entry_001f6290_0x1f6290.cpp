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

// Function: entry_001f6290
// Address: 0x1f6290 - 0x1f62a0
void entry_001f6290_0x1f6290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6290_0x1f6290");
#endif

    ctx->pc = 0x1f6290u;

    // 0x1f6290: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1f6290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f6294: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f6294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6298: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F6298u;
    {
        const bool branch_taken_0x1f6298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6298u;
        // 0x1f629c: 0x90620031  lbu         $v0, 0x31($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6298) {
            ctx->pc = 0x1F62C4u;
            return;
        }
    }
    ctx->pc = 0x1F62A0u;
}
