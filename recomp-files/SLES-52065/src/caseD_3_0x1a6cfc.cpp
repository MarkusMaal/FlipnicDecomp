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

// Function: caseD_3
// Address: 0x1a6cfc - 0x1a6d28
void caseD_3_0x1a6cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1a6cfc");
#endif

    ctx->pc = 0x1a6cfcu;

    // 0x1a6cfc: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x1a6cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1a6d00: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A6D00u;
    {
        const bool branch_taken_0x1a6d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d00) {
            ctx->pc = 0x1A6DB4u;
            return;
        }
    }
    ctx->pc = 0x1A6D08u;
    // 0x1a6d08: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a6d0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a6d10: 0x1c400028  bgtz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A6D10u;
    {
        const bool branch_taken_0x1a6d10 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D10u;
        // 0x1a6d14: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d10) {
            ctx->pc = 0x1A6DB4u;
            return;
        }
    }
    ctx->pc = 0x1A6D18u;
    // 0x1a6d18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a6d1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a6d20: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1A6D20u;
    {
        const bool branch_taken_0x1a6d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D20u;
        // 0x1a6d24: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d20) {
            ctx->pc = 0x1A6DB4u;
            return;
        }
    }
    ctx->pc = 0x1A6D28u;
}
