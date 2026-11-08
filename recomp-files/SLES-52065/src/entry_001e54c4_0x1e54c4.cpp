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

// Function: entry_001e54c4
// Address: 0x1e54c4 - 0x1e54ec
void entry_001e54c4_0x1e54c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e54c4_0x1e54c4");
#endif

    ctx->pc = 0x1e54c4u;

    // 0x1e54c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e54c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e54c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1e54cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e54d0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e54d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e54d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e54d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E54D8u;
    {
        const bool branch_taken_0x1e54d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E54D8u;
        // 0x1e54dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54d8) {
            ctx->pc = 0x1E54F0u;
            return;
        }
    }
    ctx->pc = 0x1E54E0u;
    // 0x1e54e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e54e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e54e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e54e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e54e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1e54ecu;
}
