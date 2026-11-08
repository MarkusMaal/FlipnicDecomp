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

// Function: entry_00149814
// Address: 0x149814 - 0x149840
void entry_00149814_0x149814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149814_0x149814");
#endif

    ctx->pc = 0x149814u;

    // 0x149814: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x149814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x149818: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x149818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14981c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x14981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x149820: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x149820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x149824: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x149824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x149828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14982c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149830: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x149830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x149834: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x149834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x149838: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x149838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x14983c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x14983cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x149840u;
}
