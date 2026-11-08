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

// Function: entry_001498a8
// Address: 0x1498a8 - 0x1498d8
void entry_001498a8_0x1498a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001498a8_0x1498a8");
#endif

    ctx->pc = 0x1498a8u;

    // 0x1498a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1498a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1498ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1498acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1498b0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1498b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1498b4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1498b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1498b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1498b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1498bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1498bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1498c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1498c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1498c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1498c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1498c8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1498c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1498cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1498CCu;
    {
        const bool branch_taken_0x1498cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1498cc) {
            ctx->pc = 0x1498D8u;
            return;
        }
    }
    ctx->pc = 0x1498D4u;
    // 0x1498d4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1498d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1498d8u;
}
