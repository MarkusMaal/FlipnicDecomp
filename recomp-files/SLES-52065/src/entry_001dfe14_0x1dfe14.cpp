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

// Function: entry_001dfe14
// Address: 0x1dfe14 - 0x1dfe48
void entry_001dfe14_0x1dfe14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfe14_0x1dfe14");
#endif

    ctx->pc = 0x1dfe14u;

    // 0x1dfe14: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x1dfe14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1dfe18: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
    ctx->pc = 0x1DFE18u;
    {
        const bool branch_taken_0x1dfe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE18u;
        // 0x1dfe1c: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe18) {
            ctx->pc = 0x1DFC20u;
            return;
        }
    }
    ctx->pc = 0x1DFE20u;
    // 0x1dfe20: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1dfe20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1dfe24: 0x8e62b320  lw          $v0, -0x4CE0($s3)
    ctx->pc = 0x1dfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38B320u));
    // 0x1dfe28: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DFE28u;
    {
        const bool branch_taken_0x1dfe28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe28) {
            ctx->pc = 0x1DFE80u;
            return;
        }
    }
    ctx->pc = 0x1DFE30u;
    // 0x1dfe30: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DFE30u;
    {
        const bool branch_taken_0x1dfe30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DFE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE30u;
        // 0x1dfe34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe30) {
            ctx->pc = 0x1DFE7Cu;
            return;
        }
    }
    ctx->pc = 0x1DFE38u;
    // 0x1dfe38: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1dfe3c: 0x2452ab20  addiu       $s2, $v0, -0x54E0
    ctx->pc = 0x1dfe3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945568));
    // 0x1dfe40: 0x26540002  addiu       $s4, $s2, 0x2
    ctx->pc = 0x1dfe40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1dfe44: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x1dfe44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1dfe48u;
}
