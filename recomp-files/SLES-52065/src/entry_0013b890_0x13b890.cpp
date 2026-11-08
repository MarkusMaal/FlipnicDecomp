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

// Function: entry_0013b890
// Address: 0x13b890 - 0x13b8b4
void entry_0013b890_0x13b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b890_0x13b890");
#endif

    ctx->pc = 0x13b890u;

    // 0x13b890: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x13b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x13b894: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B894u;
    {
        const bool branch_taken_0x13b894 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x13B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B894u;
        // 0x13b898: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b894) {
            ctx->pc = 0x13B8B4u;
            return;
        }
    }
    ctx->pc = 0x13B89Cu;
    // 0x13b89c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x13b89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13b8a0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x13b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x13b8a4: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x13b8a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13b8a8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B8A8u;
    {
        const bool branch_taken_0x13b8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b8a8) {
            ctx->pc = 0x13B8C0u;
            return;
        }
    }
    ctx->pc = 0x13B8B0u;
    // 0x13b8b0: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x13b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x13b8b4u;
}
