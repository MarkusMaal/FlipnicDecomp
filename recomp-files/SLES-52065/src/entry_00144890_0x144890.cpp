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

// Function: entry_00144890
// Address: 0x144890 - 0x1448a0
void entry_00144890_0x144890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144890_0x144890");
#endif

    ctx->pc = 0x144890u;

    // 0x144890: 0x807d38e  j           func_1F4E38
    ctx->pc = 0x144890u;
    ctx->pc = 0x144894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144890u;
    // 0x144894: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    MemCopy128_0x1f4e38(rdram, ctx, runtime); return;
    ctx->pc = 0x144898u;
    // 0x144898: 0x0  nop
    ctx->pc = 0x144898u;
    // NOP
    // 0x14489c: 0x0  nop
    ctx->pc = 0x14489cu;
    // NOP
    ctx->pc = 0x1448a0u;
}
