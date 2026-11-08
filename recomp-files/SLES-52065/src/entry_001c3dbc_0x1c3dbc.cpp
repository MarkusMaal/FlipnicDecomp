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

// Function: entry_001c3dbc
// Address: 0x1c3dbc - 0x1c3dd4
void entry_001c3dbc_0x1c3dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3dbc_0x1c3dbc");
#endif

    ctx->pc = 0x1c3dbcu;

    // 0x1c3dbc: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x1c3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1c3dc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c3dc4: 0x14620190  bne         $v1, $v0, . + 4 + (0x190 << 2)
    ctx->pc = 0x1C3DC4u;
    {
        const bool branch_taken_0x1c3dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DC4u;
        // 0x1c3dc8: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dc4) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3DCCu;
    // 0x1c3dcc: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x1C3DCCu;
    {
        const bool branch_taken_0x1c3dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DCCu;
        // 0x1c3dd0: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dcc) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3DD4u;
}
