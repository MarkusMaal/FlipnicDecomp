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

// Function: entry_00102d10
// Address: 0x102d10 - 0x102d44
void entry_00102d10_0x102d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102d10_0x102d10");
#endif

    ctx->pc = 0x102d10u;

    // 0x102d10: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x102d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102d14: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x102d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x102d18: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x102d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x102d1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x102d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102d20: 0x8c822c1c  lw          $v0, 0x2C1C($a0)
    ctx->pc = 0x102d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11292)));
    // 0x102d24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102d28: 0xa4450008  sh          $a1, 0x8($v0)
    ctx->pc = 0x102d28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x102d2c: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x102d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x102d30: 0x8c422c1c  lw          $v0, 0x2C1C($v0)
    ctx->pc = 0x102d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11292)));
    // 0x102d34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102d38: 0x845e0008  lh          $fp, 0x8($v0)
    ctx->pc = 0x102d38u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x102d3c: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x102D3Cu;
    {
        const bool branch_taken_0x102d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102D3Cu;
        // 0x102d40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102d3c) {
            ctx->pc = 0x1032F8u;
            return;
        }
    }
    ctx->pc = 0x102D44u;
}
