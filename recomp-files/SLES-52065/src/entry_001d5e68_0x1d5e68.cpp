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

// Function: entry_001d5e68
// Address: 0x1d5e68 - 0x1d5e88
void entry_001d5e68_0x1d5e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5e68_0x1d5e68");
#endif

    ctx->pc = 0x1d5e68u;

    // 0x1d5e68: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5e6c: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5e70: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d5e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5e74: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1d5e74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d5e78: 0xac320570  sw          $s2, 0x570($at)
    ctx->pc = 0x1d5e78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1392), GPR_U32(ctx, 18));
    // 0x1d5e7c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x1D5E7Cu;
    {
        const bool branch_taken_0x1d5e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e7c) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5E84u;
    // 0x1d5e84: 0x0  nop
    ctx->pc = 0x1d5e84u;
    // NOP
    ctx->pc = 0x1d5e88u;
}
