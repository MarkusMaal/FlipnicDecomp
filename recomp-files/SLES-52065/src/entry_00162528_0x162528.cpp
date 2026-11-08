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

// Function: entry_00162528
// Address: 0x162528 - 0x162564
void entry_00162528_0x162528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162528_0x162528");
#endif

    ctx->pc = 0x162528u;

    // 0x162528: 0x4a10010  bgez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x162528u;
    {
        const bool branch_taken_0x162528 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x162528) {
            ctx->pc = 0x16256Cu;
            return;
        }
    }
    ctx->pc = 0x162530u;
    // 0x162530: 0x864401f4  lh          $a0, 0x1F4($s2)
    ctx->pc = 0x162530u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 500)));
    // 0x162534: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x162534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x162538: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x162538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x16253c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x16253cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x162540: 0x0  nop
    ctx->pc = 0x162540u;
    // NOP
    // 0x162544: 0x0  nop
    ctx->pc = 0x162544u;
    // NOP
    // 0x162548: 0x1810  mfhi        $v1
    ctx->pc = 0x162548u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x16254c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x16254cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x162550: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x162550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162554: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162554u;
    {
        const bool branch_taken_0x162554 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x162558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162554u;
        // 0x162558: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162554) {
            ctx->pc = 0x162564u;
            return;
        }
    }
    ctx->pc = 0x16255Cu;
    // 0x16255c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x16255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x162560: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x162560u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x162564u;
}
