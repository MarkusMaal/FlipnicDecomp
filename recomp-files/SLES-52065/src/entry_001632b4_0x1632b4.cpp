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

// Function: entry_001632b4
// Address: 0x1632b4 - 0x1632e4
void entry_001632b4_0x1632b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001632b4_0x1632b4");
#endif

    ctx->pc = 0x1632b4u;

    // 0x1632b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1632b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1632b8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1632b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1632bc: 0x84630218  lh          $v1, 0x218($v1)
    ctx->pc = 0x1632bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
    // 0x1632c0: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1632C0u;
    {
        const bool branch_taken_0x1632c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1632c0) {
            ctx->pc = 0x163354u;
            return;
        }
    }
    ctx->pc = 0x1632C8u;
    // 0x1632c8: 0x862301f4  lh          $v1, 0x1F4($s1)
    ctx->pc = 0x1632c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x1632cc: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1632ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1632d0: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1632d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1632d4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1632d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1632d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1632D8u;
    {
        const bool branch_taken_0x1632d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632D8u;
        // 0x1632dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632d8) {
            ctx->pc = 0x1632E4u;
            return;
        }
    }
    ctx->pc = 0x1632E0u;
    // 0x1632e0: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x1632e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    ctx->pc = 0x1632e4u;
}
