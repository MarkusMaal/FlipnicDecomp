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

// Function: entry_0015c4ac
// Address: 0x15c4ac - 0x15c4e0
void entry_0015c4ac_0x15c4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c4ac_0x15c4ac");
#endif

    ctx->pc = 0x15c4acu;

    // 0x15c4ac: 0x8ea32c1c  lw          $v1, 0x2C1C($s5)
    ctx->pc = 0x15c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11292)));
    // 0x15c4b0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x15c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15c4b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15c4b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15c4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c4bc: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x15c4bcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15c4c0: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x15c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x15c4c4: 0x8444000a  lh          $a0, 0xA($v0)
    ctx->pc = 0x15c4c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x15c4c8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x15c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15c4cc: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x15c4ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x15c4d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c4d4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x15c4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c4d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15C4D8u;
    {
        const bool branch_taken_0x15c4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C4D8u;
        // 0x15c4dc: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4d8) {
            ctx->pc = 0x15C50Cu;
            return;
        }
    }
    ctx->pc = 0x15C4E0u;
}
