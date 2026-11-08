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

// Function: entry_00208290
// Address: 0x208290 - 0x2082a4
void entry_00208290_0x208290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208290_0x208290");
#endif

    ctx->pc = 0x208290u;

    // 0x208290: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x208290u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x208294: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x208294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x208298: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x208298u;
    {
        const bool branch_taken_0x208298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208298u;
        // 0x20829c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208298) {
            ctx->pc = 0x208278u;
            return;
        }
    }
    ctx->pc = 0x2082A0u;
    // 0x2082a0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2082a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    ctx->pc = 0x2082a4u;
}
