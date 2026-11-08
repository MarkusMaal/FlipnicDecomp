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

// Function: entry_001ac4a0
// Address: 0x1ac4a0 - 0x1ac4cc
void entry_001ac4a0_0x1ac4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac4a0_0x1ac4a0");
#endif

    ctx->pc = 0x1ac4a0u;

    // 0x1ac4a0: 0x922306da  lbu         $v1, 0x6DA($s1)
    ctx->pc = 0x1ac4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1754)));
    // 0x1ac4a4: 0x146000fb  bnez        $v1, . + 4 + (0xFB << 2)
    ctx->pc = 0x1AC4A4u;
    {
        const bool branch_taken_0x1ac4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac4a4) {
            ctx->pc = 0x1AC894u;
            return;
        }
    }
    ctx->pc = 0x1AC4ACu;
    // 0x1ac4ac: 0x8e230670  lw          $v1, 0x670($s1)
    ctx->pc = 0x1ac4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x1ac4b0: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x1ac4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ac4b4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC4B4u;
    {
        const bool branch_taken_0x1ac4b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac4b4) {
            ctx->pc = 0x1AC4CCu;
            return;
        }
    }
    ctx->pc = 0x1AC4BCu;
    // 0x1ac4bc: 0x8e23069c  lw          $v1, 0x69C($s1)
    ctx->pc = 0x1ac4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
    // 0x1ac4c0: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x1ac4c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ac4c4: 0x146000f3  bnez        $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x1AC4C4u;
    {
        const bool branch_taken_0x1ac4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac4c4) {
            ctx->pc = 0x1AC894u;
            return;
        }
    }
    ctx->pc = 0x1AC4CCu;
}
