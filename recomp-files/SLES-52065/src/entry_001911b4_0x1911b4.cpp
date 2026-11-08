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

// Function: entry_001911b4
// Address: 0x1911b4 - 0x1911e0
void entry_001911b4_0x1911b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001911b4_0x1911b4");
#endif

    ctx->pc = 0x1911b4u;

    // 0x1911b4: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x1911b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1911b8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1911b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1911bc: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1911bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1911c0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1911c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1911c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1911c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1911c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1911c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1911cc: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x1911ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x1911d0: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1911D0u;
    {
        const bool branch_taken_0x1911d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1911d0) {
            ctx->pc = 0x1911E0u;
            return;
        }
    }
    ctx->pc = 0x1911D8u;
    // 0x1911d8: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x1911D8u;
    {
        const bool branch_taken_0x1911d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911D8u;
        // 0x1911dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911d8) {
            ctx->pc = 0x19169Cu;
            return;
        }
    }
    ctx->pc = 0x1911E0u;
}
