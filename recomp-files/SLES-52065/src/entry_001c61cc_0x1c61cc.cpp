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

// Function: entry_001c61cc
// Address: 0x1c61cc - 0x1c61d8
void entry_001c61cc_0x1c61cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c61cc_0x1c61cc");
#endif

    ctx->pc = 0x1c61ccu;

    // 0x1c61cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C61CCu;
    {
        const bool branch_taken_0x1c61cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61CCu;
        // 0x1c61d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61cc) {
            ctx->pc = 0x1C61D8u;
            return;
        }
    }
    ctx->pc = 0x1C61D4u;
    // 0x1c61d4: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x1c61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    ctx->pc = 0x1c61d8u;
}
