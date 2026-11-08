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

// Function: entry_00208bfc
// Address: 0x208bfc - 0x208c14
void entry_00208bfc_0x208bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208bfc_0x208bfc");
#endif

    ctx->pc = 0x208bfcu;

    // 0x208bfc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x208BFCu;
    {
        const bool branch_taken_0x208bfc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x208C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BFCu;
        // 0x208c00: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bfc) {
            ctx->pc = 0x208C14u;
            return;
        }
    }
    ctx->pc = 0x208C04u;
    // 0x208c04: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x208c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x208c08: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x208c08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x208c0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x208C0Cu;
    {
        const bool branch_taken_0x208c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C0Cu;
        // 0x208c10: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c0c) {
            ctx->pc = 0x208C24u;
            return;
        }
    }
    ctx->pc = 0x208C14u;
}
