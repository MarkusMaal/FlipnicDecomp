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

// Function: entry_0015d3a8
// Address: 0x15d3a8 - 0x15d3e4
void entry_0015d3a8_0x15d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d3a8_0x15d3a8");
#endif

    ctx->pc = 0x15d3a8u;

    // 0x15d3a8: 0x8ec32c1c  lw          $v1, 0x2C1C($s6)
    ctx->pc = 0x15d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11292)));
    // 0x15d3ac: 0x753021  addu        $a2, $v1, $s5
    ctx->pc = 0x15d3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x15d3b0: 0x90c3003f  lbu         $v1, 0x3F($a2)
    ctx->pc = 0x15d3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 63)));
    // 0x15d3b4: 0x1643001d  bne         $s2, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x15D3B4u;
    {
        const bool branch_taken_0x15d3b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d3b4) {
            ctx->pc = 0x15D42Cu;
            return;
        }
    }
    ctx->pc = 0x15D3BCu;
    // 0x15d3bc: 0x84c5000a  lh          $a1, 0xA($a2)
    ctx->pc = 0x15d3bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x15d3c0: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x15d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x15d3c4: 0x84c3000c  lh          $v1, 0xC($a2)
    ctx->pc = 0x15d3c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x15d3c8: 0x84c20008  lh          $v0, 0x8($a2)
    ctx->pc = 0x15d3c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15d3cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15d3d0: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x15d3d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d3d4: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x15d3d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15d3d8: 0x271082a  slt         $at, $s3, $s1
    ctx->pc = 0x15d3d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15d3dc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x15D3DCu;
    {
        const bool branch_taken_0x15d3dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3DCu;
        // 0x15d3e0: 0x13a080  sll         $s4, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3dc) {
            ctx->pc = 0x15D420u;
            return;
        }
    }
    ctx->pc = 0x15D3E4u;
}
