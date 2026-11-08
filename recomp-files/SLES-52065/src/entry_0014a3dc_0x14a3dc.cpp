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

// Function: entry_0014a3dc
// Address: 0x14a3dc - 0x14a3f0
void entry_0014a3dc_0x14a3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a3dc_0x14a3dc");
#endif

    ctx->pc = 0x14a3dcu;

    // 0x14a3dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a3e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A3E0u;
    {
        const bool branch_taken_0x14a3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a3e0) {
            ctx->pc = 0x14A3F0u;
            return;
        }
    }
    ctx->pc = 0x14A3E8u;
    // 0x14a3e8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x14a3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a3ec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14a3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x14a3f0u;
}
