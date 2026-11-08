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

// Function: entry_0014ae5c
// Address: 0x14ae5c - 0x14ae70
void entry_0014ae5c_0x14ae5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ae5c_0x14ae5c");
#endif

    ctx->pc = 0x14ae5cu;

    // 0x14ae5c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ae60: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AE60u;
    {
        const bool branch_taken_0x14ae60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ae60) {
            ctx->pc = 0x14AE70u;
            return;
        }
    }
    ctx->pc = 0x14AE68u;
    // 0x14ae68: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x14ae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ae6c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14ae6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->pc = 0x14ae70u;
}
