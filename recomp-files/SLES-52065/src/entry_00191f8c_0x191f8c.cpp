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

// Function: entry_00191f8c
// Address: 0x191f8c - 0x191fac
void entry_00191f8c_0x191f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191f8c_0x191f8c");
#endif

    ctx->pc = 0x191f8cu;

    // 0x191f8c: 0x0  nop
    ctx->pc = 0x191f8cu;
    // NOP
    // 0x191f90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x191F90u;
    {
        const bool branch_taken_0x191f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f90) {
            ctx->pc = 0x191FACu;
            return;
        }
    }
    ctx->pc = 0x191F98u;
    // 0x191f98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191f9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x191f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191fa0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x191fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x191fa4: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x191FA4u;
    {
        const bool branch_taken_0x191fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FA4u;
        // 0x191fa8: 0xac4304d0  sw          $v1, 0x4D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fa4) {
            ctx->pc = 0x192324u;
            return;
        }
    }
    ctx->pc = 0x191FACu;
}
