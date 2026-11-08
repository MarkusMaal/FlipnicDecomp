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

// Function: entry_00205b38
// Address: 0x205b38 - 0x205b70
void entry_00205b38_0x205b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205b38_0x205b38");
#endif

    ctx->pc = 0x205b38u;

    // 0x205b38: 0x26d30001  addiu       $s3, $s6, 0x1
    ctx->pc = 0x205b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x205b3c: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x205b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x205b40: 0x1000fdd8  b           . + 4 + (-0x228 << 2)
    ctx->pc = 0x205B40u;
    {
        const bool branch_taken_0x205b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B40u;
        // 0x205b44: 0x3c2f021  addu        $fp, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b40) {
            ctx->pc = 0x2052A4u;
            return;
        }
    }
    ctx->pc = 0x205B48u;
    // 0x205b48: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x205b48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x205b4c: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x205b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x205b50: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x205b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
    // 0x205b54: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x205b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x205b58: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x205b58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x205b5c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x205b5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x205b60: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x205B60u;
    {
        const bool branch_taken_0x205b60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x205B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B60u;
        // 0x205b64: 0x367303c0  ori         $s3, $s3, 0x3C0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205b60) {
            ctx->pc = 0x205C2Cu;
            return;
        }
    }
    ctx->pc = 0x205B68u;
    // 0x205b68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x205b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x205b6c: 0x0  nop
    ctx->pc = 0x205b6cu;
    // NOP
    ctx->pc = 0x205b70u;
}
