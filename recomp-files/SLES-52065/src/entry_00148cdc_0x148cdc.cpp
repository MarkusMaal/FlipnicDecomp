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

// Function: entry_00148cdc
// Address: 0x148cdc - 0x148cf0
void entry_00148cdc_0x148cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148cdc_0x148cdc");
#endif

    ctx->pc = 0x148cdcu;

    // 0x148cdc: 0xe48c0140  swc1        $f12, 0x140($a0)
    ctx->pc = 0x148cdcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x148ce0: 0xe48c0144  swc1        $f12, 0x144($a0)
    ctx->pc = 0x148ce0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x148ce4: 0xe48c01f0  swc1        $f12, 0x1F0($a0)
    ctx->pc = 0x148ce4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 496), bits); }
    // 0x148ce8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x148CE8u;
    {
        const bool branch_taken_0x148ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CE8u;
        // 0x148cec: 0xe48c01f4  swc1        $f12, 0x1F4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 500), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ce8) {
            ctx->pc = 0x148CF8u;
            return;
        }
    }
    ctx->pc = 0x148CF0u;
}
