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

// Function: entry_0016d088
// Address: 0x16d088 - 0x16d0b8
void entry_0016d088_0x16d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d088_0x16d088");
#endif

    ctx->pc = 0x16d088u;

    // 0x16d088: 0xc6220210  lwc1        $f2, 0x210($s1)
    ctx->pc = 0x16d088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16d08c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x16d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x16d090: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x16d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d094: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16d094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16d098: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16d098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d09c: 0x0  nop
    ctx->pc = 0x16d09cu;
    // NOP
    // 0x16d0a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16d0a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x16d0a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16d0a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16d0a8: 0x0  nop
    ctx->pc = 0x16d0a8u;
    // NOP
    // 0x16d0ac: 0xe620022c  swc1        $f0, 0x22C($s1)
    ctx->pc = 0x16d0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
    // 0x16d0b0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16D0B0u;
    {
        const bool branch_taken_0x16d0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0B0u;
        // 0x16d0b4: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0b0) {
            ctx->pc = 0x16D0F4u;
            return;
        }
    }
    ctx->pc = 0x16D0B8u;
}
