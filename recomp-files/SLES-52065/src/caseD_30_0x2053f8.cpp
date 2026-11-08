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

// Function: caseD_30
// Address: 0x2053f8 - 0x20540c
void caseD_30_0x2053f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_30_0x2053f8");
#endif

    ctx->pc = 0x2053f8u;

    // 0x2053f8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2053f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2053fc: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x2053fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x205400: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x205400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x205404: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x205404u;
    {
        const bool branch_taken_0x205404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205404u;
        // 0x205408: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205404) {
            ctx->pc = 0x205348u;
            return;
        }
    }
    ctx->pc = 0x20540Cu;
}
