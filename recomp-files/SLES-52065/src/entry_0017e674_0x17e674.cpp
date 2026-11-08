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

// Function: entry_0017e674
// Address: 0x17e674 - 0x17e688
void entry_0017e674_0x17e674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e674_0x17e674");
#endif

    ctx->pc = 0x17e674u;

    // 0x17e674: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e678: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E678u;
    {
        const bool branch_taken_0x17e678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E678u;
        // 0x17e67c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e678) {
            ctx->pc = 0x17E688u;
            return;
        }
    }
    ctx->pc = 0x17E680u;
    // 0x17e680: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x17E680u;
    {
        const bool branch_taken_0x17e680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E680u;
        // 0x17e684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e680) {
            ctx->pc = 0x17E6DCu;
            return;
        }
    }
    ctx->pc = 0x17E688u;
}
