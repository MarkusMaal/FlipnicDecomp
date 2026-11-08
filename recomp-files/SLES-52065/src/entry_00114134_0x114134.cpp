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

// Function: entry_00114134
// Address: 0x114134 - 0x114198
void entry_00114134_0x114134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114134_0x114134");
#endif

    ctx->pc = 0x114134u;

    // 0x114134: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x114134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114138: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x114138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x11413c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x11413cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x114140: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x114140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114144: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x114144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x114148: 0x8e260254  lw          $a2, 0x254($s1)
    ctx->pc = 0x114148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x11414c: 0x24033fff  addiu       $v1, $zero, 0x3FFF
    ctx->pc = 0x11414cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x114150: 0x64040010  daddiu      $a0, $zero, 0x10
    ctx->pc = 0x114150u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x114154: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x114154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x114158: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x114158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x11415c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11415cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x114160: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x114160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x114164: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x114164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x114168: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x114168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11416c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x11416cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x114170: 0x0  nop
    ctx->pc = 0x114170u;
    // NOP
    // 0x114174: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x114174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x114178: 0x633be  dsrl32      $a2, $a2, 14
    ctx->pc = 0x114178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 14));
    // 0x11417c: 0x63380  sll         $a2, $a2, 14
    ctx->pc = 0x11417cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x114180: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x114180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x114184: 0xae250254  sw          $a1, 0x254($s1)
    ctx->pc = 0x114184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 5));
    // 0x114188: 0x92250255  lbu         $a1, 0x255($s1)
    ctx->pc = 0x114188u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 597)));
    // 0x11418c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x11418cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x114190: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x114190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x114194: 0xa2230255  sb          $v1, 0x255($s1)
    ctx->pc = 0x114194u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 597), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x114198u;
}
