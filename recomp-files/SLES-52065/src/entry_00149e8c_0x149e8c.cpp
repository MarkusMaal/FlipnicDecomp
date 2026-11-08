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

// Function: entry_00149e8c
// Address: 0x149e8c - 0x149ec4
void entry_00149e8c_0x149e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149e8c_0x149e8c");
#endif

    ctx->pc = 0x149e8cu;

    // 0x149e8c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x149e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x149e90: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x149e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x149e94: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x149e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x149e98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149e9c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x149e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x149ea0: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x149ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x149ea4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149ea8: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x149ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x149eac: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x149eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x149eb0: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x149eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x149eb4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x149eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x149eb8: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x149eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x149ebc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x149ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149ec0: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x149ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    ctx->pc = 0x149ec4u;
}
