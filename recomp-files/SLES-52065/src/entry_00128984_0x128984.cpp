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

// Function: entry_00128984
// Address: 0x128984 - 0x1289a0
void entry_00128984_0x128984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128984_0x128984");
#endif

    ctx->pc = 0x128984u;

    // 0x128984: 0x8382844c  lb          $v0, -0x7BB4($gp)
    ctx->pc = 0x128984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935628)));
    // 0x128988: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x128988u;
    {
        const bool branch_taken_0x128988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128988u;
        // 0x12898c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128988) {
            ctx->pc = 0x1289A0u;
            return;
        }
    }
    ctx->pc = 0x128990u;
    // 0x128990: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x128990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x128994: 0xa382844c  sb          $v0, -0x7BB4($gp)
    ctx->pc = 0x128994u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935628), (uint8_t)GPR_U32(ctx, 2));
    // 0x128998: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x128998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x12899c: 0xaf828448  sw          $v0, -0x7BB8($gp)
    ctx->pc = 0x12899cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 2));
    ctx->pc = 0x1289a0u;
}
