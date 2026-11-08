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

// Function: entry_001214f8
// Address: 0x1214f8 - 0x121510
void entry_001214f8_0x1214f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001214f8_0x1214f8");
#endif

    ctx->pc = 0x1214f8u;

    // 0x1214f8: 0x8ed10008  lw          $s1, 0x8($s6)
    ctx->pc = 0x1214f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1214fc: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x1214fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x121500: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x121500u;
    {
        const bool branch_taken_0x121500 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x121504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121500u;
        // 0x121504: 0x2f083  sra         $fp, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121500) {
            ctx->pc = 0x121510u;
            return;
        }
    }
    ctx->pc = 0x121508u;
    // 0x121508: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x121508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x12150c: 0x2f083  sra         $fp, $v0, 2
    ctx->pc = 0x12150cu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 2));
    ctx->pc = 0x121510u;
}
