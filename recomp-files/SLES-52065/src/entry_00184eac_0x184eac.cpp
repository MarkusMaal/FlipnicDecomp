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

// Function: entry_00184eac
// Address: 0x184eac - 0x184ec8
void entry_00184eac_0x184eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184eac_0x184eac");
#endif

    ctx->pc = 0x184eacu;

    // 0x184eac: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184EACu;
    {
        const bool branch_taken_0x184eac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x184EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EACu;
        // 0x184eb0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184eac) {
            ctx->pc = 0x184EC8u;
            return;
        }
    }
    ctx->pc = 0x184EB4u;
    // 0x184eb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x184eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184eb8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x184eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x184ebc: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x184ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x184ec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x184EC0u;
    {
        const bool branch_taken_0x184ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184EC0u;
        // 0x184ec4: 0xb12823  subu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ec0) {
            ctx->pc = 0x184ECCu;
            return;
        }
    }
    ctx->pc = 0x184EC8u;
}
