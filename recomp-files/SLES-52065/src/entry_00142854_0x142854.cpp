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

// Function: entry_00142854
// Address: 0x142854 - 0x142894
void entry_00142854_0x142854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142854_0x142854");
#endif

    ctx->pc = 0x142854u;

    // 0x142854: 0xa3d30028  sb          $s3, 0x28($fp)
    ctx->pc = 0x142854u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 40), (uint8_t)GPR_U32(ctx, 19));
    // 0x142858: 0xafc00010  sw          $zero, 0x10($fp)
    ctx->pc = 0x142858u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
    // 0x14285c: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x14285cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
    // 0x142860: 0xa3c0002a  sb          $zero, 0x2A($fp)
    ctx->pc = 0x142860u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x142864: 0x93c20029  lbu         $v0, 0x29($fp)
    ctx->pc = 0x142864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 41)));
    // 0x142868: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x142868u;
    {
        const bool branch_taken_0x142868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142868) {
            ctx->pc = 0x142928u;
            return;
        }
    }
    ctx->pc = 0x142870u;
    // 0x142870: 0x93c30028  lbu         $v1, 0x28($fp)
    ctx->pc = 0x142870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x142874: 0x8fc20050  lw          $v0, 0x50($fp)
    ctx->pc = 0x142874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 80)));
    // 0x142878: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x142878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14287c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142880: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x142880u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x142884: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x142884u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x142888: 0x12082b  sltu        $at, $zero, $s2
    ctx->pc = 0x142888u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x14288c: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x14288Cu;
    {
        const bool branch_taken_0x14288c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x142890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14288Cu;
        // 0x142890: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14288c) {
            ctx->pc = 0x1429BCu;
            return;
        }
    }
    ctx->pc = 0x142894u;
}
