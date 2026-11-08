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

// Function: entry_00202f9c
// Address: 0x202f9c - 0x202fcc
void entry_00202f9c_0x202f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202f9c_0x202f9c");
#endif

    ctx->pc = 0x202f9cu;

    // 0x202f9c: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x202f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x202fa0: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x202fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x202fa4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x202fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202fa8: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x202fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x202fac: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x202facu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x202fb0: 0x287182a  slt         $v1, $s4, $a3
    ctx->pc = 0x202fb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x202fb4: 0x283380b  movn        $a3, $s4, $v1
    ctx->pc = 0x202fb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 20));
    // 0x202fb8: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x202FB8u;
    {
        const bool branch_taken_0x202fb8 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x202fb8) {
            ctx->pc = 0x202FCCu;
            return;
        }
    }
    ctx->pc = 0x202FC0u;
    // 0x202fc0: 0x287a023  subu        $s4, $s4, $a3
    ctx->pc = 0x202fc0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x202fc4: 0x2479023  subu        $s2, $s2, $a3
    ctx->pc = 0x202fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x202fc8: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x202fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->pc = 0x202fccu;
}
