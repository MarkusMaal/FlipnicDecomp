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

// Function: entry_001a1988
// Address: 0x1a1988 - 0x1a19ac
void entry_001a1988_0x1a1988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1988_0x1a1988");
#endif

    ctx->pc = 0x1a1988u;

    // 0x1a1988: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a1988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a198c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a198cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1990: 0x0  nop
    ctx->pc = 0x1a1990u;
    // NOP
    // 0x1a1994: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1998: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a1998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a199c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a199cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a19a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a19a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a19a4: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1A19A4u;
    {
        const bool branch_taken_0x1a19a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19A4u;
        // 0x1a19a8: 0xae830688  sw          $v1, 0x688($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19a4) {
            ctx->pc = 0x1A1C04u;
            return;
        }
    }
    ctx->pc = 0x1A19ACu;
}
