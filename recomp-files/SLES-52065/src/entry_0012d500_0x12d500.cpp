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

// Function: entry_0012d500
// Address: 0x12d500 - 0x12d5a4
void entry_0012d500_0x12d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d500_0x12d500");
#endif

    ctx->pc = 0x12d500u;

    // 0x12d500: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d504: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x12d504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x12d508: 0xa423308a  sh          $v1, 0x308A($at)
    ctx->pc = 0x12d508u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2B308Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2B308Au, _value); } while (0);
    // 0x12d50c: 0x460040a4  .word       0x460040A4                   # cvt.w.s     $f2, $f8 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d50cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[8]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x12d510: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x12d510u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d514: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x12d514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x12d518: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d51c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d520: 0xdc273088  ld          $a3, 0x3088($at)
    ctx->pc = 0x12d520u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x2B3088u));
    // 0x12d524: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x12d524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d528: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d52c: 0x3c044700  lui         $a0, 0x4700
    ctx->pc = 0x12d52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18176 << 16));
    // 0x12d530: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12d530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12d534: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x12d534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12d538: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x12d538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d53c: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x12d53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x12d540: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x12d540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x12d544: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x12d544u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x12d548: 0x1283021  addu        $a2, $t1, $t0
    ctx->pc = 0x12d548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x12d54c: 0xe22824  and         $a1, $a3, $v0
    ctx->pc = 0x12d54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x12d550: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x12d550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12d554: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x12d554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x12d558: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x12d558u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x12d55c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x12d55cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x12d560: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x12d560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x12d564: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x12d564u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12d568: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12d568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d56c: 0x0  nop
    ctx->pc = 0x12d56cu;
    // NOP
    // 0x12d570: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x12d570u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x12d574: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x12d574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x12d578: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x12d578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12d57c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12d57cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12d580: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x12d580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x12d584: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x12d584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d588: 0x0  nop
    ctx->pc = 0x12d588u;
    // NOP
    // 0x12d58c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12D58Cu;
    {
        const bool branch_taken_0x12d58c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D58Cu;
        // 0x12d590: 0xfc243088  sd          $a0, 0x3088($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 12424), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d58c) {
            ctx->pc = 0x12D5A4u;
            return;
        }
    }
    ctx->pc = 0x12D594u;
    // 0x12d594: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12d594u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x12d598: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x12d598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12d59c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12D59Cu;
    {
        const bool branch_taken_0x12d59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D59Cu;
        // 0x12d5a0: 0x3c024700  lui         $v0, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d59c) {
            ctx->pc = 0x12D5C0u;
            return;
        }
    }
    ctx->pc = 0x12D5A4u;
}
