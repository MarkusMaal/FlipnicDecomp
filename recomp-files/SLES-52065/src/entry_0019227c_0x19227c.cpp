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

// Function: entry_0019227c
// Address: 0x19227c - 0x19229c
void entry_0019227c_0x19227c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019227c_0x19227c");
#endif

    ctx->pc = 0x19227cu;

    // 0x19227c: 0x0  nop
    ctx->pc = 0x19227cu;
    // NOP
    // 0x192280: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192280u;
    {
        const bool branch_taken_0x192280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192280) {
            ctx->pc = 0x19229Cu;
            return;
        }
    }
    ctx->pc = 0x192288u;
    // 0x192288: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19228c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192290: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x192290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x192294: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x192294u;
    {
        const bool branch_taken_0x192294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192294u;
        // 0x192298: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192294) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x19229Cu;
}
