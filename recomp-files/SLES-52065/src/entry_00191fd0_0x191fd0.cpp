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

// Function: entry_00191fd0
// Address: 0x191fd0 - 0x19200c
void entry_00191fd0_0x191fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191fd0_0x191fd0");
#endif

    ctx->pc = 0x191fd0u;

    // 0x191fd0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x191fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x191fd4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x191fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x191fd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191fdc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x191fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x191fe0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x191fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191fe4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x191fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x191fe8: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x191fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x191fec: 0x8442022c  lh          $v0, 0x22C($v0)
    ctx->pc = 0x191fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x191ff0: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x191FF0u;
    {
        const bool branch_taken_0x191ff0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x191ff0) {
            ctx->pc = 0x192028u;
            return;
        }
    }
    ctx->pc = 0x191FF8u;
    // 0x191ff8: 0x84e201e8  lh          $v0, 0x1E8($a3)
    ctx->pc = 0x191ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x191ffc: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191FFCu;
    {
        const bool branch_taken_0x191ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x192000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FFCu;
        // 0x192000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ffc) {
            ctx->pc = 0x19200Cu;
            return;
        }
    }
    ctx->pc = 0x192004u;
    // 0x192004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x192004u;
    {
        const bool branch_taken_0x192004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192004) {
            ctx->pc = 0x192014u;
            return;
        }
    }
    ctx->pc = 0x19200Cu;
}
