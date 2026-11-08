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

// Function: entry_001780a8
// Address: 0x1780a8 - 0x1780cc
void entry_001780a8_0x1780a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001780a8_0x1780a8");
#endif

    ctx->pc = 0x1780a8u;

    // 0x1780a8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1780a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1780ac: 0x3c04c0f0  lui         $a0, 0xC0F0
    ctx->pc = 0x1780acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49392 << 16));
    // 0x1780b0: 0xe64c001c  swc1        $f12, 0x1C($s2)
    ctx->pc = 0x1780b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1780b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1780b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1780b8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1780b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1780bc: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x1780bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
    // 0x1780c0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x1780c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x1780c4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1780c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1780c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1780c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x1780ccu;
}
