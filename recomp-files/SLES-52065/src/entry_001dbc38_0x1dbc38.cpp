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

// Function: entry_001dbc38
// Address: 0x1dbc38 - 0x1dbc6c
void entry_001dbc38_0x1dbc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbc38_0x1dbc38");
#endif

    ctx->pc = 0x1dbc38u;

    // 0x1dbc38: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x1dbc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x1dbc3c: 0x5454000b  bnel        $v0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1DBC3Cu;
    {
        const bool branch_taken_0x1dbc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1dbc3c) {
            ctx->pc = 0x1DBC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBC3Cu;
            // 0x1dbc40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBC6Cu;
            return;
        }
    }
    ctx->pc = 0x1DBC44u;
    // 0x1dbc44: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x1dbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1dbc48: 0x54530008  bnel        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBC48u;
    {
        const bool branch_taken_0x1dbc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1dbc48) {
            ctx->pc = 0x1DBC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBC48u;
            // 0x1dbc4c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBC6Cu;
            return;
        }
    }
    ctx->pc = 0x1DBC50u;
    // 0x1dbc50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dbc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbc54: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBC54u;
    {
        const bool branch_taken_0x1dbc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1dbc54) {
            ctx->pc = 0x1DBC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBC54u;
            // 0x1dbc58: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBC6Cu;
            return;
        }
    }
    ctx->pc = 0x1DBC5Cu;
    // 0x1dbc5c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1dbc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1dbc60: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dbc64: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1dbc64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1dbc68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1dbc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1dbc6cu;
}
