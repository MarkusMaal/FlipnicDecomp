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

// Function: entry_00174490
// Address: 0x174490 - 0x1744b4
void entry_00174490_0x174490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174490_0x174490");
#endif

    ctx->pc = 0x174490u;

    // 0x174490: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x174490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174494: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x174494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x174498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17449c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1744a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1744a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1744a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1744a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1744a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1744a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1744ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1744acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1744b0: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x1744b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    ctx->pc = 0x1744b4u;
}
