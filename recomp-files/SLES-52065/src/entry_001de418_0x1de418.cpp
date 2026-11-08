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

// Function: entry_001de418
// Address: 0x1de418 - 0x1de48c
void entry_001de418_0x1de418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de418_0x1de418");
#endif

    ctx->pc = 0x1de418u;

    // 0x1de418: 0x110001b9  beqz        $t0, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x1DE418u;
    {
        const bool branch_taken_0x1de418 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE418u;
        // 0x1de41c: 0x31020020  andi        $v0, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de418) {
            ctx->pc = 0x1DEB00u;
            return;
        }
    }
    ctx->pc = 0x1DE420u;
    // 0x1de420: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1DE420u;
    {
        const bool branch_taken_0x1de420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE420u;
        // 0x1de424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de420) {
            ctx->pc = 0x1DE4D0u;
            return;
        }
    }
    ctx->pc = 0x1DE428u;
    // 0x1de428: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x1de428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de42c: 0xc60200b4  lwc1        $f2, 0xB4($s0)
    ctx->pc = 0x1de42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de430: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de434: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1de434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de438: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1de438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1de43c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de43cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1de440: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1de440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1de444: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1DE444u;
    {
        const bool branch_taken_0x1de444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DE448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE444u;
        // 0x1de448: 0xe60100b8  swc1        $f1, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de444) {
            ctx->pc = 0x1DE4D0u;
            return;
        }
    }
    ctx->pc = 0x1DE44Cu;
    // 0x1de44c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1de44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1de454: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1de454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1de458: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1de458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1de45c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1de45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1de460: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1de460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de464: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1de464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1de468: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1de468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1de46c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE46Cu;
    {
        const bool branch_taken_0x1de46c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE46Cu;
        // 0x1de470: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de46c) {
            ctx->pc = 0x1DE48Cu;
            return;
        }
    }
    ctx->pc = 0x1DE474u;
    // 0x1de474: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x1de474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de478: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de47c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1de47cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de480: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1de480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1de484: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DE484u;
    {
        const bool branch_taken_0x1de484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de484) {
            ctx->pc = 0x1DE4B0u;
            return;
        }
    }
    ctx->pc = 0x1DE48Cu;
}
