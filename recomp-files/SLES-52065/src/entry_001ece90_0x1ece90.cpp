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

// Function: entry_001ece90
// Address: 0x1ece90 - 0x1ece9c
void entry_001ece90_0x1ece90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ece90_0x1ece90");
#endif

    ctx->pc = 0x1ece90u;

    // 0x1ece90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ece90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ece94: 0x807b360  j           func_1ECD80
    ctx->pc = 0x1ECE94u;
    ctx->pc = 0x1ECE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE94u;
    // 0x1ece98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECD80u;
    FUN_001ecd80_0x1ecd80(rdram, ctx, runtime); return;
    ctx->pc = 0x1ECE9Cu;
}
