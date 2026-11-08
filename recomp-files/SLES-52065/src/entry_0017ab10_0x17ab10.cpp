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

// Function: entry_0017ab10
// Address: 0x17ab10 - 0x17ab20
void entry_0017ab10_0x17ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ab10_0x17ab10");
#endif

    ctx->pc = 0x17ab10u;

    // 0x17ab10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ab14: 0x8046006c  lb          $a2, 0x6C($v0)
    ctx->pc = 0x17ab14u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x17ab18: 0x805a924  j           func_16A490
    ctx->pc = 0x17AB18u;
    ctx->pc = 0x17AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB18u;
    // 0x17ab1c: 0x24840220  addiu       $a0, $a0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A490u;
    FUN_0016a490_0x16a490(rdram, ctx, runtime); return;
    ctx->pc = 0x17AB20u;
}
