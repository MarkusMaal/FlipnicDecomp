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

// Function: entry_00194f78
// Address: 0x194f78 - 0x194fa0
void entry_00194f78_0x194f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194f78_0x194f78");
#endif

    ctx->pc = 0x194f78u;

    // 0x194f78: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x194f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x194f7c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x194f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x194f80: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x194f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x194f84: 0x8c4428dc  lw          $a0, 0x28DC($v0)
    ctx->pc = 0x194f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10460)));
    // 0x194f88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x194f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194f90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194F90u;
    {
        const bool branch_taken_0x194f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F90u;
        // 0x194f94: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f90) {
            ctx->pc = 0x194FA0u;
            return;
        }
    }
    ctx->pc = 0x194F98u;
    // 0x194f98: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x194f98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x194f9c: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x194f9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
    ctx->pc = 0x194fa0u;
}
