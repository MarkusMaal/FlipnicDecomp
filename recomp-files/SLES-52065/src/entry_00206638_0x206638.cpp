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

// Function: entry_00206638
// Address: 0x206638 - 0x206680
void entry_00206638_0x206638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206638_0x206638");
#endif

    ctx->pc = 0x206638u;

    // 0x206638: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x206638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x20663c: 0xc52006  srlv        $a0, $a1, $a2
    ctx->pc = 0x20663cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x206640: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x206640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x206644: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x206644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x206648: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x206648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20664c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x20664cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206650: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x206650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x206654: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x206654u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x206658: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x206658u;
    {
        const bool branch_taken_0x206658 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x206658) {
            ctx->pc = 0x20665Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206658u;
            // 0x20665c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206680u;
            return;
        }
    }
    ctx->pc = 0x206660u;
    // 0x206660: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x206660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x206664: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x206664u;
    {
        const bool branch_taken_0x206664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206664u;
        // 0x206668: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206664) {
            ctx->pc = 0x2067B8u;
            return;
        }
    }
    ctx->pc = 0x20666Cu;
    // 0x20666c: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x20666cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x206670: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x206670u;
    {
        const bool branch_taken_0x206670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206670u;
        // 0x206674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206670) {
            ctx->pc = 0x2067B8u;
            return;
        }
    }
    ctx->pc = 0x206678u;
    // 0x206678: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x206678u;
    {
        const bool branch_taken_0x206678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206678u;
        // 0x20667c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206678) {
            ctx->pc = 0x2067B8u;
            return;
        }
    }
    ctx->pc = 0x206680u;
}
