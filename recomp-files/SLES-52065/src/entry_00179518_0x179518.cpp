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

// Function: entry_00179518
// Address: 0x179518 - 0x179574
void entry_00179518_0x179518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179518_0x179518");
#endif

    ctx->pc = 0x179518u;

    // 0x179518: 0xb3880  sll         $a3, $t3, 2
    ctx->pc = 0x179518u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x17951c: 0xea4021  addu        $t0, $a3, $t2
    ctx->pc = 0x17951cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x179520: 0xb38c0  sll         $a3, $t3, 3
    ctx->pc = 0x179520u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x179524: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x179524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x179528: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x179528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17952c: 0xc4e10820  lwc1        $f1, 0x820($a3)
    ctx->pc = 0x17952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 2080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179530: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x179530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179534: 0x0  nop
    ctx->pc = 0x179534u;
    // NOP
    // 0x179538: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x179538u;
    {
        const bool branch_taken_0x179538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x179538) {
            ctx->pc = 0x179574u;
            return;
        }
    }
    ctx->pc = 0x179540u;
    // 0x179540: 0xc5010030  lwc1        $f1, 0x30($t0)
    ctx->pc = 0x179540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179544: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x179544u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x179548: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x179548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x17954c: 0xc5010030  lwc1        $f1, 0x30($t0)
    ctx->pc = 0x17954cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179550: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x179550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x179554: 0x15690007  bne         $t3, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x179554u;
    {
        const bool branch_taken_0x179554 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 9));
        ctx->pc = 0x179558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179554u;
        // 0x179558: 0xe5010030  swc1        $f1, 0x30($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179554) {
            ctx->pc = 0x179574u;
            return;
        }
    }
    ctx->pc = 0x17955Cu;
    // 0x17955c: 0xc5410030  lwc1        $f1, 0x30($t2)
    ctx->pc = 0x17955cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179560: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x179560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x179564: 0xe5410030  swc1        $f1, 0x30($t2)
    ctx->pc = 0x179564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 48), bits); }
    // 0x179568: 0xc5410038  lwc1        $f1, 0x38($t2)
    ctx->pc = 0x179568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17956c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x17956cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x179570: 0xe5410038  swc1        $f1, 0x38($t2)
    ctx->pc = 0x179570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 56), bits); }
    ctx->pc = 0x179574u;
}
