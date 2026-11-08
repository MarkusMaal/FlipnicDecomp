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

// Function: entry_001f9ef0
// Address: 0x1f9ef0 - 0x1f9efc
void entry_001f9ef0_0x1f9ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9ef0_0x1f9ef0");
#endif

    ctx->pc = 0x1f9ef0u;

    // 0x1f9ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9ef4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1F9EF4u;
    {
        const bool branch_taken_0x1f9ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EF4u;
        // 0x1f9ef8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ef4) {
            ctx->pc = 0x1FA024u;
            return;
        }
    }
    ctx->pc = 0x1F9EFCu;
}
