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

// Function: entry_0016d0b8
// Address: 0x16d0b8 - 0x16d0ec
void entry_0016d0b8_0x16d0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d0b8_0x16d0b8");
#endif

    ctx->pc = 0x16d0b8u;

    // 0x16d0b8: 0xc6220240  lwc1        $f2, 0x240($s1)
    ctx->pc = 0x16d0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16d0bc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x16d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x16d0c0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x16d0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16d0c4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x16d0c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16d0c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16d0cc: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x16d0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d0d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16d0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16d0d4: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x16d0d4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x16d0d8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x16d0d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x16d0dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16d0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16d0e0: 0xe620022c  swc1        $f0, 0x22C($s1)
    ctx->pc = 0x16d0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
    // 0x16d0e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16D0E4u;
    {
        const bool branch_taken_0x16d0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0E4u;
        // 0x16d0e8: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0e4) {
            ctx->pc = 0x16D0F4u;
            return;
        }
    }
    ctx->pc = 0x16D0ECu;
}
