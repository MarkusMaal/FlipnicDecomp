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

// Function: entry_001a1ae4
// Address: 0x1a1ae4 - 0x1a1afc
void entry_001a1ae4_0x1a1ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ae4_0x1a1ae4");
#endif

    ctx->pc = 0x1a1ae4u;

    // 0x1a1ae4: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1a1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
    // 0x1a1ae8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1AE8u;
    {
        const bool branch_taken_0x1a1ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AE8u;
        // 0x1a1aec: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ae8) {
            ctx->pc = 0x1A1AFCu;
            return;
        }
    }
    ctx->pc = 0x1A1AF0u;
    // 0x1a1af0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1AF0u;
    {
        const bool branch_taken_0x1a1af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AF0u;
        // 0x1a1af4: 0x8c480014  lw          $t0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1af0) {
            ctx->pc = 0x1A1AFCu;
            return;
        }
    }
    ctx->pc = 0x1A1AF8u;
    // 0x1a1af8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a1af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1a1afcu;
}
