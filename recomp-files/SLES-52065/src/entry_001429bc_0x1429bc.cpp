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

// Function: entry_001429bc
// Address: 0x1429bc - 0x1429f4
void entry_001429bc_0x1429bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001429bc_0x1429bc");
#endif

    ctx->pc = 0x1429bcu;

    // 0x1429bc: 0x0  nop
    ctx->pc = 0x1429bcu;
    // NOP
    // 0x1429c0: 0x93c20029  lbu         $v0, 0x29($fp)
    ctx->pc = 0x1429c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 41)));
    // 0x1429c4: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1429C4u;
    {
        const bool branch_taken_0x1429c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429C4u;
        // 0x1429c8: 0x27d0003c  addiu       $s0, $fp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429c4) {
            ctx->pc = 0x142C9Cu;
            return;
        }
    }
    ctx->pc = 0x1429CCu;
    // 0x1429cc: 0x93c30028  lbu         $v1, 0x28($fp)
    ctx->pc = 0x1429ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1429d0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1429d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x1429d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1429d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1429d8: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x1429d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x1429dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1429dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1429e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1429e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1429e4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1429e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1429e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1429e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1429ec: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1429ECu;
    {
        const bool branch_taken_0x1429ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1429F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429ECu;
        // 0x1429f0: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429ec) {
            ctx->pc = 0x142C7Cu;
            return;
        }
    }
    ctx->pc = 0x1429F4u;
}
