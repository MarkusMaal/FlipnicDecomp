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

// Function: entry_001a6054
// Address: 0x1a6054 - 0x1a6074
void entry_001a6054_0x1a6054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6054_0x1a6054");
#endif

    ctx->pc = 0x1a6054u;

    // 0x1a6054: 0x0  nop
    ctx->pc = 0x1a6054u;
    // NOP
    // 0x1a6058: 0x8e8200ec  lw          $v0, 0xEC($s4)
    ctx->pc = 0x1a6058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x1a605c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a6060: 0x1c400077  bgtz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1A6060u;
    {
        const bool branch_taken_0x1a6060 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6060u;
        // 0x1a6064: 0xae8200ec  sw          $v0, 0xEC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6060) {
            ctx->pc = 0x1A6240u;
            return;
        }
    }
    ctx->pc = 0x1A6068u;
    // 0x1a6068: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a6068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a606c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1A606Cu;
    {
        const bool branch_taken_0x1a606c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A606Cu;
        // 0x1a6070: 0xae8200e4  sw          $v0, 0xE4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a606c) {
            ctx->pc = 0x1A6240u;
            return;
        }
    }
    ctx->pc = 0x1A6074u;
}
