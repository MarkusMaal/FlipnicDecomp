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

// Function: entry_001de4b0
// Address: 0x1de4b0 - 0x1de4d0
void entry_001de4b0_0x1de4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de4b0_0x1de4b0");
#endif

    ctx->pc = 0x1de4b0u;

    // 0x1de4b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de4b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de4b4: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x1de4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1de4b8: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x1de4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1de4bc: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1de4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x1de4c0: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1de4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1de4c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1de4c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1de4c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1de4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1de4d0u;
}
