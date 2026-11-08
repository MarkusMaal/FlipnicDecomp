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

// Function: entry_0016c2a8
// Address: 0x16c2a8 - 0x16c2d4
void entry_0016c2a8_0x16c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c2a8_0x16c2a8");
#endif

    ctx->pc = 0x16c2a8u;

    // 0x16c2a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16c2a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16c2ac: 0x0  nop
    ctx->pc = 0x16c2acu;
    // NOP
    // 0x16c2b0: 0x0  nop
    ctx->pc = 0x16c2b0u;
    // NOP
    // 0x16c2b4: 0x4500fffb  bc1f        . + 4 + (-0x5 << 2)
    ctx->pc = 0x16C2B4u;
    {
        const bool branch_taken_0x16c2b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16c2b4) {
            ctx->pc = 0x16C2A4u;
            return;
        }
    }
    ctx->pc = 0x16C2BCu;
    // 0x16c2bc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x16c2c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16c2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16c2c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16c2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16c2c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16c2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16c2cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16C2CCu;
    {
        const bool branch_taken_0x16c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c2cc) {
            ctx->pc = 0x16C2D8u;
            return;
        }
    }
    ctx->pc = 0x16C2D4u;
}
