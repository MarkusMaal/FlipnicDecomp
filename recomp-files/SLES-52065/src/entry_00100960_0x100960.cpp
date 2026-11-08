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

// Function: entry_00100960
// Address: 0x100960 - 0x100978
void entry_00100960_0x100960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100960_0x100960");
#endif

    ctx->pc = 0x100960u;

    // 0x100960: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x100960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x100964: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x100964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x100968: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x100968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10096c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x100970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100974: 0xac450254  sw          $a1, 0x254($v0)
    ctx->pc = 0x100974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 596), GPR_U32(ctx, 5));
    ctx->pc = 0x100978u;
}
