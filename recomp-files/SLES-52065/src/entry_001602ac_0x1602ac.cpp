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

// Function: entry_001602ac
// Address: 0x1602ac - 0x1602dc
void entry_001602ac_0x1602ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001602ac_0x1602ac");
#endif

    ctx->pc = 0x1602acu;

    // 0x1602ac: 0x8ec32c1c  lw          $v1, 0x2C1C($s6)
    ctx->pc = 0x1602acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
    // 0x1602b0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1602b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1602b4: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x1602b4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1602b8: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x1602b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1602bc: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x1602bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1602c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1602c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1602c4: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1602c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1602c8: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x1602c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1602cc: 0x2639021  addu        $s2, $s3, $v1
    ctx->pc = 0x1602ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1602d0: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x1602d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1602d4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1602D4u;
    {
        const bool branch_taken_0x1602d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1602D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602D4u;
        // 0x1602d8: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602d4) {
            ctx->pc = 0x160330u;
            return;
        }
    }
    ctx->pc = 0x1602DCu;
}
