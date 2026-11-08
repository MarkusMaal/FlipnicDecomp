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

// Function: entry_001d9170
// Address: 0x1d9170 - 0x1d91b4
void entry_001d9170_0x1d9170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9170_0x1d9170");
#endif

    ctx->pc = 0x1d9170u;

label_1d9170:
    // 0x1d9170: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d9170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d9174: 0x2485001f  addiu       $a1, $a0, 0x1F
    ctx->pc = 0x1d9174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1d9178: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1d9178u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d917c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d917cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9180: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1d9180u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1d9184: 0x22943  sra         $a1, $v0, 5
    ctx->pc = 0x1d9184u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d9188: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1d9188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1d918c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x1d918cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d9190: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d9190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d9194: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d9194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d9198: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d9198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d919c: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x1d919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d91a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d91a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d91a4: 0x1060ffe4  beqz        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D91A4u;
    {
        const bool branch_taken_0x1d91a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91A4u;
        // 0x1d91a8: 0x28c70020  slti        $a3, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91a4) {
            ctx->pc = 0x1D9138u;
            return;
        }
    }
    ctx->pc = 0x1D91ACu;
    // 0x1d91ac: 0x54e0fff0  bnel        $a3, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D91ACu;
    {
        const bool branch_taken_0x1d91ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d91ac) {
            ctx->pc = 0x1D91B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D91ACu;
            // 0x1d91b0: 0x1062021  addu        $a0, $t0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9170;
        }
    }
    ctx->pc = 0x1D91B4u;
}
