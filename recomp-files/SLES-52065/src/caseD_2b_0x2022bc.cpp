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

// Function: caseD_2b
// Address: 0x2022bc - 0x2022d4
void caseD_2b_0x2022bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2b_0x2022bc");
#endif

    ctx->pc = 0x2022bcu;

    // 0x2022bc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2022bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2022c0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2022c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2022c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2022C4u;
    {
        const bool branch_taken_0x2022c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2022C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022C4u;
        // 0x2022c8: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022c4) {
            ctx->pc = 0x2022DCu;
            return;
        }
    }
    ctx->pc = 0x2022CCu;
    // 0x2022cc: 0x10000387  b           . + 4 + (0x387 << 2)
    ctx->pc = 0x2022CCu;
    {
        const bool branch_taken_0x2022cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022CCu;
        // 0x2022d0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022cc) {
            ctx->pc = 0x2030ECu;
            return;
        }
    }
    ctx->pc = 0x2022D4u;
}
