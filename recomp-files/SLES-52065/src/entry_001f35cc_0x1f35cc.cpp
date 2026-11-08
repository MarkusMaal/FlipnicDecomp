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

// Function: entry_001f35cc
// Address: 0x1f35cc - 0x1f35e0
void entry_001f35cc_0x1f35cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f35cc_0x1f35cc");
#endif

    ctx->pc = 0x1f35ccu;

    // 0x1f35cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F35CCu;
    {
        const bool branch_taken_0x1f35cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f35cc) {
            ctx->pc = 0x1F35D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F35CCu;
            // 0x1f35d0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F35E0u;
            return;
        }
    }
    ctx->pc = 0x1F35D4u;
    // 0x1f35d4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1f35d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1f35d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F35D8u;
    {
        const bool branch_taken_0x1f35d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F35DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35D8u;
        // 0x1f35dc: 0x3442fffd  ori         $v0, $v0, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35d8) {
            ctx->pc = 0x1F35ECu;
            return;
        }
    }
    ctx->pc = 0x1F35E0u;
}
