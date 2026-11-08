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

// Function: entry_001e0420
// Address: 0x1e0420 - 0x1e0440
void entry_001e0420_0x1e0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0420_0x1e0420");
#endif

    ctx->pc = 0x1e0420u;

    // 0x1e0420: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e0420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e0424: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0424u;
    {
        const bool branch_taken_0x1e0424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0424u;
        // 0x1e0428: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0424) {
            ctx->pc = 0x1E0440u;
            return;
        }
    }
    ctx->pc = 0x1E042Cu;
    // 0x1e042c: 0x5222000a  beql        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E042Cu;
    {
        const bool branch_taken_0x1e042c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e042c) {
            ctx->pc = 0x1E0430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E042Cu;
            // 0x1e0430: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0458u;
            return;
        }
    }
    ctx->pc = 0x1E0434u;
    // 0x1e0434: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E0434u;
    {
        const bool branch_taken_0x1e0434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0434u;
        // 0x1e0438: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0434) {
            ctx->pc = 0x1E04A8u;
            return;
        }
    }
    ctx->pc = 0x1E043Cu;
    // 0x1e043c: 0x0  nop
    ctx->pc = 0x1e043cu;
    // NOP
    ctx->pc = 0x1e0440u;
}
