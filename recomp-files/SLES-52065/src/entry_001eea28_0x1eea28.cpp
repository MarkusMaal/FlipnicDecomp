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

// Function: entry_001eea28
// Address: 0x1eea28 - 0x1eea3c
void entry_001eea28_0x1eea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eea28_0x1eea28");
#endif

    ctx->pc = 0x1eea28u;

    // 0x1eea28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eea28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eea2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1eea2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eea30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eea30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eea34: 0x807d0ea  j           func_1F43A8
    ctx->pc = 0x1EEA34u;
    ctx->pc = 0x1EEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EEA34u;
    // 0x1eea38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    FUN_001f43a8_0x1f43a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1EEA3Cu;
}
