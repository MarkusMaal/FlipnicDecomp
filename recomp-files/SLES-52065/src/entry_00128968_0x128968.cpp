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

// Function: entry_00128968
// Address: 0x128968 - 0x128984
void entry_00128968_0x128968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128968_0x128968");
#endif

    ctx->pc = 0x128968u;

    // 0x128968: 0x83828444  lb          $v0, -0x7BBC($gp)
    ctx->pc = 0x128968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935620)));
    // 0x12896c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12896Cu;
    {
        const bool branch_taken_0x12896c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12896Cu;
        // 0x128970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12896c) {
            ctx->pc = 0x128984u;
            return;
        }
    }
    ctx->pc = 0x128974u;
    // 0x128974: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x128974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x128978: 0xa3828444  sb          $v0, -0x7BBC($gp)
    ctx->pc = 0x128978u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935620), (uint8_t)GPR_U32(ctx, 2));
    // 0x12897c: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x12897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x128980: 0xaf828440  sw          $v0, -0x7BC0($gp)
    ctx->pc = 0x128980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U32(ctx, 2));
    ctx->pc = 0x128984u;
}
