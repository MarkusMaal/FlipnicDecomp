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

// Function: entry_001bd458
// Address: 0x1bd458 - 0x1bd488
void entry_001bd458_0x1bd458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd458_0x1bd458");
#endif

    ctx->pc = 0x1bd458u;

    // 0x1bd458: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1bd458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bd45c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd460: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1bd460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1bd464: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1bd464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bd468: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1bd468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bd46c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1bd46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bd470: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bd470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bd474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd478: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1bd478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1bd47c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD47Cu;
    {
        const bool branch_taken_0x1bd47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd47c) {
            ctx->pc = 0x1BD488u;
            return;
        }
    }
    ctx->pc = 0x1BD484u;
    // 0x1bd484: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bd484u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1bd488u;
}
