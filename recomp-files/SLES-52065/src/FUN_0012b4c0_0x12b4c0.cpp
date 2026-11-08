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

// Function: FUN_0012b4c0
// Address: 0x12b4c0 - 0x12b4d0
void FUN_0012b4c0_0x12b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b4c0_0x12b4c0");
#endif

    ctx->pc = 0x12b4c0u;

    // 0x12b4c0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x12b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12b4c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12b4c8: 0x804aa40  j           func_12A900
    ctx->pc = 0x12B4C8u;
    ctx->pc = 0x12B4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B4C8u;
    // 0x12b4cc: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A900u;
    FUN_0012a900_0x12a900(rdram, ctx, runtime); return;
    ctx->pc = 0x12B4D0u;
}
