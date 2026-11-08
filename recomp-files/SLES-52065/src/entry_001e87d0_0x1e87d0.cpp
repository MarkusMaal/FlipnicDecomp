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

// Function: entry_001e87d0
// Address: 0x1e87d0 - 0x1e87e4
void entry_001e87d0_0x1e87d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e87d0_0x1e87d0");
#endif

    ctx->pc = 0x1e87d0u;

    // 0x1e87d0: 0x80430005  lb          $v1, 0x5($v0)
    ctx->pc = 0x1e87d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x1e87d4: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x1e87d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e87d8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1e87d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e87dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e87e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e87e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x1e87e4u;
}
