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

// Function: entry_00143110
// Address: 0x143110 - 0x143124
void entry_00143110_0x143110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143110_0x143110");
#endif

    ctx->pc = 0x143110u;

    // 0x143110: 0x90820029  lbu         $v0, 0x29($a0)
    ctx->pc = 0x143110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x143114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143114u;
    {
        const bool branch_taken_0x143114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143114u;
        // 0x143118: 0x24900030  addiu       $s0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143114) {
            ctx->pc = 0x143124u;
            return;
        }
    }
    ctx->pc = 0x14311Cu;
    // 0x14311c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14311Cu;
    {
        const bool branch_taken_0x14311c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14311Cu;
        // 0x143120: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14311c) {
            ctx->pc = 0x143174u;
            return;
        }
    }
    ctx->pc = 0x143124u;
}
