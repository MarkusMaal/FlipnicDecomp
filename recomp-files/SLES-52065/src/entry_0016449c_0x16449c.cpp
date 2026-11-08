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

// Function: entry_0016449c
// Address: 0x16449c - 0x1644e8
void entry_0016449c_0x16449c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016449c_0x16449c");
#endif

    ctx->pc = 0x16449cu;

    // 0x16449c: 0x8e440244  lw          $a0, 0x244($s2)
    ctx->pc = 0x16449cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 580)));
    // 0x1644a0: 0x10910058  beq         $a0, $s1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1644A0u;
    {
        const bool branch_taken_0x1644a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x1644A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644A0u;
        // 0x1644a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644a0) {
            ctx->pc = 0x164604u;
            return;
        }
    }
    ctx->pc = 0x1644A8u;
    // 0x1644a8: 0x8e4201d4  lw          $v0, 0x1D4($s2)
    ctx->pc = 0x1644a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x1644ac: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1644ACu;
    {
        const bool branch_taken_0x1644ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644ac) {
            ctx->pc = 0x164714u;
            return;
        }
    }
    ctx->pc = 0x1644B4u;
    // 0x1644b4: 0x1480004d  bnez        $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1644B4u;
    {
        const bool branch_taken_0x1644b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644b4) {
            ctx->pc = 0x1645ECu;
            return;
        }
    }
    ctx->pc = 0x1644BCu;
    // 0x1644bc: 0x862201e8  lh          $v0, 0x1E8($s1)
    ctx->pc = 0x1644bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x1644c0: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1644C0u;
    {
        const bool branch_taken_0x1644c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1644C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644C0u;
        // 0x1644c4: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644c0) {
            ctx->pc = 0x1645ECu;
            return;
        }
    }
    ctx->pc = 0x1644C8u;
    // 0x1644c8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1644c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1644cc: 0x84430218  lh          $v1, 0x218($v0)
    ctx->pc = 0x1644ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 536)));
    // 0x1644d0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1644d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1644d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1644D4u;
    {
        const bool branch_taken_0x1644d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644d4) {
            ctx->pc = 0x1644E8u;
            return;
        }
    }
    ctx->pc = 0x1644DCu;
    // 0x1644dc: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x1644dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1644e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1644E0u;
    {
        const bool branch_taken_0x1644e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644e0) {
            ctx->pc = 0x164508u;
            return;
        }
    }
    ctx->pc = 0x1644E8u;
}
