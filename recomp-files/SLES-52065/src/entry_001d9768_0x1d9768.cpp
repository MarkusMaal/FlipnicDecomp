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

// Function: entry_001d9768
// Address: 0x1d9768 - 0x1d9788
void entry_001d9768_0x1d9768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9768_0x1d9768");
#endif

    ctx->pc = 0x1d9768u;

    // 0x1d9768: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D9768u;
    {
        const bool branch_taken_0x1d9768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9768u;
        // 0x1d976c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9768) {
            ctx->pc = 0x1D97D8u;
            return;
        }
    }
    ctx->pc = 0x1D9770u;
    // 0x1d9770: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d9770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d9774: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D9774u;
    {
        const bool branch_taken_0x1d9774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9774u;
        // 0x1d9778: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9774) {
            ctx->pc = 0x1D97F0u;
            return;
        }
    }
    ctx->pc = 0x1D977Cu;
    // 0x1d977c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1D977Cu;
    {
        const bool branch_taken_0x1d977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D977Cu;
        // 0x1d9780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d977c) {
            ctx->pc = 0x1D9888u;
            return;
        }
    }
    ctx->pc = 0x1D9784u;
    // 0x1d9784: 0x0  nop
    ctx->pc = 0x1d9784u;
    // NOP
    ctx->pc = 0x1d9788u;
}
