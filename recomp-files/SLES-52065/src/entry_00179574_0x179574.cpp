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

// Function: entry_00179574
// Address: 0x179574 - 0x1795d4
void entry_00179574_0x179574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179574_0x179574");
#endif

    ctx->pc = 0x179574u;

    // 0x179574: 0x0  nop
    ctx->pc = 0x179574u;
    // NOP
    // 0x179578: 0xb3880  sll         $a3, $t3, 2
    ctx->pc = 0x179578u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x17957c: 0xea4021  addu        $t0, $a3, $t2
    ctx->pc = 0x17957cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x179580: 0xb38c0  sll         $a3, $t3, 3
    ctx->pc = 0x179580u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x179584: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x179584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x179588: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x179588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17958c: 0xc4e10824  lwc1        $f1, 0x824($a3)
    ctx->pc = 0x17958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 2084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179590: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x179590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179594: 0x0  nop
    ctx->pc = 0x179594u;
    // NOP
    // 0x179598: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x179598u;
    {
        const bool branch_taken_0x179598 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179598) {
            ctx->pc = 0x1795D4u;
            return;
        }
    }
    ctx->pc = 0x1795A0u;
    // 0x1795a0: 0xc5010030  lwc1        $f1, 0x30($t0)
    ctx->pc = 0x1795a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1795a4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1795a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1795a8: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x1795a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x1795ac: 0xc5010030  lwc1        $f1, 0x30($t0)
    ctx->pc = 0x1795acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1795b0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1795b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1795b4: 0x15690007  bne         $t3, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1795B4u;
    {
        const bool branch_taken_0x1795b4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 9));
        ctx->pc = 0x1795B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795B4u;
        // 0x1795b8: 0xe5010030  swc1        $f1, 0x30($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795b4) {
            ctx->pc = 0x1795D4u;
            return;
        }
    }
    ctx->pc = 0x1795BCu;
    // 0x1795bc: 0xc5410030  lwc1        $f1, 0x30($t2)
    ctx->pc = 0x1795bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1795c0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1795c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1795c4: 0xe5410030  swc1        $f1, 0x30($t2)
    ctx->pc = 0x1795c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 48), bits); }
    // 0x1795c8: 0xc5410038  lwc1        $f1, 0x38($t2)
    ctx->pc = 0x1795c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1795cc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1795ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1795d0: 0xe5410038  swc1        $f1, 0x38($t2)
    ctx->pc = 0x1795d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 56), bits); }
    ctx->pc = 0x1795d4u;
}
