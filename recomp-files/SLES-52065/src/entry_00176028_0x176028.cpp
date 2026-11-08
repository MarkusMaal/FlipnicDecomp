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

// Function: entry_00176028
// Address: 0x176028 - 0x176044
void entry_00176028_0x176028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176028_0x176028");
#endif

    ctx->pc = 0x176028u;

    // 0x176028: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x176028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17602c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x17602cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x176030: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x176030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x176034: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176038: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x176038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17603c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17603cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176040: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x176040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x176044u;
}
