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

// Function: entry_001a1ab4
// Address: 0x1a1ab4 - 0x1a1adc
void entry_001a1ab4_0x1a1ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ab4_0x1a1ab4");
#endif

    ctx->pc = 0x1a1ab4u;

    // 0x1a1ab4: 0x8e830678  lw          $v1, 0x678($s4)
    ctx->pc = 0x1a1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1a1ab8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a1abc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1ABCu;
    {
        const bool branch_taken_0x1a1abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ABCu;
        // 0x1a1ac0: 0x8f848714  lw          $a0, -0x78EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1abc) {
            ctx->pc = 0x1A1AE4u;
            return;
        }
    }
    ctx->pc = 0x1A1AC4u;
    // 0x1a1ac4: 0x8e8206a8  lw          $v0, 0x6A8($s4)
    ctx->pc = 0x1a1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1704)));
    // 0x1a1ac8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1AC8u;
    {
        const bool branch_taken_0x1a1ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AC8u;
        // 0x1a1acc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ac8) {
            ctx->pc = 0x1A1ADCu;
            return;
        }
    }
    ctx->pc = 0x1A1AD0u;
    // 0x1a1ad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1AD0u;
    {
        const bool branch_taken_0x1a1ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AD0u;
        // 0x1a1ad4: 0x8c480010  lw          $t0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ad0) {
            ctx->pc = 0x1A1ADCu;
            return;
        }
    }
    ctx->pc = 0x1A1AD8u;
    // 0x1a1ad8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a1ad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1a1adcu;
}
