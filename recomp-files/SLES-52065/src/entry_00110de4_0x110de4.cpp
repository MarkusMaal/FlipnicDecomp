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

// Function: entry_00110de4
// Address: 0x110de4 - 0x110e0c
void entry_00110de4_0x110de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110de4_0x110de4");
#endif

    ctx->pc = 0x110de4u;

    // 0x110de4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x110de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x110de8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x110de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x110dec: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110df0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x110df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x110df4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110df4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110df8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x110df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x110dfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110e00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110e04: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x110e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x110e08: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x110e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x110e0cu;
}
