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

// Function: entry_001862cc
// Address: 0x1862cc - 0x1862e4
void entry_001862cc_0x1862cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001862cc_0x1862cc");
#endif

    ctx->pc = 0x1862ccu;

    // 0x1862cc: 0x0  nop
    ctx->pc = 0x1862ccu;
    // NOP
    // 0x1862d0: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1862d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1862d4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1862d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1862d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1862d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1862dc: 0xc440fff4  lwc1        $f0, -0xC($v0)
    ctx->pc = 0x1862dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1862e0: 0x0  nop
    ctx->pc = 0x1862e0u;
    // NOP
    ctx->pc = 0x1862e4u;
}
