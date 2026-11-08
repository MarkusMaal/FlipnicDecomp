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

// Function: entry_001fa9cc
// Address: 0x1fa9cc - 0x1fa9ec
void entry_001fa9cc_0x1fa9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa9cc_0x1fa9cc");
#endif

    ctx->pc = 0x1fa9ccu;

    // 0x1fa9cc: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FA9CCu;
    {
        const bool branch_taken_0x1fa9cc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1FA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9CCu;
        // 0x1fa9d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9cc) {
            ctx->pc = 0x1FAA1Cu;
            return;
        }
    }
    ctx->pc = 0x1FA9D4u;
    // 0x1fa9d4: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA9D4u;
    {
        const bool branch_taken_0x1fa9d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9D4u;
        // 0x1fa9d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9d4) {
            ctx->pc = 0x1FA9ECu;
            return;
        }
    }
    ctx->pc = 0x1FA9DCu;
    // 0x1fa9dc: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA9DCu;
    {
        const bool branch_taken_0x1fa9dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9DCu;
        // 0x1fa9e0: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa9dc) {
            ctx->pc = 0x1FAA04u;
            return;
        }
    }
    ctx->pc = 0x1FA9E4u;
    // 0x1fa9e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FA9E4u;
    {
        const bool branch_taken_0x1fa9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa9e4) {
            ctx->pc = 0x1FAA24u;
            return;
        }
    }
    ctx->pc = 0x1FA9ECu;
}
