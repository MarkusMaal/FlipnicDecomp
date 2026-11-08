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

// Function: entry_00177404
// Address: 0x177404 - 0x177430
void entry_00177404_0x177404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177404_0x177404");
#endif

    ctx->pc = 0x177404u;

    // 0x177404: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x177404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177408: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x177408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17740c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x17740cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177410: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x177410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x177414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x177414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177418: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x177418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17741c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17741cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x177420: 0xac660040  sw          $a2, 0x40($v1)
    ctx->pc = 0x177420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 6));
    // 0x177424: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x177424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x177428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x177428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17742c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x17742cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x177430u;
}
