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

// Function: entry_001620cc
// Address: 0x1620cc - 0x1620f8
void entry_001620cc_0x1620cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001620cc_0x1620cc");
#endif

    ctx->pc = 0x1620ccu;

    // 0x1620cc: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x1620ccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1620d0: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x1620d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
    // 0x1620d4: 0x26220300  addiu       $v0, $s1, 0x300
    ctx->pc = 0x1620d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x1620d8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1620d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1620dc: 0xda270000  lqc2        $vf7, 0x0($s1)
    ctx->pc = 0x1620dcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1620e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1620e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1620e4: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1620e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1620e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1620e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1620ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1620ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1620f0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1620F0u;
    {
        const bool branch_taken_0x1620f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620F0u;
        // 0x1620f4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620f0) {
            ctx->pc = 0x16212Cu;
            return;
        }
    }
    ctx->pc = 0x1620F8u;
}
