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

// Function: entry_001f7c44
// Address: 0x1f7c44 - 0x1f7c90
void entry_001f7c44_0x1f7c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7c44_0x1f7c44");
#endif

    ctx->pc = 0x1f7c44u;

    // 0x1f7c44: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1f7c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1f7c48: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1f7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f7c4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1f7c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1f7c50: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1f7c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1f7c54: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1f7c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1f7c58: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f7c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7c5c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1f7c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1f7c60: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1f7c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1f7c64: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f7c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7c68: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f7c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7c6c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1f7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f7c70: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F7C70u;
    {
        const bool branch_taken_0x1f7c70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C70u;
        // 0x1f7c74: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c70) {
            ctx->pc = 0x1F7CCCu;
            return;
        }
    }
    ctx->pc = 0x1F7C78u;
    // 0x1f7c78: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x1f7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1f7c7c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7C7Cu;
    {
        const bool branch_taken_0x1f7c7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C7Cu;
        // 0x1f7c80: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c7c) {
            ctx->pc = 0x1F7C90u;
            return;
        }
    }
    ctx->pc = 0x1F7C84u;
    // 0x1f7c84: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f7c88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F7C88u;
    {
        const bool branch_taken_0x1f7c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C88u;
        // 0x1f7c8c: 0xac50bb10  sw          $s0, -0x44F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294949648), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c88) {
            ctx->pc = 0x1F7CCCu;
            return;
        }
    }
    ctx->pc = 0x1F7C90u;
}
