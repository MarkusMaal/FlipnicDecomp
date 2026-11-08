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

// Function: entry_0012f714
// Address: 0x12f714 - 0x12f744
void entry_0012f714_0x12f714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f714_0x12f714");
#endif

    ctx->pc = 0x12f714u;

    // 0x12f714: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x12f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12f718: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f71c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F71Cu;
    {
        const bool branch_taken_0x12f71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f71c) {
            ctx->pc = 0x12F744u;
            return;
        }
    }
    ctx->pc = 0x12F724u;
    // 0x12f724: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x12f724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x12f728: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x12f728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x12f72c: 0x24423e74  addiu       $v0, $v0, 0x3E74
    ctx->pc = 0x12f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15988));
    // 0x12f730: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f734: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12f738: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x12f738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x12f73c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12F73Cu;
    {
        const bool branch_taken_0x12f73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F73Cu;
        // 0x12f740: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f73c) {
            ctx->pc = 0x12F754u;
            return;
        }
    }
    ctx->pc = 0x12F744u;
}
