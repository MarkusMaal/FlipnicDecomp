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

// Function: entry_001c710c
// Address: 0x1c710c - 0x1c7124
void entry_001c710c_0x1c710c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c710c_0x1c710c");
#endif

    ctx->pc = 0x1c710cu;

    // 0x1c710c: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1c710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1c7110: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7114: 0x1462019b  bne         $v1, $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x1C7114u;
    {
        const bool branch_taken_0x1c7114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7114u;
        // 0x1c7118: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7114) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C711Cu;
    // 0x1c711c: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x1C711Cu;
    {
        const bool branch_taken_0x1c711c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C711Cu;
        // 0x1c7120: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c711c) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C7124u;
}
