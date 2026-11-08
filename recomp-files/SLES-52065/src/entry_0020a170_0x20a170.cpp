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

// Function: entry_0020a170
// Address: 0x20a170 - 0x20a19c
void entry_0020a170_0x20a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a170_0x20a170");
#endif

    ctx->pc = 0x20a170u;

    // 0x20a170: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a174: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x20A174u;
    {
        const bool branch_taken_0x20a174 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A174u;
        // 0x20a178: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a174) {
            ctx->pc = 0x20A284u;
            return;
        }
    }
    ctx->pc = 0x20A17Cu;
    // 0x20a17c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x20a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x20a180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a184: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x20a184u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20a188: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x20A188u;
    {
        const bool branch_taken_0x20a188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A188u;
        // 0x20a18c: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a188) {
            ctx->pc = 0x20A218u;
            return;
        }
    }
    ctx->pc = 0x20A190u;
    // 0x20a190: 0x260309ff  addiu       $v1, $s0, 0x9FF
    ctx->pc = 0x20a190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
    // 0x20a194: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A194u;
    {
        const bool branch_taken_0x20a194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a194) {
            ctx->pc = 0x20A198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A194u;
            // 0x20a198: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A19Cu;
            return;
        }
    }
    ctx->pc = 0x20A19Cu;
}
