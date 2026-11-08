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

// Function: entry_00208a40
// Address: 0x208a40 - 0x208a54
void entry_00208a40_0x208a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208a40_0x208a40");
#endif

    ctx->pc = 0x208a40u;

    // 0x208a40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x208a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x208a44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208A44u;
    {
        const bool branch_taken_0x208a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A44u;
        // 0x208a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a44) {
            ctx->pc = 0x208A54u;
            return;
        }
    }
    ctx->pc = 0x208A4Cu;
    // 0x208a4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208A4Cu;
    {
        const bool branch_taken_0x208a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A4Cu;
        // 0x208a50: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a4c) {
            ctx->pc = 0x208A58u;
            return;
        }
    }
    ctx->pc = 0x208A54u;
}
