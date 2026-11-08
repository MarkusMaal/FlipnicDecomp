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

// Function: entry_00121438
// Address: 0x121438 - 0x12146c
void entry_00121438_0x121438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121438_0x121438");
#endif

    ctx->pc = 0x121438u;

    // 0x121438: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x121438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x12143c: 0x8ed30000  lw          $s3, 0x0($s6)
    ctx->pc = 0x12143cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x121440: 0x759021  addu        $s2, $v1, $s5
    ctx->pc = 0x121440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x121444: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x121444u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x121448: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x121448u;
    {
        const bool branch_taken_0x121448 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121448u;
        // 0x12144c: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121448) {
            ctx->pc = 0x1214F8u;
            return;
        }
    }
    ctx->pc = 0x121450u;
    // 0x121450: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x121450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x121454: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x121454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x121458: 0xb01823  subu        $v1, $a1, $s0
    ctx->pc = 0x121458u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x12145c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12145Cu;
    {
        const bool branch_taken_0x12145c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x121460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12145Cu;
        // 0x121460: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12145c) {
            ctx->pc = 0x12146Cu;
            return;
        }
    }
    ctx->pc = 0x121464u;
    // 0x121464: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x121464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x121468: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x121468u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    ctx->pc = 0x12146cu;
}
