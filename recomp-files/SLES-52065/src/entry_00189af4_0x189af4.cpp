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

// Function: entry_00189af4
// Address: 0x189af4 - 0x189b04
void entry_00189af4_0x189af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189af4_0x189af4");
#endif

    ctx->pc = 0x189af4u;

    // 0x189af4: 0x0  nop
    ctx->pc = 0x189af4u;
    // NOP
    // 0x189af8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x189af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x189afc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x189AFCu;
    {
        const bool branch_taken_0x189afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189afc) {
            ctx->pc = 0x189B2Cu;
            return;
        }
    }
    ctx->pc = 0x189B04u;
}
