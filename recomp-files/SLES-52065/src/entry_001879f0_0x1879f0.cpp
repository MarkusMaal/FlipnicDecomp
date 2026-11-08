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

// Function: entry_001879f0
// Address: 0x1879f0 - 0x187a08
void entry_001879f0_0x1879f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001879f0_0x1879f0");
#endif

    ctx->pc = 0x1879f0u;

    // 0x1879f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1879F0u;
    {
        const bool branch_taken_0x1879f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1879f0) {
            ctx->pc = 0x187A08u;
            return;
        }
    }
    ctx->pc = 0x1879F8u;
    // 0x1879f8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1879f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1879fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1879fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x187a00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x187a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x187a04: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x187a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x187a08u;
}
