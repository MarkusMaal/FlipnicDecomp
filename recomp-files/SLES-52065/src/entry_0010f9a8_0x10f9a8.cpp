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

// Function: entry_0010f9a8
// Address: 0x10f9a8 - 0x10f9d4
void entry_0010f9a8_0x10f9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f9a8_0x10f9a8");
#endif

    ctx->pc = 0x10f9a8u;

    // 0x10f9a8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x10f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x10f9ac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x10f9acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x10f9b0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10f9b4: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x10f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x10f9b8: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10f9b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f9bc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x10f9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x10f9c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10f9c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10f9c8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x10f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x10f9cc: 0xac600228  sw          $zero, 0x228($v1)
    ctx->pc = 0x10f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 0));
    // 0x10f9d0: 0xac600230  sw          $zero, 0x230($v1)
    ctx->pc = 0x10f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 0));
    ctx->pc = 0x10f9d4u;
}
