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

// Function: entry_00194f58
// Address: 0x194f58 - 0x194f78
void entry_00194f58_0x194f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194f58_0x194f58");
#endif

    ctx->pc = 0x194f58u;

    // 0x194f58: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x194f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194f5c: 0x8e830328  lw          $v1, 0x328($s4)
    ctx->pc = 0x194f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 808)));
    // 0x194f60: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x194f60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x194f64: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x194f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x194f68: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x194F68u;
    {
        const bool branch_taken_0x194f68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x194F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F68u;
        // 0x194f6c: 0x838818  mult        $s1, $a0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f68) {
            ctx->pc = 0x194F78u;
            return;
        }
    }
    ctx->pc = 0x194F70u;
    // 0x194f70: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x194F70u;
    {
        const bool branch_taken_0x194f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x194f70) {
            ctx->pc = 0x194FE4u;
            return;
        }
    }
    ctx->pc = 0x194F78u;
}
