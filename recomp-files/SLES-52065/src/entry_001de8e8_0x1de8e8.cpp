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

// Function: entry_001de8e8
// Address: 0x1de8e8 - 0x1de8fc
void entry_001de8e8_0x1de8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de8e8_0x1de8e8");
#endif

    ctx->pc = 0x1de8e8u;

    // 0x1de8e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1de8e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1de8ec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1de8ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1de8f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1de8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1de8f4: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE8F4u;
    {
        const bool branch_taken_0x1de8f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de8f4) {
            ctx->pc = 0x1DE8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE8F4u;
            // 0x1de8f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE8FCu;
            return;
        }
    }
    ctx->pc = 0x1DE8FCu;
}
