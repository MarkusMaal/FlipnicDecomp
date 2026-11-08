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

// Function: entry_0017e984
// Address: 0x17e984 - 0x17e998
void entry_0017e984_0x17e984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e984_0x17e984");
#endif

    ctx->pc = 0x17e984u;

    // 0x17e984: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e988: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E988u;
    {
        const bool branch_taken_0x17e988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E988u;
        // 0x17e98c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e988) {
            ctx->pc = 0x17E998u;
            return;
        }
    }
    ctx->pc = 0x17E990u;
    // 0x17e990: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17E990u;
    {
        const bool branch_taken_0x17e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E990u;
        // 0x17e994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e990) {
            ctx->pc = 0x17E9A0u;
            return;
        }
    }
    ctx->pc = 0x17E998u;
}
