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

// Function: entry_00108e84
// Address: 0x108e84 - 0x108e9c
void entry_00108e84_0x108e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108e84_0x108e84");
#endif

    ctx->pc = 0x108e84u;

    // 0x108e84: 0xa61201ec  sh          $s2, 0x1EC($s0)
    ctx->pc = 0x108e84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 18));
    // 0x108e88: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x108e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x108e8c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x108E8Cu;
    {
        const bool branch_taken_0x108e8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x108E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E8Cu;
        // 0x108e90: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e8c) {
            ctx->pc = 0x108E9Cu;
            return;
        }
    }
    ctx->pc = 0x108E94u;
    // 0x108e94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x108E94u;
    {
        const bool branch_taken_0x108e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E94u;
        // 0x108e98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108e94) {
            ctx->pc = 0x108EB4u;
            return;
        }
    }
    ctx->pc = 0x108E9Cu;
}
