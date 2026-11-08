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

// Function: entry_001ae604
// Address: 0x1ae604 - 0x1ae644
void entry_001ae604_0x1ae604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae604_0x1ae604");
#endif

    ctx->pc = 0x1ae604u;

    // 0x1ae604: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ae604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ae608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae60c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ae60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae610: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae618: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ae618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ae61c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae61cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ae620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ae624: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ae624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ae628: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ae628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ae62c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ae62cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ae630: 0x0  nop
    ctx->pc = 0x1ae630u;
    // NOP
    // 0x1ae634: 0xae8206bc  sw          $v0, 0x6BC($s4)
    ctx->pc = 0x1ae634u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1724), GPR_U32(ctx, 2));
    // 0x1ae638: 0xae8006a8  sw          $zero, 0x6A8($s4)
    ctx->pc = 0x1ae638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1704), GPR_U32(ctx, 0));
    // 0x1ae63c: 0xae8006ac  sw          $zero, 0x6AC($s4)
    ctx->pc = 0x1ae63cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1708), GPR_U32(ctx, 0));
    // 0x1ae640: 0xae8006b0  sw          $zero, 0x6B0($s4)
    ctx->pc = 0x1ae640u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1712), GPR_U32(ctx, 0));
    ctx->pc = 0x1ae644u;
}
