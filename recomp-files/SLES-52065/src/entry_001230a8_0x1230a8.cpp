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

// Function: entry_001230a8
// Address: 0x1230a8 - 0x1230cc
void entry_001230a8_0x1230a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001230a8_0x1230a8");
#endif

    ctx->pc = 0x1230a8u;

    // 0x1230a8: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1230a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1230ac: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x1230acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1230b0: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x1230b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1230b4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1230b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1230b8: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1230B8u;
    {
        const bool branch_taken_0x1230b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1230b8) {
            ctx->pc = 0x1230CCu;
            return;
        }
    }
    ctx->pc = 0x1230C0u;
    // 0x1230c0: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1230c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1230c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1230C4u;
    {
        const bool branch_taken_0x1230c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230C4u;
        // 0x1230c8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230c4) {
            ctx->pc = 0x1230D4u;
            return;
        }
    }
    ctx->pc = 0x1230CCu;
}
