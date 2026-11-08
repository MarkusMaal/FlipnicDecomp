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

// Function: entry_00186268
// Address: 0x186268 - 0x18627c
void entry_00186268_0x186268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186268_0x186268");
#endif

    ctx->pc = 0x186268u;

    // 0x186268: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x186268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x18626c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18626cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x186270: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x186270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x186274: 0xc454fff4  lwc1        $f20, -0xC($v0)
    ctx->pc = 0x186274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186278: 0xe4740010  swc1        $f20, 0x10($v1)
    ctx->pc = 0x186278u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->pc = 0x18627cu;
}
