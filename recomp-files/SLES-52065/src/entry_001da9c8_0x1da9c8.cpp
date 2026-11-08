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

// Function: entry_001da9c8
// Address: 0x1da9c8 - 0x1daa04
void entry_001da9c8_0x1da9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da9c8_0x1da9c8");
#endif

    ctx->pc = 0x1da9c8u;

label_1da9c8:
    // 0x1da9c8: 0x1910c0  sll         $v0, $t9, 3
    ctx->pc = 0x1da9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x1da9cc: 0x591023  subu        $v0, $v0, $t9
    ctx->pc = 0x1da9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x1da9d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da9d4: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x1da9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x1da9d8: 0x2f0c0  sll         $fp, $v0, 3
    ctx->pc = 0x1da9d8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1da9dc: 0x3d8b821  addu        $s7, $fp, $t8
    ctx->pc = 0x1da9dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 24)));
    // 0x1da9e0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1da9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1da9e4: 0x1040ff36  beqz        $v0, . + 4 + (-0xCA << 2)
    ctx->pc = 0x1DA9E4u;
    {
        const bool branch_taken_0x1da9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9E4u;
        // 0x1da9e8: 0x3c060038  lui         $a2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9e4) {
            ctx->pc = 0x1DA6C0u;
            return;
        }
    }
    ctx->pc = 0x1DA9ECu;
    // 0x1da9ec: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1da9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x1da9f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1da9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1da9f4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1da9f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1da9f8: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x1da9f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1da9fc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1DA9FCu;
    {
        const bool branch_taken_0x1da9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9FCu;
        // 0x1daa00: 0x242c80a  movz        $t9, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9fc) {
            ctx->pc = 0x1DA9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da9c8;
        }
    }
    ctx->pc = 0x1DAA04u;
}
