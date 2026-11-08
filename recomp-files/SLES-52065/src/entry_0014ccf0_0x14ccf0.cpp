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

// Function: entry_0014ccf0
// Address: 0x14ccf0 - 0x14cd30
void entry_0014ccf0_0x14ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ccf0_0x14ccf0");
#endif

    ctx->pc = 0x14ccf0u;

    // 0x14ccf0: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x14ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x14ccf4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x14ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x14ccf8: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14ccf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14ccfc: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x14CCFCu;
    {
        const bool branch_taken_0x14ccfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ccfc) {
            ctx->pc = 0x14CD7Cu;
            return;
        }
    }
    ctx->pc = 0x14CD04u;
    // 0x14cd04: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x14cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x14cd08: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14cd0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14cd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14cd10: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14cd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14cd14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14cd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14cd18: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x14cd18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14cd1c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14cd20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14cd24: 0x2839021  addu        $s2, $s4, $v1
    ctx->pc = 0x14cd24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x14cd28: 0x12920014  beq         $s4, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x14CD28u;
    {
        const bool branch_taken_0x14cd28 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        ctx->pc = 0x14CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CD28u;
        // 0x14cd2c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cd28) {
            ctx->pc = 0x14CD7Cu;
            return;
        }
    }
    ctx->pc = 0x14CD30u;
}
