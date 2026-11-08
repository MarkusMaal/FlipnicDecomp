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

// Function: entry_001921f8
// Address: 0x1921f8 - 0x192234
void entry_001921f8_0x1921f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001921f8_0x1921f8");
#endif

    ctx->pc = 0x1921f8u;

    // 0x1921f8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1921f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1921fc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1921fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x192200: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192204: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x192204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x192208: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x192208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19220c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192210: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x192210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192214: 0x8442022c  lh          $v0, 0x22C($v0)
    ctx->pc = 0x192214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x192218: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x192218u;
    {
        const bool branch_taken_0x192218 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x192218) {
            ctx->pc = 0x192250u;
            return;
        }
    }
    ctx->pc = 0x192220u;
    // 0x192220: 0x84e201e8  lh          $v0, 0x1E8($a3)
    ctx->pc = 0x192220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x192224: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192224u;
    {
        const bool branch_taken_0x192224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x192228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192224u;
        // 0x192228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192224) {
            ctx->pc = 0x192234u;
            return;
        }
    }
    ctx->pc = 0x19222Cu;
    // 0x19222c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19222Cu;
    {
        const bool branch_taken_0x19222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19222c) {
            ctx->pc = 0x19223Cu;
            return;
        }
    }
    ctx->pc = 0x192234u;
}
