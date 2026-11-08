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

// Function: entry_0012d3a0
// Address: 0x12d3a0 - 0x12d484
void entry_0012d3a0_0x12d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d3a0_0x12d3a0");
#endif

    ctx->pc = 0x12d3a0u;

    // 0x12d3a0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d3a4: 0x3c024700  lui         $v0, 0x4700
    ctx->pc = 0x12d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
    // 0x12d3a8: 0x942a3080  lhu         $t2, 0x3080($at)
    ctx->pc = 0x12d3a8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)FAST_READ16(0x2B3080u));
    // 0x12d3ac: 0xa62018  mult        $a0, $a1, $a2
    ctx->pc = 0x12d3acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12d3b0: 0x240bc000  addiu       $t3, $zero, -0x4000
    ctx->pc = 0x12d3b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x12d3b4: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x12d3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12d3b8: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x12d3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x12d3bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x12d3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x12d3c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x12d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x12d3c4: 0x308c3fff  andi        $t4, $a0, 0x3FFF
    ctx->pc = 0x12d3c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x12d3c8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x12d3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d3cc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d3d0: 0x14b5024  and         $t2, $t2, $t3
    ctx->pc = 0x12d3d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
    // 0x12d3d4: 0x94293082  lhu         $t1, 0x3082($at)
    ctx->pc = 0x12d3d4u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 12418)));
    // 0x12d3d8: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x12d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x12d3dc: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x12d3dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12d3e0: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x12d3e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x12d3e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12d3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d3e8: 0x0  nop
    ctx->pc = 0x12d3e8u;
    // NOP
    // 0x12d3ec: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x12d3ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x12d3f0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d3f4: 0x12b4824  and         $t1, $t1, $t3
    ctx->pc = 0x12d3f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 11));
    // 0x12d3f8: 0x94273090  lhu         $a3, 0x3090($at)
    ctx->pc = 0x12d3f8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 12432)));
    // 0x12d3fc: 0x460348c0  add.s       $f3, $f9, $f3
    ctx->pc = 0x12d3fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[9], ctx->f[3]);
    // 0x12d400: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x12d400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d404: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d408: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x12d408u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x12d40c: 0x94253092  lhu         $a1, 0x3092($at)
    ctx->pc = 0x12d40cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 12434)));
    // 0x12d410: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d414: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x12d414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x12d418: 0xa42a3080  sh          $t2, 0x3080($at)
    ctx->pc = 0x12d418u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 12416), (uint16_t)GPR_U32(ctx, 10));
    // 0x12d41c: 0x8e2a0004  lw          $t2, 0x4($s1)
    ctx->pc = 0x12d41cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12d420: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d424: 0x706a1018  mult1       $v0, $v1, $t2
    ctx->pc = 0x12d424u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12d428: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12d428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12d42c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x12d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x12d430: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x12d430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x12d434: 0xa4223082  sh          $v0, 0x3082($at)
    ctx->pc = 0x12d434u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 12418), (uint16_t)GPR_U32(ctx, 2));
    // 0x12d438: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x12d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12d43c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d440: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x12d440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12d444: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12d444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12d448: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x12d448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x12d44c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x12d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x12d450: 0xa4223090  sh          $v0, 0x3090($at)
    ctx->pc = 0x12d450u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 12432), (uint16_t)GPR_U32(ctx, 2));
    // 0x12d454: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12d458: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d45c: 0x70c21018  mult1       $v0, $a2, $v0
    ctx->pc = 0x12d45cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12d460: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12d460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12d464: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x12d464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x12d468: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x12d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x12d46c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12D46Cu;
    {
        const bool branch_taken_0x12d46c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D46Cu;
        // 0x12d470: 0xa4223092  sh          $v0, 0x3092($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 12434), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d46c) {
            ctx->pc = 0x12D484u;
            return;
        }
    }
    ctx->pc = 0x12D474u;
    // 0x12d474: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d474u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d478: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d478u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d47c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12D47Cu;
    {
        const bool branch_taken_0x12d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D47Cu;
        // 0x12d480: 0x3c024700  lui         $v0, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d47c) {
            ctx->pc = 0x12D4A0u;
            return;
        }
    }
    ctx->pc = 0x12D484u;
}
