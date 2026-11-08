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

// Function: entry_00177590
// Address: 0x177590 - 0x1775bc
void entry_00177590_0x177590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177590_0x177590");
#endif

    ctx->pc = 0x177590u;

    // 0x177590: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x177590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177594: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x177594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177598: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x177598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17759c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17759cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1775a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1775a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1775a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1775a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1775a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1775a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1775ac: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x1775acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x1775b0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1775b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1775b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1775b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1775b8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1775b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1775bcu;
}
