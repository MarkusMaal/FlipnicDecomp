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

// Function: entry_001603ac
// Address: 0x1603ac - 0x1603dc
void entry_001603ac_0x1603ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001603ac_0x1603ac");
#endif

    ctx->pc = 0x1603acu;

    // 0x1603ac: 0x8ec32c1c  lw          $v1, 0x2C1C($s6)
    ctx->pc = 0x1603acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
    // 0x1603b0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1603b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1603b4: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x1603b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1603b8: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x1603b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1603bc: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x1603bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1603c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1603c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1603c4: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1603c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1603c8: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x1603c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1603cc: 0x2639021  addu        $s2, $s3, $v1
    ctx->pc = 0x1603ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1603d0: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x1603d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1603d4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1603D4u;
    {
        const bool branch_taken_0x1603d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603D4u;
        // 0x1603d8: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603d4) {
            ctx->pc = 0x160428u;
            return;
        }
    }
    ctx->pc = 0x1603DCu;
}
