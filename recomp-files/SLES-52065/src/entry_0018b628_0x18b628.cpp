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

// Function: entry_0018b628
// Address: 0x18b628 - 0x18b64c
void entry_0018b628_0x18b628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b628_0x18b628");
#endif

    ctx->pc = 0x18b628u;

    // 0x18b628: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x18b628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b62c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b630: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18b630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18b634: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x18b634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x18b638: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b63c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18b640: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x18b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18b644: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x18B644u;
    {
        const bool branch_taken_0x18b644 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B644u;
        // 0x18b648: 0x62a821  addu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b644) {
            ctx->pc = 0x18B694u;
            return;
        }
    }
    ctx->pc = 0x18B64Cu;
}
