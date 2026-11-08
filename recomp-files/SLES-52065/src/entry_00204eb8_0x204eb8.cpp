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

// Function: entry_00204eb8
// Address: 0x204eb8 - 0x204ed0
void entry_00204eb8_0x204eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204eb8_0x204eb8");
#endif

    ctx->pc = 0x204eb8u;

    // 0x204eb8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x204eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x204ebc: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x204ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x204ec0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x204EC0u;
    {
        const bool branch_taken_0x204ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EC0u;
        // 0x204ec4: 0x24c25180  addiu       $v0, $a2, 0x5180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ec0) {
            ctx->pc = 0x204E68u;
            return;
        }
    }
    ctx->pc = 0x204EC8u;
    // 0x204ec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204EC8u;
    {
        const bool branch_taken_0x204ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EC8u;
        // 0x204ecc: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ec8) {
            ctx->pc = 0x204ED8u;
            return;
        }
    }
    ctx->pc = 0x204ED0u;
}
