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

// Function: entry_001d1910
// Address: 0x1d1910 - 0x1d1934
void entry_001d1910_0x1d1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1910_0x1d1910");
#endif

    ctx->pc = 0x1d1910u;

    // 0x1d1910: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1d1910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1d1914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1918: 0xa08201e0  sb          $v0, 0x1E0($a0)
    ctx->pc = 0x1d1918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 480), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d191c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d191cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1920: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d1920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d1924: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1928: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d192c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D192Cu;
    {
        const bool branch_taken_0x1d192c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D192Cu;
        // 0x1d1930: 0xac650020  sw          $a1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d192c) {
            ctx->pc = 0x1D194Cu;
            return;
        }
    }
    ctx->pc = 0x1D1934u;
}
