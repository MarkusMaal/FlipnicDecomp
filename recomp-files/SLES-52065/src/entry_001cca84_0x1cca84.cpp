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

// Function: entry_001cca84
// Address: 0x1cca84 - 0x1ccaac
void entry_001cca84_0x1cca84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cca84_0x1cca84");
#endif

    ctx->pc = 0x1cca84u;

    // 0x1cca84: 0x0  nop
    ctx->pc = 0x1cca84u;
    // NOP
    // 0x1cca88: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x1cca88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1cca8c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CCA8Cu;
    {
        const bool branch_taken_0x1cca8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCA8Cu;
        // 0x1cca90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca8c) {
            ctx->pc = 0x1CCA44u;
            return;
        }
    }
    ctx->pc = 0x1CCA94u;
    // 0x1cca94: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1cca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1cca98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cca9c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCA9Cu;
    {
        const bool branch_taken_0x1cca9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cca9c) {
            ctx->pc = 0x1CCAACu;
            return;
        }
    }
    ctx->pc = 0x1CCAA4u;
    // 0x1ccaa4: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x1ccaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
    // 0x1ccaa8: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x1ccaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    ctx->pc = 0x1ccaacu;
}
