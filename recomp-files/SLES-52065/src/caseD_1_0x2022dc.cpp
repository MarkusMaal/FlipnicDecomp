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

// Function: caseD_1
// Address: 0x2022dc - 0x2022f8
void caseD_1_0x2022dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2022dc");
#endif

    ctx->pc = 0x2022dcu;

    // 0x2022dc: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x2022dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2022e0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2022e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2022e4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2022e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2022e8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2022E8u;
    {
        const bool branch_taken_0x2022e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2022ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022E8u;
        // 0x2022ec: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022e8) {
            ctx->pc = 0x20231Cu;
            return;
        }
    }
    ctx->pc = 0x2022F0u;
    // 0x2022f0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2022f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2022f4: 0x0  nop
    ctx->pc = 0x2022f4u;
    // NOP
    ctx->pc = 0x2022f8u;
}
