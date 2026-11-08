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

// Function: FUN_00179470
// Address: 0x179470 - 0x17966c
void FUN_00179470_0x179470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00179470_0x179470");
#endif

    switch (ctx->pc) {
        case 0x1794b4u: goto label_1794b4;
        case 0x179518u: goto label_179518;
        default: break;
    }

    ctx->pc = 0x179470u;

    // 0x179470: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x179470u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x179474: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x179478: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x179478u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17947c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17947cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179484: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179488: 0x3c07bf7a  lui         $a3, 0xBF7A
    ctx->pc = 0x179488u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49018 << 16));
    // 0x17948c: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x17948cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x179490: 0x34e8e148  ori         $t0, $a3, 0xE148
    ctx->pc = 0x179490u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57672);
    // 0x179494: 0x3c073dcc  lui         $a3, 0x3DCC
    ctx->pc = 0x179494u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15820 << 16));
    // 0x179498: 0x34e7cccd  ori         $a3, $a3, 0xCCCD
    ctx->pc = 0x179498u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x17949c: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x17949cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1794a0: 0x44882800  mtc1        $t0, $f5
    ctx->pc = 0x1794a0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1794a4: 0x3c07bf00  lui         $a3, 0xBF00
    ctx->pc = 0x1794a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48896 << 16));
    // 0x1794a8: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x1794a8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1794ac: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1794ACu;
    {
        const bool branch_taken_0x1794ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794ACu;
        // 0x1794b0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794ac) {
            ctx->pc = 0x17963Cu;
            goto label_17963c;
        }
    }
    ctx->pc = 0x1794B4u;
label_1794b4:
    // 0x1794b4: 0x90e70838  lbu         $a3, 0x838($a3)
    ctx->pc = 0x1794b4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2104)));
    // 0x1794b8: 0x10e0005e  beqz        $a3, . + 4 + (0x5E << 2)
    ctx->pc = 0x1794B8u;
    {
        const bool branch_taken_0x1794b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794B8u;
        // 0x1794bc: 0x23940  sll         $a3, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794b8) {
            ctx->pc = 0x179634u;
            goto label_179634;
        }
    }
    ctx->pc = 0x1794C0u;
    // 0x1794c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1794c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1794c4: 0x875021  addu        $t2, $a0, $a3
    ctx->pc = 0x1794c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1794c8: 0x25470020  addiu       $a3, $t2, 0x20
    ctx->pc = 0x1794c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x1794cc: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1794ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1794d0: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1794d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1794d4: 0x25480030  addiu       $t0, $t2, 0x30
    ctx->pc = 0x1794d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x1794d8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1794d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1794dc: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x1794dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1794e0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1794e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1794e4: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1794e4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1794e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1794e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794ec: 0xc7828028  lwc1        $f2, -0x7FD8($gp)
    ctx->pc = 0x1794ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1794f0: 0xc5410034  lwc1        $f1, 0x34($t2)
    ctx->pc = 0x1794f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1794f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1794f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1794f8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1794f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1794fc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1794fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x179500: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x179500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x179504: 0x46022883  div.s       $f2, $f5, $f2
    ctx->pc = 0x179504u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[5], ctx->f[2]); }
    // 0x179508: 0x0  nop
    ctx->pc = 0x179508u;
    // NOP
    // 0x17950c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x17950cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x179510: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x179510u;
    {
        const bool branch_taken_0x179510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179510u;
        // 0x179514: 0xe5410034  swc1        $f1, 0x34($t2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179510) {
            ctx->pc = 0x1795DCu;
            goto label_1795dc;
        }
    }
    ctx->pc = 0x179518u;
label_179518:
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
            goto label_179574;
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
            goto label_179574;
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
label_179574:
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
            goto label_1795d4;
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
            goto label_1795d4;
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
label_1795d4:
    // 0x1795d4: 0x0  nop
    ctx->pc = 0x1795d4u;
    // NOP
    // 0x1795d8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1795d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1795dc:
    // 0x1795dc: 0x0  nop
    ctx->pc = 0x1795dcu;
    // NOP
    // 0x1795e0: 0x29670003  slti        $a3, $t3, 0x3
    ctx->pc = 0x1795e0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1795e4: 0x14e0ffcc  bnez        $a3, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1795E4u;
    {
        const bool branch_taken_0x1795e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1795E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1795E4u;
        // 0x1795e8: 0x23940  sll         $a3, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795e4) {
            ctx->pc = 0x179518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179518;
        }
    }
    ctx->pc = 0x1795ECu;
    // 0x1795ec: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1795ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1795f0: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x1795f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1795f4: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1795f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1795f8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1795f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1795fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1795fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179600: 0x4bc1086a  vmul.xyz    $vf1, $vf1, $vf1
    ctx->pc = 0x179600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179604: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x179604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x179608: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x179608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17960c: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x17960cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x179610: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x179610u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179614: 0xc4e20024  lwc1        $f2, 0x24($a3)
    ctx->pc = 0x179614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x179618: 0xc4810828  lwc1        $f1, 0x828($a0)
    ctx->pc = 0x179618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17961c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x17961cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x179620: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x179620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179624: 0x0  nop
    ctx->pc = 0x179624u;
    // NOP
    // 0x179628: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x179628u;
    {
        const bool branch_taken_0x179628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x179628) {
            ctx->pc = 0x179634u;
            goto label_179634;
        }
    }
    ctx->pc = 0x179630u;
    // 0x179630: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x179630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_179634:
    // 0x179634: 0x0  nop
    ctx->pc = 0x179634u;
    // NOP
    // 0x179638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17963c:
    // 0x17963c: 0x0  nop
    ctx->pc = 0x17963cu;
    // NOP
    // 0x179640: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x179640u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179644: 0x47382a  slt         $a3, $v0, $a3
    ctx->pc = 0x179644u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x179648: 0x14e0ff9a  bnez        $a3, . + 4 + (-0x66 << 2)
    ctx->pc = 0x179648u;
    {
        const bool branch_taken_0x179648 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x17964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179648u;
        // 0x17964c: 0x443821  addu        $a3, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179648) {
            ctx->pc = 0x1794B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1794b4;
        }
    }
    ctx->pc = 0x179650u;
    // 0x179650: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x179650u;
    {
        const bool branch_taken_0x179650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179650u;
        // 0x179654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179650) {
            ctx->pc = 0x179664u;
            goto label_179664;
        }
    }
    ctx->pc = 0x179658u;
    // 0x179658: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x179658u;
    {
        const bool branch_taken_0x179658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x179658) {
            ctx->pc = 0x179664u;
            goto label_179664;
        }
    }
    ctx->pc = 0x179660u;
    // 0x179660: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x179660u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_179664:
    // 0x179664: 0x3e00008  jr          $ra
    ctx->pc = 0x179664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179664u;
        // 0x179668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17966Cu;
}
