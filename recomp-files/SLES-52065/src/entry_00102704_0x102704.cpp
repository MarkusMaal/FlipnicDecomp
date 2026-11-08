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

// Function: entry_00102704
// Address: 0x102704 - 0x102720
void entry_00102704_0x102704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102704_0x102704");
#endif

    ctx->pc = 0x102704u;

    // 0x102704: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x102704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102708: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x102708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10270c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x10270cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x102710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102714: 0x84710008  lh          $s1, 0x8($v1)
    ctx->pc = 0x102714u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102718: 0x0  nop
    ctx->pc = 0x102718u;
    // NOP
    // 0x10271c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x102720u;
}
