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

// Function: entry_001644e8
// Address: 0x1644e8 - 0x164508
void entry_001644e8_0x1644e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001644e8_0x1644e8");
#endif

    ctx->pc = 0x1644e8u;

    // 0x1644e8: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1644e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1644ec: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1644ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1644f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1644f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1644f4: 0x84630218  lh          $v1, 0x218($v1)
    ctx->pc = 0x1644f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
    // 0x1644f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1644F8u;
    {
        const bool branch_taken_0x1644f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1644FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644F8u;
        // 0x1644fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644f8) {
            ctx->pc = 0x164508u;
            return;
        }
    }
    ctx->pc = 0x164500u;
    // 0x164500: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x164500u;
    {
        const bool branch_taken_0x164500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164500) {
            ctx->pc = 0x164900u;
            return;
        }
    }
    ctx->pc = 0x164508u;
}
