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

// Function: entry_001118ac
// Address: 0x1118ac - 0x1118d4
void entry_001118ac_0x1118ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001118ac_0x1118ac");
#endif

    ctx->pc = 0x1118acu;

    // 0x1118ac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1118acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1118b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1118b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1118b4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x1118b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1118b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1118b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1118bc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1118bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1118c0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1118c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1118c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1118c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1118c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1118c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1118cc: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x1118ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1118d0: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x1118d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x1118d4u;
}
