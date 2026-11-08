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

// Function: entry_001f0218
// Address: 0x1f0218 - 0x1f0230
void entry_001f0218_0x1f0218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0218_0x1f0218");
#endif

    ctx->pc = 0x1f0218u;

    // 0x1f0218: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x1f0218u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x1f021c: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x1f021cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x1f0220: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0220u;
    {
        const bool branch_taken_0x1f0220 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1F0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0220u;
        // 0x1f0224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0220) {
            ctx->pc = 0x1F0250u;
            return;
        }
    }
    ctx->pc = 0x1F0228u;
    // 0x1f0228: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x1f0228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1f022c: 0x0  nop
    ctx->pc = 0x1f022cu;
    // NOP
    ctx->pc = 0x1f0230u;
}
