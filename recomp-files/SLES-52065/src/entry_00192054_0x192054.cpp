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

// Function: entry_00192054
// Address: 0x192054 - 0x192074
void entry_00192054_0x192054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192054_0x192054");
#endif

    ctx->pc = 0x192054u;

    // 0x192054: 0x0  nop
    ctx->pc = 0x192054u;
    // NOP
    // 0x192058: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192058u;
    {
        const bool branch_taken_0x192058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192058) {
            ctx->pc = 0x192074u;
            return;
        }
    }
    ctx->pc = 0x192060u;
    // 0x192060: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x192064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x192064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192068: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x192068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19206c: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x19206Cu;
    {
        const bool branch_taken_0x19206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19206Cu;
        // 0x192070: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19206c) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x192074u;
}
