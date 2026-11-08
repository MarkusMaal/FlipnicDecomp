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

// Function: entry_00145604
// Address: 0x145604 - 0x145628
void entry_00145604_0x145604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145604_0x145604");
#endif

    ctx->pc = 0x145604u;

    // 0x145604: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x145604u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x145608: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x145608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14560c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x14560cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x145610: 0x3012  mflo        $a2
    ctx->pc = 0x145610u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x145614: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x145614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x145618: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x145618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x14561c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14561Cu;
    {
        const bool branch_taken_0x14561c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14561c) {
            ctx->pc = 0x145628u;
            return;
        }
    }
    ctx->pc = 0x145624u;
    // 0x145624: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x145624u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->pc = 0x145628u;
}
