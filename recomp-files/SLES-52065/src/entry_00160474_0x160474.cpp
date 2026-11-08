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

// Function: entry_00160474
// Address: 0x160474 - 0x1604a4
void entry_00160474_0x160474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160474_0x160474");
#endif

    ctx->pc = 0x160474u;

    // 0x160474: 0x8c832c1c  lw          $v1, 0x2C1C($a0)
    ctx->pc = 0x160474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x160478: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x160478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x16047c: 0x8467000a  lh          $a3, 0xA($v1)
    ctx->pc = 0x16047cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x160480: 0x8c660030  lw          $a2, 0x30($v1)
    ctx->pc = 0x160480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x160484: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x160484u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x160488: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x160488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16048c: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x16048cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x160490: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x160490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x160494: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x160494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x160498: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x160498u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16049c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x16049Cu;
    {
        const bool branch_taken_0x16049c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16049Cu;
        // 0x1604a0: 0x75080  sll         $t2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16049c) {
            ctx->pc = 0x1604C8u;
            return;
        }
    }
    ctx->pc = 0x1604A4u;
}
