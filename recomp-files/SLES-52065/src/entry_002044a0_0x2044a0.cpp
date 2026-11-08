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

// Function: entry_002044a0
// Address: 0x2044a0 - 0x2044e0
void entry_002044a0_0x2044a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002044a0_0x2044a0");
#endif

    ctx->pc = 0x2044a0u;

    // 0x2044a0: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2044A0u;
    {
        const bool branch_taken_0x2044a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044A0u;
        // 0x2044a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044a0) {
            ctx->pc = 0x2044E0u;
            return;
        }
    }
    ctx->pc = 0x2044A8u;
    // 0x2044a8: 0x27a401d1  addiu       $a0, $sp, 0x1D1
    ctx->pc = 0x2044a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 465));
    // 0x2044ac: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2044acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2044b0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2044b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2044b4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2044b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2044b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2044b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2044bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2044bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2044c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2044c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2044c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2044c8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2044c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2044cc: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x2044ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2044d0: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2044D0u;
    {
        const bool branch_taken_0x2044d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2044D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044D0u;
        // 0x2044d4: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044d0) {
            ctx->pc = 0x204544u;
            return;
        }
    }
    ctx->pc = 0x2044D8u;
    // 0x2044d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2044D8u;
    {
        const bool branch_taken_0x2044d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044D8u;
        // 0x2044dc: 0x8fa401e8  lw          $a0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044d8) {
            ctx->pc = 0x20452Cu;
            return;
        }
    }
    ctx->pc = 0x2044E0u;
}
