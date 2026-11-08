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

// Function: entry_0020a478
// Address: 0x20a478 - 0x20a4a0
void entry_0020a478_0x20a478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a478_0x20a478");
#endif

    ctx->pc = 0x20a478u;

    // 0x20a478: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x20a478u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20a47c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20a47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20a480: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20a480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20a484: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x20a484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x20a488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a48c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20a490: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A490u;
    {
        const bool branch_taken_0x20a490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A490u;
        // 0x20a494: 0x2061018  mult        $v0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a490) {
            ctx->pc = 0x20A4A0u;
            return;
        }
    }
    ctx->pc = 0x20A498u;
    // 0x20a498: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20A498u;
    {
        const bool branch_taken_0x20a498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A498u;
        // 0x20a49c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a498) {
            ctx->pc = 0x20A4A4u;
            return;
        }
    }
    ctx->pc = 0x20A4A0u;
}
