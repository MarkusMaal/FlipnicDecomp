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

// Function: entry_001589cc
// Address: 0x1589cc - 0x1589e4
void entry_001589cc_0x1589cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001589cc_0x1589cc");
#endif

    ctx->pc = 0x1589ccu;

    // 0x1589cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1589ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1589d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1589d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1589d4: 0xe44c00b0  swc1        $f12, 0xB0($v0)
    ctx->pc = 0x1589d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x1589d8: 0xe44d00b4  swc1        $f13, 0xB4($v0)
    ctx->pc = 0x1589d8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x1589dc: 0xe44e00b8  swc1        $f14, 0xB8($v0)
    ctx->pc = 0x1589dcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x1589e0: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x1589e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
    ctx->pc = 0x1589e4u;
}
