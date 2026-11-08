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

// Function: entry_001260c8
// Address: 0x1260c8 - 0x1260fc
void entry_001260c8_0x1260c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001260c8_0x1260c8");
#endif

    ctx->pc = 0x1260c8u;

    // 0x1260c8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1260c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1260cc: 0x0  nop
    ctx->pc = 0x1260ccu;
    // NOP
    // 0x1260d0: 0x0  nop
    ctx->pc = 0x1260d0u;
    // NOP
    // 0x1260d4: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x1260D4u;
    {
        const bool branch_taken_0x1260d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1260d4) {
            ctx->pc = 0x1260C4u;
            return;
        }
    }
    ctx->pc = 0x1260DCu;
    // 0x1260dc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1260dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1260e0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1260e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1260e4: 0x34630fd8  ori         $v1, $v1, 0xFD8
    ctx->pc = 0x1260e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4056);
    // 0x1260e8: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1260e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1260ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1260ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1260f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1260f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1260f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1260F4u;
    {
        const bool branch_taken_0x1260f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1260f4) {
            ctx->pc = 0x126100u;
            return;
        }
    }
    ctx->pc = 0x1260FCu;
}
