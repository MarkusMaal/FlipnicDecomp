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

// Function: entry_0016d0f8
// Address: 0x16d0f8 - 0x16d12c
void entry_0016d0f8_0x16d0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d0f8_0x16d0f8");
#endif

    ctx->pc = 0x16d0f8u;

    // 0x16d0f8: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x16D0F8u;
    {
        const bool branch_taken_0x16d0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d0f8) {
            ctx->pc = 0x16D1A4u;
            return;
        }
    }
    ctx->pc = 0x16D100u;
    // 0x16d100: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x16d104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16d108: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D108u;
    {
        const bool branch_taken_0x16d108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D108u;
        // 0x16d10c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d108) {
            ctx->pc = 0x16D12Cu;
            return;
        }
    }
    ctx->pc = 0x16D110u;
    // 0x16d110: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D110u;
    {
        const bool branch_taken_0x16d110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d110) {
            ctx->pc = 0x16D12Cu;
            return;
        }
    }
    ctx->pc = 0x16D118u;
    // 0x16d118: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16d118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d11c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16D11Cu;
    {
        const bool branch_taken_0x16d11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D11Cu;
        // 0x16d120: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d11c) {
            ctx->pc = 0x16D12Cu;
            return;
        }
    }
    ctx->pc = 0x16D124u;
    // 0x16d124: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x16D124u;
    {
        const bool branch_taken_0x16d124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16d124) {
            ctx->pc = 0x16D1A4u;
            return;
        }
    }
    ctx->pc = 0x16D12Cu;
}
