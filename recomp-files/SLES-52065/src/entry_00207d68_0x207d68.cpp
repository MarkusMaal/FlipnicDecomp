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

// Function: entry_00207d68
// Address: 0x207d68 - 0x207d84
void entry_00207d68_0x207d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207d68_0x207d68");
#endif

    ctx->pc = 0x207d68u;

    // 0x207d68: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x207d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x207d6c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x207d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x207d70: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x207d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x207d74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x207D74u;
    {
        const bool branch_taken_0x207d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D74u;
        // 0x207d78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d74) {
            ctx->pc = 0x207D84u;
            return;
        }
    }
    ctx->pc = 0x207D7Cu;
    // 0x207d7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x207D7Cu;
    {
        const bool branch_taken_0x207d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207D7Cu;
        // 0x207d80: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207d7c) {
            ctx->pc = 0x207D88u;
            return;
        }
    }
    ctx->pc = 0x207D84u;
}
