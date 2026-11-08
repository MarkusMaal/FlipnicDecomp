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

// Function: entry_001fcd18
// Address: 0x1fcd18 - 0x1fcd48
void entry_001fcd18_0x1fcd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcd18_0x1fcd18");
#endif

    ctx->pc = 0x1fcd18u;

    // 0x1fcd18: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FCD18u;
    {
        const bool branch_taken_0x1fcd18 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1FCD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD18u;
        // 0x1fcd1c: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd18) {
            ctx->pc = 0x1FCD48u;
            return;
        }
    }
    ctx->pc = 0x1FCD20u;
    // 0x1fcd20: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCD20u;
    {
        const bool branch_taken_0x1fcd20 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1FCD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD20u;
        // 0x1fcd24: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd20) {
            ctx->pc = 0x1FCD48u;
            return;
        }
    }
    ctx->pc = 0x1FCD28u;
    // 0x1fcd28: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x1fcd28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fcd2c: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x1fcd2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
    // 0x1fcd30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1fcd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fcd34: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x1fcd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1fcd38: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1fcd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1fcd3c: 0x2348823  subu        $s1, $s1, $s4
    ctx->pc = 0x1fcd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1fcd40: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x1fcd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1fcd44: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1fcd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->pc = 0x1fcd48u;
}
