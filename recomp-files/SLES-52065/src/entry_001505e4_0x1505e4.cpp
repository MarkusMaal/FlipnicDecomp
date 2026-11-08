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

// Function: entry_001505e4
// Address: 0x1505e4 - 0x15061c
void entry_001505e4_0x1505e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001505e4_0x1505e4");
#endif

    ctx->pc = 0x1505e4u;

    // 0x1505e4: 0x0  nop
    ctx->pc = 0x1505e4u;
    // NOP
    // 0x1505e8: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1505e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1505ec: 0x0  nop
    ctx->pc = 0x1505ecu;
    // NOP
    // 0x1505f0: 0x0  nop
    ctx->pc = 0x1505f0u;
    // NOP
    // 0x1505f4: 0x4500fffa  bc1f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1505F4u;
    {
        const bool branch_taken_0x1505f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1505f4) {
            ctx->pc = 0x1505E0u;
            return;
        }
    }
    ctx->pc = 0x1505FCu;
    // 0x1505fc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1505fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x150600: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x150600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x150604: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x150604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x150608: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x150608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x15060c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15060cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150614: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x150614u;
    {
        const bool branch_taken_0x150614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150614) {
            ctx->pc = 0x150620u;
            return;
        }
    }
    ctx->pc = 0x15061Cu;
}
