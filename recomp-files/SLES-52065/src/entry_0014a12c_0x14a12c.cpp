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

// Function: entry_0014a12c
// Address: 0x14a12c - 0x14a13c
void entry_0014a12c_0x14a12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a12c_0x14a12c");
#endif

    ctx->pc = 0x14a12cu;

    // 0x14a12c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A12Cu;
    {
        const bool branch_taken_0x14a12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a12c) {
            ctx->pc = 0x14A13Cu;
            return;
        }
    }
    ctx->pc = 0x14A134u;
    // 0x14a134: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a138: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14a138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    ctx->pc = 0x14a13cu;
}
