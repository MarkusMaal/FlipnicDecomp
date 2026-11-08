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

// Function: entry_00170458
// Address: 0x170458 - 0x170470
void entry_00170458_0x170458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170458_0x170458");
#endif

    ctx->pc = 0x170458u;

    // 0x170458: 0xac830220  sw          $v1, 0x220($a0)
    ctx->pc = 0x170458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 3));
    // 0x17045c: 0x9383848c  lbu         $v1, -0x7B74($gp)
    ctx->pc = 0x17045cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935692)));
    // 0x170460: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x170460u;
    {
        const bool branch_taken_0x170460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170460u;
        // 0x170464: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170460) {
            ctx->pc = 0x170470u;
            return;
        }
    }
    ctx->pc = 0x170468u;
    // 0x170468: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170468u;
    {
        const bool branch_taken_0x170468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170468u;
        // 0x17046c: 0x90230e53  lbu         $v1, 0xE53($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 3667)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170468) {
            ctx->pc = 0x170474u;
            return;
        }
    }
    ctx->pc = 0x170470u;
}
