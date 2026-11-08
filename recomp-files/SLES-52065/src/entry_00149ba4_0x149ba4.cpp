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

// Function: entry_00149ba4
// Address: 0x149ba4 - 0x149bb8
void entry_00149ba4_0x149ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149ba4_0x149ba4");
#endif

    ctx->pc = 0x149ba4u;

    // 0x149ba4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x149ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149ba8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x149BA8u;
    {
        const bool branch_taken_0x149ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ba8) {
            ctx->pc = 0x149BB8u;
            return;
        }
    }
    ctx->pc = 0x149BB0u;
    // 0x149bb0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x149bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149bb4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x149bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x149bb8u;
}
