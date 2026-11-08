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

// Function: entry_0013f394
// Address: 0x13f394 - 0x13f3c4
void entry_0013f394_0x13f394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f394_0x13f394");
#endif

    ctx->pc = 0x13f394u;

    // 0x13f394: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x13f394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13f398: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13f39c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x13f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x13f3a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x13f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13f3a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x13f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13f3a8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x13f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13f3ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13f3b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f3b4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x13f3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13f3b8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F3B8u;
    {
        const bool branch_taken_0x13f3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f3b8) {
            ctx->pc = 0x13F3C4u;
            return;
        }
    }
    ctx->pc = 0x13F3C0u;
    // 0x13f3c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x13f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x13f3c4u;
}
