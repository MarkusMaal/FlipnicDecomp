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

// Function: entry_00126fdc
// Address: 0x126fdc - 0x127010
void entry_00126fdc_0x126fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126fdc_0x126fdc");
#endif

    ctx->pc = 0x126fdcu;

    // 0x126fdc: 0x0  nop
    ctx->pc = 0x126fdcu;
    // NOP
    // 0x126fe0: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x126fe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x126fe4: 0x0  nop
    ctx->pc = 0x126fe4u;
    // NOP
    // 0x126fe8: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x126FE8u;
    {
        const bool branch_taken_0x126fe8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x126fe8) {
            ctx->pc = 0x126FD4u;
            return;
        }
    }
    ctx->pc = 0x126FF0u;
    // 0x126ff0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x126ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x126ff4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x126ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x126ff8: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x126ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x126ffc: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x126ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x127000: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127008: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127008u;
    {
        const bool branch_taken_0x127008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127008) {
            ctx->pc = 0x127014u;
            return;
        }
    }
    ctx->pc = 0x127010u;
}
