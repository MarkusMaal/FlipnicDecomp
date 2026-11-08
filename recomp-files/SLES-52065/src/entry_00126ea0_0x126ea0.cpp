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

// Function: entry_00126ea0
// Address: 0x126ea0 - 0x126eb4
void entry_00126ea0_0x126ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126ea0_0x126ea0");
#endif

    ctx->pc = 0x126ea0u;

    // 0x126ea0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126ea0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126ea4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x126ea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x126ea8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x126ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x126eac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x126EACu;
    {
        const bool branch_taken_0x126eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126eac) {
            ctx->pc = 0x126EC8u;
            return;
        }
    }
    ctx->pc = 0x126EB4u;
}
