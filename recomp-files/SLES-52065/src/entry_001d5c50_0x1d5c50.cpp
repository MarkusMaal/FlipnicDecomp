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

// Function: entry_001d5c50
// Address: 0x1d5c50 - 0x1d5c88
void entry_001d5c50_0x1d5c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5c50_0x1d5c50");
#endif

    ctx->pc = 0x1d5c50u;

    // 0x1d5c50: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5c54: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d5c58: 0x2833818  mult        $a3, $s4, $v1
    ctx->pc = 0x1d5c58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d5c5c: 0x24420558  addiu       $v0, $v0, 0x558
    ctx->pc = 0x1d5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1368));
    // 0x1d5c60: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1d5c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1d5c64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5c68: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1d5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1d5c6c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d5c70: 0x14640139  bne         $v1, $a0, . + 4 + (0x139 << 2)
    ctx->pc = 0x1D5C70u;
    {
        const bool branch_taken_0x1d5c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C70u;
        // 0x1d5c74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c70) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5C78u;
    // 0x1d5c78: 0x2642ffc0  addiu       $v0, $s2, -0x40
    ctx->pc = 0x1d5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
    // 0x1d5c7c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x1D5C7Cu;
    {
        const bool branch_taken_0x1d5c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C7Cu;
        // 0x1d5c80: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c7c) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5C84u;
    // 0x1d5c84: 0x0  nop
    ctx->pc = 0x1d5c84u;
    // NOP
    ctx->pc = 0x1d5c88u;
}
