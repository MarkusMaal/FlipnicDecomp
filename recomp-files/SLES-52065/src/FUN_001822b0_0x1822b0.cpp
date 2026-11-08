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

// Function: FUN_001822b0
// Address: 0x1822b0 - 0x182420
void FUN_001822b0_0x1822b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001822b0_0x1822b0");
#endif

    ctx->pc = 0x1822b0u;

    // 0x1822b0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1822b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1822b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1822b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1822b8: 0x0  nop
    ctx->pc = 0x1822b8u;
    // NOP
    // 0x1822bc: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1822bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1822c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1822c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1822c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1822c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1822c8: 0x0  nop
    ctx->pc = 0x1822c8u;
    // NOP
    // 0x1822cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1822ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1822d0: 0x0  nop
    ctx->pc = 0x1822d0u;
    // NOP
    // 0x1822d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1822D4u;
    {
        const bool branch_taken_0x1822d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1822d4) {
            ctx->pc = 0x1822ECu;
            goto label_1822ec;
        }
    }
    ctx->pc = 0x1822DCu;
    // 0x1822dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1822dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1822e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1822e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1822e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1822E4u;
    {
        const bool branch_taken_0x1822e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1822E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822E4u;
        // 0x1822e8: 0x3c02437f  lui         $v0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822e4) {
            ctx->pc = 0x182308u;
            goto label_182308;
        }
    }
    ctx->pc = 0x1822ECu;
label_1822ec:
    // 0x1822ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1822ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1822f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1822f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1822f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1822f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1822f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1822f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1822fc: 0x0  nop
    ctx->pc = 0x1822fcu;
    // NOP
    // 0x182300: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x182300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x182304: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x182304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_182308:
    // 0x182308: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x18230c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18230cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182310: 0x0  nop
    ctx->pc = 0x182310u;
    // NOP
    // 0x182314: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x182314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x182318: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x182318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x18231c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18231cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182320: 0x0  nop
    ctx->pc = 0x182320u;
    // NOP
    // 0x182324: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182328: 0x0  nop
    ctx->pc = 0x182328u;
    // NOP
    // 0x18232c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18232Cu;
    {
        const bool branch_taken_0x18232c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18232Cu;
        // 0x182330: 0xa0238bb0  sb          $v1, -0x7450($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294937520), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18232c) {
            ctx->pc = 0x182344u;
            goto label_182344;
        }
    }
    ctx->pc = 0x182334u;
    // 0x182334: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182334u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x182338: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x182338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18233c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18233Cu;
    {
        const bool branch_taken_0x18233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18233Cu;
        // 0x182340: 0x3c02437f  lui         $v0, 0x437F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18233c) {
            ctx->pc = 0x182360u;
            goto label_182360;
        }
    }
    ctx->pc = 0x182344u;
label_182344:
    // 0x182344: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x182344u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182348: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x182348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x18234c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18234cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x182350: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x182350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x182354: 0x0  nop
    ctx->pc = 0x182354u;
    // NOP
    // 0x182358: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x182358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18235c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x18235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_182360:
    // 0x182360: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x182360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182364: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x182364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182368: 0x0  nop
    ctx->pc = 0x182368u;
    // NOP
    // 0x18236c: 0x460e0842  mul.s       $f1, $f1, $f14
    ctx->pc = 0x18236cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x182370: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x182370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x182374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x182374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x182378: 0x0  nop
    ctx->pc = 0x182378u;
    // NOP
    // 0x18237c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18237cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182380: 0x0  nop
    ctx->pc = 0x182380u;
    // NOP
    // 0x182384: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x182384u;
    {
        const bool branch_taken_0x182384 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x182388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182384u;
        // 0x182388: 0xa0238bb1  sb          $v1, -0x744F($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294937521), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182384) {
            ctx->pc = 0x18239Cu;
            goto label_18239c;
        }
    }
    ctx->pc = 0x18238Cu;
    // 0x18238c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18238cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x182390: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x182390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x182394: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x182394u;
    {
        const bool branch_taken_0x182394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182394u;
        // 0x182398: 0x3c024300  lui         $v0, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182394) {
            ctx->pc = 0x1823B8u;
            goto label_1823b8;
        }
    }
    ctx->pc = 0x18239Cu;
label_18239c:
    // 0x18239c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18239cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1823a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1823a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1823a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1823a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1823a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1823a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1823ac: 0x0  nop
    ctx->pc = 0x1823acu;
    // NOP
    // 0x1823b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1823b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1823b4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1823b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1823b8:
    // 0x1823b8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1823b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1823bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1823bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1823c0: 0x0  nop
    ctx->pc = 0x1823c0u;
    // NOP
    // 0x1823c4: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x1823c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x1823c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1823c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1823cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1823ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1823d0: 0x0  nop
    ctx->pc = 0x1823d0u;
    // NOP
    // 0x1823d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1823d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1823d8: 0x0  nop
    ctx->pc = 0x1823d8u;
    // NOP
    // 0x1823dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1823DCu;
    {
        const bool branch_taken_0x1823dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1823E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823DCu;
        // 0x1823e0: 0xa0238bb2  sb          $v1, -0x744E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294937522), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823dc) {
            ctx->pc = 0x1823F4u;
            goto label_1823f4;
        }
    }
    ctx->pc = 0x1823E4u;
    // 0x1823e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1823e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1823e8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1823e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1823ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1823ECu;
    {
        const bool branch_taken_0x1823ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1823ec) {
            ctx->pc = 0x18240Cu;
            goto label_18240c;
        }
    }
    ctx->pc = 0x1823F4u;
label_1823f4:
    // 0x1823f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1823f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1823f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1823f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1823fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1823fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x182400: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x182400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x182404: 0x0  nop
    ctx->pc = 0x182404u;
    // NOP
    // 0x182408: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x182408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18240c:
    // 0x18240c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x18240cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x182410: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x182410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x182414: 0xa0238bb3  sb          $v1, -0x744D($at)
    ctx->pc = 0x182414u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x368BB3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x368BB3u, _value); } while (0);
    // 0x182418: 0x3e00008  jr          $ra
    ctx->pc = 0x182418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182418u;
        // 0x18241c: 0x24428b70  addiu       $v0, $v0, -0x7490 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182420u;
}
