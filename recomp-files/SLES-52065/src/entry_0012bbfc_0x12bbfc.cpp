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

// Function: entry_0012bbfc
// Address: 0x12bbfc - 0x12bc08
void entry_0012bbfc_0x12bbfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bbfc_0x12bbfc");
#endif

    ctx->pc = 0x12bbfcu;

    // 0x12bbfc: 0x0  nop
    ctx->pc = 0x12bbfcu;
    // NOP
    // 0x12bc00: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x12BC00u;
    {
        const bool branch_taken_0x12bc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC00u;
        // 0x12bc04: 0xe4870010  swc1        $f7, 0x10($a0) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc00) {
            ctx->pc = 0x12BCA8u;
            return;
        }
    }
    ctx->pc = 0x12BC08u;
}
