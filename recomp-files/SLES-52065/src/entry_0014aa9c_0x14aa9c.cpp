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

// Function: entry_0014aa9c
// Address: 0x14aa9c - 0x14aaac
void entry_0014aa9c_0x14aa9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aa9c_0x14aa9c");
#endif

    ctx->pc = 0x14aa9cu;

    // 0x14aa9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AA9Cu;
    {
        const bool branch_taken_0x14aa9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14aa9c) {
            ctx->pc = 0x14AAACu;
            return;
        }
    }
    ctx->pc = 0x14AAA4u;
    // 0x14aaa4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14aaa8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14aaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    ctx->pc = 0x14aaacu;
}
