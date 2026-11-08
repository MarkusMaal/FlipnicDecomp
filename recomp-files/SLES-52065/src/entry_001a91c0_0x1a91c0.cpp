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

// Function: entry_001a91c0
// Address: 0x1a91c0 - 0x1a91e4
void entry_001a91c0_0x1a91c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a91c0_0x1a91c0");
#endif

    ctx->pc = 0x1a91c0u;

    // 0x1a91c0: 0x29e1821  addu        $v1, $s4, $fp
    ctx->pc = 0x1a91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x1a91c4: 0x8c6206d4  lw          $v0, 0x6D4($v1)
    ctx->pc = 0x1a91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1748)));
    // 0x1a91c8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1a91c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a91cc: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x1A91CCu;
    {
        const bool branch_taken_0x1a91cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a91cc) {
            ctx->pc = 0x1A8F6Cu;
            return;
        }
    }
    ctx->pc = 0x1A91D4u;
    // 0x1a91d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1a91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a91d8: 0x27de0068  addiu       $fp, $fp, 0x68
    ctx->pc = 0x1a91d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 104));
    // 0x1a91dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a91e0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1a91e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    ctx->pc = 0x1a91e4u;
}
