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

// Function: entry_001d5f54
// Address: 0x1d5f54 - 0x1d5f68
void entry_001d5f54_0x1d5f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5f54_0x1d5f54");
#endif

    ctx->pc = 0x1d5f54u;

    // 0x1d5f54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f58: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5f5c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d5f60: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x1d5f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x1d5f64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1d5f68u;
}
