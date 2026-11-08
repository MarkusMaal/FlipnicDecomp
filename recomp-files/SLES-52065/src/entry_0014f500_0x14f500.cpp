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

// Function: entry_0014f500
// Address: 0x14f500 - 0x14f508
void entry_0014f500_0x14f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f500_0x14f500");
#endif

    ctx->pc = 0x14f500u;

    // 0x14f500: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F500u;
    {
        const bool branch_taken_0x14f500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F500u;
        // 0x14f504: 0xe6030050  swc1        $f3, 0x50($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f500) {
            ctx->pc = 0x14F538u;
            return;
        }
    }
    ctx->pc = 0x14F508u;
}
