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

// Function: entry_001889b0
// Address: 0x1889b0 - 0x1889bc
void entry_001889b0_0x1889b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001889b0_0x1889b0");
#endif

    ctx->pc = 0x1889b0u;

    // 0x1889b0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1889b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1889b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1889B4u;
    {
        const bool branch_taken_0x1889b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889b4) {
            ctx->pc = 0x1889E4u;
            return;
        }
    }
    ctx->pc = 0x1889BCu;
}
