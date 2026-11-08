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

// Function: entry_00173068
// Address: 0x173068 - 0x17308c
void entry_00173068_0x173068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173068_0x173068");
#endif

    ctx->pc = 0x173068u;

    // 0x173068: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x173068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17306c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17306cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173070: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x173070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x173074: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x173074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x173078: 0x8e226020  lw          $v0, 0x6020($s1)
    ctx->pc = 0x173078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24608)));
    // 0x17307c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17307Cu;
    {
        const bool branch_taken_0x17307c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17307c) {
            ctx->pc = 0x17308Cu;
            return;
        }
    }
    ctx->pc = 0x173084u;
    // 0x173084: 0x8e224028  lw          $v0, 0x4028($s1)
    ctx->pc = 0x173084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16424)));
    // 0x173088: 0xa04001d3  sb          $zero, 0x1D3($v0)
    ctx->pc = 0x173088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x17308cu;
}
