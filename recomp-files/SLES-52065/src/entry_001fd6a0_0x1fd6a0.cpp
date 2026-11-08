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

// Function: entry_001fd6a0
// Address: 0x1fd6a0 - 0x1fd6c0
void entry_001fd6a0_0x1fd6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd6a0_0x1fd6a0");
#endif

    ctx->pc = 0x1fd6a0u;

label_1fd6a0:
    // 0x1fd6a0: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fd6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1fd6a4: 0x807f9c0  j           func_1FE700
    ctx->pc = 0x1FD6A4u;
    ctx->pc = 0x1FD6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD6A4u;
    // 0x1fd6a8: 0x24a5d3f0  addiu       $a1, $a1, -0x2C10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE700u;
    FUN_001fe700_0x1fe700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD6ACu;
    // 0x1fd6ac: 0x0  nop
    ctx->pc = 0x1fd6acu;
    // NOP
    // 0x1fd6b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fd6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fd6b4: 0x807f5a8  j           func_1FD6A0
    ctx->pc = 0x1FD6B4u;
    ctx->pc = 0x1FD6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD6B4u;
    // 0x1fd6b8: 0x8c44d9ac  lw          $a0, -0x2654($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6A0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1fd6a0;
    ctx->pc = 0x1FD6BCu;
    // 0x1fd6bc: 0x0  nop
    ctx->pc = 0x1fd6bcu;
    // NOP
    ctx->pc = 0x1fd6c0u;
}
