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

// Function: entry_00133478
// Address: 0x133478 - 0x133498
void entry_00133478_0x133478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133478_0x133478");
#endif

    ctx->pc = 0x133478u;

    // 0x133478: 0x8f838528  lw          $v1, -0x7AD8($gp)
    ctx->pc = 0x133478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x13347c: 0x8f828530  lw          $v0, -0x7AD0($gp)
    ctx->pc = 0x13347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935856)));
    // 0x133480: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x133480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133484: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x133484u;
    {
        const bool branch_taken_0x133484 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x133488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133484u;
        // 0x133488: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x133484) {
            ctx->pc = 0x133498u;
            return;
        }
    }
    ctx->pc = 0x13348Cu;
    // 0x13348c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13348Cu;
    {
        const bool branch_taken_0x13348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13348c) {
            ctx->pc = 0x133498u;
            return;
        }
    }
    ctx->pc = 0x133494u;
    // 0x133494: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x133494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->pc = 0x133498u;
}
