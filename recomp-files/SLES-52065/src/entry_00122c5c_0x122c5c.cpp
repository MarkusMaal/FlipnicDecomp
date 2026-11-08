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

// Function: entry_00122c5c
// Address: 0x122c5c - 0x122c90
void entry_00122c5c_0x122c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122c5c_0x122c5c");
#endif

    ctx->pc = 0x122c5cu;

    // 0x122c5c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x122c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122c60: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x122c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x122c64: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x122c64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122c68: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x122C68u;
    {
        const bool branch_taken_0x122c68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x122c68) {
            ctx->pc = 0x122D68u;
            return;
        }
    }
    ctx->pc = 0x122C70u;
    // 0x122c70: 0xafb3007c  sw          $s3, 0x7C($sp)
    ctx->pc = 0x122c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
    // 0x122c74: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x122c74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x122c78: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x122c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x122c7c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x122c7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122c80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x122C80u;
    {
        const bool branch_taken_0x122c80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C80u;
        // 0x122c84: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c80) {
            ctx->pc = 0x122C90u;
            return;
        }
    }
    ctx->pc = 0x122C88u;
    // 0x122c88: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x122C88u;
    {
        const bool branch_taken_0x122c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C88u;
        // 0x122c8c: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c88) {
            ctx->pc = 0x122D68u;
            return;
        }
    }
    ctx->pc = 0x122C90u;
}
