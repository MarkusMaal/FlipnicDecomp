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

// Function: entry_0017e530
// Address: 0x17e530 - 0x17e544
void entry_0017e530_0x17e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e530_0x17e530");
#endif

    ctx->pc = 0x17e530u;

    // 0x17e530: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e534: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E534u;
    {
        const bool branch_taken_0x17e534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E534u;
        // 0x17e538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e534) {
            ctx->pc = 0x17E544u;
            return;
        }
    }
    ctx->pc = 0x17E53Cu;
    // 0x17e53c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E53Cu;
    {
        const bool branch_taken_0x17e53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E53Cu;
        // 0x17e540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e53c) {
            ctx->pc = 0x17E54Cu;
            return;
        }
    }
    ctx->pc = 0x17E544u;
}
