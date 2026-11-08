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

// Function: entry_001e3740
// Address: 0x1e3740 - 0x1e3760
void entry_001e3740_0x1e3740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3740_0x1e3740");
#endif

    ctx->pc = 0x1e3740u;

    // 0x1e3740: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e3740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1e3744: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3744u;
    {
        const bool branch_taken_0x1e3744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3744u;
        // 0x1e3748: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3744) {
            ctx->pc = 0x1E3760u;
            return;
        }
    }
    ctx->pc = 0x1E374Cu;
    // 0x1e374c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E374Cu;
    {
        const bool branch_taken_0x1e374c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e374c) {
            ctx->pc = 0x1E3770u;
            return;
        }
    }
    ctx->pc = 0x1E3754u;
    // 0x1e3754: 0x1e800006  bgtz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3754u;
    {
        const bool branch_taken_0x1e3754 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x1e3754) {
            ctx->pc = 0x1E3770u;
            return;
        }
    }
    ctx->pc = 0x1E375Cu;
    // 0x1e375c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e375cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1e3760u;
}
