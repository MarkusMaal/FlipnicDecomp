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

// Function: entry_00178db0
// Address: 0x178db0 - 0x178dcc
void entry_00178db0_0x178db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178db0_0x178db0");
#endif

    ctx->pc = 0x178db0u;

    // 0x178db0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x178db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x178db4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x178db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x178db8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x178db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x178dbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x178dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x178dc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x178dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x178dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x178dc8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x178dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x178dccu;
}
