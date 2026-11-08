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

// Function: entry_0012d1b4
// Address: 0x12d1b4 - 0x12d1f0
void entry_0012d1b4_0x12d1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d1b4_0x12d1b4");
#endif

    ctx->pc = 0x12d1b4u;

    // 0x12d1b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d1b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d1b8: 0x0  nop
    ctx->pc = 0x12d1b8u;
    // NOP
    // 0x12d1bc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x12d1bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d1c0: 0x0  nop
    ctx->pc = 0x12d1c0u;
    // NOP
    // 0x12d1c4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x12D1C4u;
    {
        const bool branch_taken_0x12d1c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d1c4) {
            ctx->pc = 0x12D22Cu;
            return;
        }
    }
    ctx->pc = 0x12D1CCu;
    // 0x12d1cc: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x12d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x12d1d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12d1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d1d4: 0x0  nop
    ctx->pc = 0x12d1d4u;
    // NOP
    // 0x12d1d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12d1d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d1dc: 0x0  nop
    ctx->pc = 0x12d1dcu;
    // NOP
    // 0x12d1e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12D1E0u;
    {
        const bool branch_taken_0x12d1e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d1e0) {
            ctx->pc = 0x12D1F0u;
            return;
        }
    }
    ctx->pc = 0x12D1E8u;
    // 0x12d1e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12D1E8u;
    {
        const bool branch_taken_0x12d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d1e8) {
            ctx->pc = 0x12D22Cu;
            return;
        }
    }
    ctx->pc = 0x12D1F0u;
}
