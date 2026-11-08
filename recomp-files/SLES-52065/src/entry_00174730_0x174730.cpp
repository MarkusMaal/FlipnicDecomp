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

// Function: entry_00174730
// Address: 0x174730 - 0x17474c
void entry_00174730_0x174730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174730_0x174730");
#endif

    ctx->pc = 0x174730u;

    // 0x174730: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x174730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174734: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x174734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x174738: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x174738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17473c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17473cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174740: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x174744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174748: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x174748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x17474cu;
}
