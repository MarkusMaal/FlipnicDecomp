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

// Function: entry_001deb04
// Address: 0x1deb04 - 0x1deb48
void entry_001deb04_0x1deb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001deb04_0x1deb04");
#endif

    ctx->pc = 0x1deb04u;

    // 0x1deb04: 0x265200e8  addiu       $s2, $s2, 0xE8
    ctx->pc = 0x1deb04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 232));
    // 0x1deb08: 0x2bc20030  slti        $v0, $fp, 0x30
    ctx->pc = 0x1deb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1deb0c: 0x1440fdfe  bnez        $v0, . + 4 + (-0x202 << 2)
    ctx->pc = 0x1DEB0Cu;
    {
        const bool branch_taken_0x1deb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB0Cu;
        // 0x1deb10: 0x261000e8  addiu       $s0, $s0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb0c) {
            ctx->pc = 0x1DE308u;
            return;
        }
    }
    ctx->pc = 0x1DEB14u;
    // 0x1deb14: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1deb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1deb18: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1deb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1deb1c: 0x24517318  addiu       $s1, $v0, 0x7318
    ctx->pc = 0x1deb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29464));
    // 0x1deb20: 0x24707310  addiu       $s0, $v1, 0x7310
    ctx->pc = 0x1deb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29456));
    // 0x1deb24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1deb24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387318u));
    // 0x1deb28: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1deb28u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387310u));
    // 0x1deb2c: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEB2Cu;
    {
        const bool branch_taken_0x1deb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1DEB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB2Cu;
        // 0x1deb30: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb2c) {
            ctx->pc = 0x1DEB48u;
            return;
        }
    }
    ctx->pc = 0x1DEB34u;
    // 0x1deb34: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1deb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1deb38: 0x1047000a  beq         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1DEB38u;
    {
        const bool branch_taken_0x1deb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1DEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB38u;
        // 0x1deb3c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb38) {
            ctx->pc = 0x1DEB64u;
            return;
        }
    }
    ctx->pc = 0x1DEB40u;
    // 0x1deb40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEB40u;
    {
        const bool branch_taken_0x1deb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deb40) {
            ctx->pc = 0x1DEB4Cu;
            return;
        }
    }
    ctx->pc = 0x1DEB48u;
}
