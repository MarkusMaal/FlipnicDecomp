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

// Function: entry_0017393c
// Address: 0x17393c - 0x173984
void entry_0017393c_0x17393c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017393c_0x17393c");
#endif

    ctx->pc = 0x17393cu;

    // 0x17393c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x17393cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x173940: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x173940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x173944: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x173944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173948: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x173948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17394c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x173950: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x173950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x173954: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x173954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17395c: 0x0  nop
    ctx->pc = 0x17395cu;
    // NOP
    // 0x173960: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x173960u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x173964: 0xe461004c  swc1        $f1, 0x4C($v1)
    ctx->pc = 0x173964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x173968: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x173968u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
    // 0x17396c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17396cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173970: 0x0  nop
    ctx->pc = 0x173970u;
    // NOP
    // 0x173974: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x173974u;
    {
        const bool branch_taken_0x173974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173974) {
            ctx->pc = 0x173984u;
            return;
        }
    }
    ctx->pc = 0x17397Cu;
    // 0x17397c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17397cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173980: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x173980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    ctx->pc = 0x173984u;
}
