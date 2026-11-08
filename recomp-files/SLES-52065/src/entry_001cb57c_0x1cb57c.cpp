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

// Function: entry_001cb57c
// Address: 0x1cb57c - 0x1cb59c
void entry_001cb57c_0x1cb57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb57c_0x1cb57c");
#endif

    ctx->pc = 0x1cb57cu;

    // 0x1cb57c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB57Cu;
    {
        const bool branch_taken_0x1cb57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB57Cu;
        // 0x1cb580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb57c) {
            ctx->pc = 0x1CB5A0u;
            return;
        }
    }
    ctx->pc = 0x1CB584u;
    // 0x1cb584: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1cb584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1cb588: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB588u;
    {
        const bool branch_taken_0x1cb588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cb588) {
            ctx->pc = 0x1CB59Cu;
            return;
        }
    }
    ctx->pc = 0x1CB590u;
    // 0x1cb590: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x1cb590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1cb594: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb598: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x1cb598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    ctx->pc = 0x1cb59cu;
}
