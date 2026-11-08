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

// Function: entry_001ad3f8
// Address: 0x1ad3f8 - 0x1ad438
void entry_001ad3f8_0x1ad3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad3f8_0x1ad3f8");
#endif

    ctx->pc = 0x1ad3f8u;

    // 0x1ad3f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ad3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad3fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ad3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad400: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ad400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad404: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ad404u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad408: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ad40c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ad40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad410: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ad414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ad418: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ad418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ad41c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad41cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ad420: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ad420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ad424: 0x0  nop
    ctx->pc = 0x1ad424u;
    // NOP
    // 0x1ad428: 0xae2206c4  sw          $v0, 0x6C4($s1)
    ctx->pc = 0x1ad428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1732), GPR_U32(ctx, 2));
    // 0x1ad42c: 0xae2006b0  sw          $zero, 0x6B0($s1)
    ctx->pc = 0x1ad42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1712), GPR_U32(ctx, 0));
    // 0x1ad430: 0xae2006b4  sw          $zero, 0x6B4($s1)
    ctx->pc = 0x1ad430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1716), GPR_U32(ctx, 0));
    // 0x1ad434: 0xae2006b8  sw          $zero, 0x6B8($s1)
    ctx->pc = 0x1ad434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1720), GPR_U32(ctx, 0));
    ctx->pc = 0x1ad438u;
}
