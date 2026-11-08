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

// Function: entry_00102cf8
// Address: 0x102cf8 - 0x102d10
void entry_00102cf8_0x102cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102cf8_0x102cf8");
#endif

    ctx->pc = 0x102cf8u;

    // 0x102cf8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x102cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102d00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102d04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102d08: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x102d08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x102d0c: 0x0  nop
    ctx->pc = 0x102d0cu;
    // NOP
    ctx->pc = 0x102d10u;
}
