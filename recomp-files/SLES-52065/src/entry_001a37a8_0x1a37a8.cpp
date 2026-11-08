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

// Function: entry_001a37a8
// Address: 0x1a37a8 - 0x1a37c8
void entry_001a37a8_0x1a37a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a37a8_0x1a37a8");
#endif

    ctx->pc = 0x1a37a8u;

    // 0x1a37a8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1a37a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1a37ac: 0x8c630690  lw          $v1, 0x690($v1)
    ctx->pc = 0x1a37acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1680)));
    // 0x1a37b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1a37b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1a37b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a37b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a37bc: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x1a37bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x1a37c0: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x1a37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
    // 0x1a37c4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1a37c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    ctx->pc = 0x1a37c8u;
}
