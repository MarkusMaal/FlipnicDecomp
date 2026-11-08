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

// Function: entry_001d56b0
// Address: 0x1d56b0 - 0x1d56ec
void entry_001d56b0_0x1d56b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d56b0_0x1d56b0");
#endif

    ctx->pc = 0x1d56b0u;

label_1d56b0:
    // 0x1d56b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d56b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d56b4: 0x2485001f  addiu       $a1, $a0, 0x1F
    ctx->pc = 0x1d56b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1d56b8: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1d56b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d56bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d56bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d56c0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1d56c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1d56c4: 0x22943  sra         $a1, $v0, 5
    ctx->pc = 0x1d56c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d56c8: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1d56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1d56cc: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x1d56ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d56d0: 0xaa8018  mult        $s0, $a1, $t2
    ctx->pc = 0x1d56d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1d56d4: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1d56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1d56d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d56dc: 0x1069ffe0  beq         $v1, $t1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D56DCu;
    {
        const bool branch_taken_0x1d56dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        ctx->pc = 0x1D56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56DCu;
        // 0x1d56e0: 0x28e60020  slti        $a2, $a3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56dc) {
            ctx->pc = 0x1D5660u;
            return;
        }
    }
    ctx->pc = 0x1D56E4u;
    // 0x1d56e4: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D56E4u;
    {
        const bool branch_taken_0x1d56e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56E4u;
        // 0x1d56e8: 0x1072021  addu        $a0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56e4) {
            ctx->pc = 0x1D56B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d56b0;
        }
    }
    ctx->pc = 0x1D56ECu;
}
