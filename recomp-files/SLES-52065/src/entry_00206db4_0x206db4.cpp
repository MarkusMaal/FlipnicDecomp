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

// Function: entry_00206db4
// Address: 0x206db4 - 0x206dcc
void entry_00206db4_0x206db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206db4_0x206db4");
#endif

    ctx->pc = 0x206db4u;

    // 0x206db4: 0x13200097  beqz        $t9, . + 4 + (0x97 << 2)
    ctx->pc = 0x206DB4u;
    {
        const bool branch_taken_0x206db4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x206DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DB4u;
        // 0x206db8: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206db4) {
            ctx->pc = 0x207014u;
            return;
        }
    }
    ctx->pc = 0x206DBCu;
    // 0x206dbc: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x206dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x206dc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x206dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x206dc4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x206DC4u;
    {
        const bool branch_taken_0x206dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DC4u;
        // 0x206dc8: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206dc4) {
            ctx->pc = 0x207010u;
            return;
        }
    }
    ctx->pc = 0x206DCCu;
}
