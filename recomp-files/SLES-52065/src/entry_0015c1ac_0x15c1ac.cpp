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

// Function: entry_0015c1ac
// Address: 0x15c1ac - 0x15c1c8
void entry_0015c1ac_0x15c1ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c1ac_0x15c1ac");
#endif

    ctx->pc = 0x15c1acu;

    // 0x15c1ac: 0x8ec22c1c  lw          $v0, 0x2C1C($s6)
    ctx->pc = 0x15c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
    // 0x15c1b0: 0x2918823  subu        $s1, $s4, $s1
    ctx->pc = 0x15c1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x15c1b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15c1b8: 0x84500008  lh          $s0, 0x8($v0)
    ctx->pc = 0x15c1b8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15c1bc: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x15c1bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15c1c0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x15C1C0u;
    {
        const bool branch_taken_0x15c1c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1C0u;
        // 0x15c1c4: 0x149080  sll         $s2, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1c0) {
            ctx->pc = 0x15C210u;
            return;
        }
    }
    ctx->pc = 0x15C1C8u;
}
