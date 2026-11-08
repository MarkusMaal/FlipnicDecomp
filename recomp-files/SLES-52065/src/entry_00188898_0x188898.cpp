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

// Function: entry_00188898
// Address: 0x188898 - 0x1888c4
void entry_00188898_0x188898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188898_0x188898");
#endif

    ctx->pc = 0x188898u;

    // 0x188898: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x188898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18889c: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x18889cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1888a0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1888a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1888a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1888a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1888a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1888a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1888ac: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1888acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1888b0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1888b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1888b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1888b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1888b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1888b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1888bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1888bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1888c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1888c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1888c4u;
}
