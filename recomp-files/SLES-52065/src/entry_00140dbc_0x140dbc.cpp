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

// Function: entry_00140dbc
// Address: 0x140dbc - 0x140dec
void entry_00140dbc_0x140dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140dbc_0x140dbc");
#endif

    ctx->pc = 0x140dbcu;

    // 0x140dbc: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x140dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x140dc0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x140dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x140dc4: 0x264082b  sltu        $at, $s3, $a0
    ctx->pc = 0x140dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x140dc8: 0x102000be  beqz        $at, . + 4 + (0xBE << 2)
    ctx->pc = 0x140DC8u;
    {
        const bool branch_taken_0x140dc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140dc8) {
            ctx->pc = 0x1410C4u;
            return;
        }
    }
    ctx->pc = 0x140DD0u;
    // 0x140dd0: 0x111182b  sltu        $v1, $t0, $s1
    ctx->pc = 0x140dd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x140dd4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140DD4u;
    {
        const bool branch_taken_0x140dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x140DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DD4u;
        // 0x140dd8: 0x2281823  subu        $v1, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140dd4) {
            ctx->pc = 0x140DECu;
            return;
        }
    }
    ctx->pc = 0x140DDCu;
    // 0x140ddc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x140ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140de0: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x140de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x140de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x140DE4u;
    {
        const bool branch_taken_0x140de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140DE4u;
        // 0x140de8: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140de4) {
            ctx->pc = 0x140DF4u;
            return;
        }
    }
    ctx->pc = 0x140DECu;
}
