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

// Function: caseD_b
// Address: 0x195038 - 0x195060
void caseD_b_0x195038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x195038");
#endif

    ctx->pc = 0x195038u;

    // 0x195038: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x195038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19503c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x19503Cu;
    {
        const bool branch_taken_0x19503c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19503c) {
            ctx->pc = 0x1950D0u;
            return;
        }
    }
    ctx->pc = 0x195044u;
    // 0x195044: 0x8e830340  lw          $v1, 0x340($s4)
    ctx->pc = 0x195044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 832)));
    // 0x195048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19504c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19504cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x195050: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x195050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x195054: 0x7c600350  sq          $zero, 0x350($v1)
    ctx->pc = 0x195054u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 848), GPR_VEC(ctx, 0));
    // 0x195058: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x195058u;
    {
        const bool branch_taken_0x195058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195058u;
        // 0x19505c: 0x24660350  addiu       $a2, $v1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195058) {
            ctx->pc = 0x195080u;
            return;
        }
    }
    ctx->pc = 0x195060u;
}
