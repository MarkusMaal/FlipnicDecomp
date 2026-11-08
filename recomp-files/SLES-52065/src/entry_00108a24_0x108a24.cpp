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

// Function: entry_00108a24
// Address: 0x108a24 - 0x108a54
void entry_00108a24_0x108a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108a24_0x108a24");
#endif

    ctx->pc = 0x108a24u;

    // 0x108a24: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x108a24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x108a28: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x108a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108a2c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x108A2Cu;
    {
        const bool branch_taken_0x108a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A2Cu;
        // 0x108a30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a2c) {
            ctx->pc = 0x108A80u;
            return;
        }
    }
    ctx->pc = 0x108A34u;
    // 0x108a34: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x108a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108a38: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x108a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x108a3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x108a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x108a40: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x108a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108a44: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x108a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x108a48: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x108a48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x108a4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x108a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108a50: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x108a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    ctx->pc = 0x108a54u;
}
