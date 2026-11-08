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

// Function: entry_001fac5c
// Address: 0x1fac5c - 0x1fac70
void entry_001fac5c_0x1fac5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fac5c_0x1fac5c");
#endif

    ctx->pc = 0x1fac5cu;

    // 0x1fac5c: 0x3be1021  addu        $v0, $sp, $fp
    ctx->pc = 0x1fac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
    // 0x1fac60: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fac60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fac64: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1fac64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1fac68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAC68u;
    {
        const bool branch_taken_0x1fac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC68u;
        // 0x1fac6c: 0x32710007  andi        $s1, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac68) {
            ctx->pc = 0x1FAC74u;
            return;
        }
    }
    ctx->pc = 0x1FAC70u;
}
