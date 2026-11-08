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

// Function: entry_0012575c
// Address: 0x12575c - 0x125774
void entry_0012575c_0x12575c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012575c_0x12575c");
#endif

    ctx->pc = 0x12575cu;

    // 0x12575c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x12575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x125760: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x125760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125764: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125764u;
    {
        const bool branch_taken_0x125764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x125768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125764u;
        // 0x125768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125764) {
            ctx->pc = 0x125774u;
            return;
        }
    }
    ctx->pc = 0x12576Cu;
    // 0x12576c: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x12576Cu;
    {
        const bool branch_taken_0x12576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12576Cu;
        // 0x125770: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12576c) {
            ctx->pc = 0x125BA8u;
            return;
        }
    }
    ctx->pc = 0x125774u;
}
