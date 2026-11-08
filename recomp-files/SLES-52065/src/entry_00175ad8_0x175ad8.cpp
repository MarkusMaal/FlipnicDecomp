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

// Function: entry_00175ad8
// Address: 0x175ad8 - 0x175afc
void entry_00175ad8_0x175ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175ad8_0x175ad8");
#endif

    ctx->pc = 0x175ad8u;

    // 0x175ad8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x175ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175adc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x175adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x175ae0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175ae4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x175ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x175ae8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x175ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175aec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x175af0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x175af0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x175af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175af8: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x175af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    ctx->pc = 0x175afcu;
}
