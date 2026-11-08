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

// Function: entry_0018b7d8
// Address: 0x18b7d8 - 0x18b7fc
void entry_0018b7d8_0x18b7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b7d8_0x18b7d8");
#endif

    ctx->pc = 0x18b7d8u;

    // 0x18b7d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b7dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b7e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18b7e4: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x18b7e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x18b7e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b7ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18b7ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b7f0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18b7f4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B7F4u;
    {
        const bool branch_taken_0x18b7f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7F4u;
        // 0x18b7f8: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7f4) {
            ctx->pc = 0x18B81Cu;
            return;
        }
    }
    ctx->pc = 0x18B7FCu;
}
