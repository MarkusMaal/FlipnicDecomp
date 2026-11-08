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

// Function: entry_00139e18
// Address: 0x139e18 - 0x139e50
void entry_00139e18_0x139e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139e18_0x139e18");
#endif

    ctx->pc = 0x139e18u;

    // 0x139e18: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x139e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x139e1c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x139e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x139e20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x139e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139e24: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x139e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x139e28: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x139e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x139e2c: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x139e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x139e30: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x139e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x139e34: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x139e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x139e38: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x139E38u;
    {
        const bool branch_taken_0x139e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x139E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139E38u;
        // 0x139e3c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e38) {
            ctx->pc = 0x139E68u;
            return;
        }
    }
    ctx->pc = 0x139E40u;
    // 0x139e40: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139E40u;
    {
        const bool branch_taken_0x139e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x139e40) {
            ctx->pc = 0x139E50u;
            return;
        }
    }
    ctx->pc = 0x139E48u;
    // 0x139e48: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x139E48u;
    {
        const bool branch_taken_0x139e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e48) {
            ctx->pc = 0x139F7Cu;
            return;
        }
    }
    ctx->pc = 0x139E50u;
}
