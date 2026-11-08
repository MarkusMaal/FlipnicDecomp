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

// Function: entry_001e4a58
// Address: 0x1e4a58 - 0x1e4a70
void entry_001e4a58_0x1e4a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4a58_0x1e4a58");
#endif

    ctx->pc = 0x1e4a58u;

    // 0x1e4a58: 0xa2220050  sb          $v0, 0x50($s1)
    ctx->pc = 0x1e4a58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e4a5c: 0x92220051  lbu         $v0, 0x51($s1)
    ctx->pc = 0x1e4a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 81)));
    // 0x1e4a60: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1E4A60u;
    {
        const bool branch_taken_0x1e4a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a60) {
            ctx->pc = 0x1E4CC8u;
            return;
        }
    }
    ctx->pc = 0x1E4A68u;
    // 0x1e4a68: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1E4A68u;
    {
        const bool branch_taken_0x1e4a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A68u;
        // 0x1e4a6c: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a68) {
            ctx->pc = 0x1E4BA8u;
            return;
        }
    }
    ctx->pc = 0x1E4A70u;
}
