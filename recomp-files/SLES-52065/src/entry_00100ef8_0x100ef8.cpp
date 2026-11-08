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

// Function: entry_00100ef8
// Address: 0x100ef8 - 0x100f10
void entry_00100ef8_0x100ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ef8_0x100ef8");
#endif

    ctx->pc = 0x100ef8u;

    // 0x100ef8: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x100ef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x100efc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x100EFCu;
    {
        const bool branch_taken_0x100efc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EFCu;
        // 0x100f00: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100efc) {
            ctx->pc = 0x100F30u;
            return;
        }
    }
    ctx->pc = 0x100F04u;
    // 0x100f04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100f08: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x100f08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x100f0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x100f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x100f10u;
}
