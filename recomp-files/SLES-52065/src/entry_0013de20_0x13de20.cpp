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

// Function: entry_0013de20
// Address: 0x13de20 - 0x13de4c
void entry_0013de20_0x13de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013de20_0x13de20");
#endif

    ctx->pc = 0x13de20u;

    // 0x13de20: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x13de20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x13de24: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x13DE24u;
    {
        const bool branch_taken_0x13de24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13de24) {
            ctx->pc = 0x13DDECu;
            return;
        }
    }
    ctx->pc = 0x13DE2Cu;
    // 0x13de2c: 0x92a4018a  lbu         $a0, 0x18A($s5)
    ctx->pc = 0x13de2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 394)));
    // 0x13de30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13de30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13de34: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DE34u;
    {
        const bool branch_taken_0x13de34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE34u;
        // 0x13de38: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de34) {
            ctx->pc = 0x13DE50u;
            return;
        }
    }
    ctx->pc = 0x13DE3Cu;
    // 0x13de3c: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DE3Cu;
    {
        const bool branch_taken_0x13de3c = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x13de3c) {
            ctx->pc = 0x13DE4Cu;
            return;
        }
    }
    ctx->pc = 0x13DE44u;
    // 0x13de44: 0x8ea30198  lw          $v1, 0x198($s5)
    ctx->pc = 0x13de44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 408)));
    // 0x13de48: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x13de48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    ctx->pc = 0x13de4cu;
}
