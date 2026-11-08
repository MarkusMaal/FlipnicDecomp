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

// Function: FUN_00187140
// Address: 0x187140 - 0x187150
void FUN_00187140_0x187140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187140_0x187140");
#endif

    ctx->pc = 0x187140u;

    // 0x187140: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x187140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187144: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x187144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x187148: 0x807d392  j           func_1F4E48
    ctx->pc = 0x187148u;
    ctx->pc = 0x18714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187148u;
    // 0x18714c: 0x24849530  addiu       $a0, $a0, -0x6AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    FUN_001f4e48_0x1f4e48(rdram, ctx, runtime); return;
    ctx->pc = 0x187150u;
}
