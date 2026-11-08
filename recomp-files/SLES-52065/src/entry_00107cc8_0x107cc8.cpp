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

// Function: entry_00107cc8
// Address: 0x107cc8 - 0x107d04
void entry_00107cc8_0x107cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107cc8_0x107cc8");
#endif

    ctx->pc = 0x107cc8u;

    // 0x107cc8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x107cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x107ccc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x107cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107cd0: 0x1683003a  bne         $s4, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x107CD0u;
    {
        const bool branch_taken_0x107cd0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x107CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CD0u;
        // 0x107cd4: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cd0) {
            ctx->pc = 0x107DBCu;
            return;
        }
    }
    ctx->pc = 0x107CD8u;
    // 0x107cd8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x107cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x107cdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x107cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x107ce0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x107ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x107ce4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x107ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x107ce8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x107ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x107cec: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x107cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x107cf0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x107cf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107cf4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107CF4u;
    {
        const bool branch_taken_0x107cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CF4u;
        // 0x107cf8: 0x24b60008  addiu       $s6, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cf4) {
            ctx->pc = 0x107D04u;
            return;
        }
    }
    ctx->pc = 0x107CFCu;
    // 0x107cfc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107CFCu;
    {
        const bool branch_taken_0x107cfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x107cfc) {
            ctx->pc = 0x107D10u;
            return;
        }
    }
    ctx->pc = 0x107D04u;
}
