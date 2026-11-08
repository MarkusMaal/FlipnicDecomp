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

// Function: entry_002046e8
// Address: 0x2046e8 - 0x204710
void entry_002046e8_0x2046e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002046e8_0x2046e8");
#endif

    ctx->pc = 0x2046e8u;

    // 0x2046e8: 0x33c20100  andi        $v0, $fp, 0x100
    ctx->pc = 0x2046e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)256);
    // 0x2046ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2046ECu;
    {
        const bool branch_taken_0x2046ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046ec) {
            ctx->pc = 0x2046F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2046ECu;
            // 0x2046f0: 0x2ae20066  slti        $v0, $s7, 0x66 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x204710u;
            return;
        }
    }
    ctx->pc = 0x2046F4u;
    // 0x2046f4: 0xae350004  sw          $s5, 0x4($s1)
    ctx->pc = 0x2046f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
    // 0x2046f8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2046f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2046fc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2046fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204700: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x204700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204704: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x204704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204708: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x204708u;
    {
        const bool branch_taken_0x204708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204708u;
        // 0x20470c: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204708) {
            ctx->pc = 0x204E18u;
            return;
        }
    }
    ctx->pc = 0x204710u;
}
