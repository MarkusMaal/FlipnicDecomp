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

// Function: entry_00203d58
// Address: 0x203d58 - 0x203d80
void entry_00203d58_0x203d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203d58_0x203d58");
#endif

    ctx->pc = 0x203d58u;

label_203d58:
    // 0x203d58: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x203d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x203d5c: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x203d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x203d60: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x203d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x203d64: 0x80570000  lb          $s7, 0x0($v0)
    ctx->pc = 0x203d64u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x203d68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x203d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x203d6c: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x203d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x203d70: 0x26e2ffd0  addiu       $v0, $s7, -0x30
    ctx->pc = 0x203d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967248));
    // 0x203d74: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x203d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x203d78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x203D78u;
    {
        const bool branch_taken_0x203d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D78u;
        // 0x203d7c: 0x2031018  mult        $v0, $s0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d78) {
            ctx->pc = 0x203D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203d58;
        }
    }
    ctx->pc = 0x203D80u;
}
