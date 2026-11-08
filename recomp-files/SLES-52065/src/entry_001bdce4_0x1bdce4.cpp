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

// Function: entry_001bdce4
// Address: 0x1bdce4 - 0x1bdd0c
void entry_001bdce4_0x1bdce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdce4_0x1bdce4");
#endif

    ctx->pc = 0x1bdce4u;

    // 0x1bdce4: 0x208001b  divu        $zero, $s0, $t0
    ctx->pc = 0x1bdce4u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x1bdce8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1bdce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bdcec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1bdcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdcf0: 0x1812  mflo        $v1
    ctx->pc = 0x1bdcf0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1bdcf4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1bdcf8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1bdcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bdcfc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1bdcfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bdd00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDD00u;
    {
        const bool branch_taken_0x1bdd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdd00) {
            ctx->pc = 0x1BDD0Cu;
            return;
        }
    }
    ctx->pc = 0x1BDD08u;
    // 0x1bdd08: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bdd08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1bdd0cu;
}
