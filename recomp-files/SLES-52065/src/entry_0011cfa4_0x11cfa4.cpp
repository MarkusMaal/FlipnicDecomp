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

// Function: entry_0011cfa4
// Address: 0x11cfa4 - 0x11cfc4
void entry_0011cfa4_0x11cfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cfa4_0x11cfa4");
#endif

    ctx->pc = 0x11cfa4u;

    // 0x11cfa4: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x11CFA4u;
    {
        const bool branch_taken_0x11cfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cfa4) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11CFACu;
    // 0x11cfac: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x11cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x11cfb0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CFB0u;
    {
        const bool branch_taken_0x11cfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cfb0) {
            ctx->pc = 0x11CFC4u;
            return;
        }
    }
    ctx->pc = 0x11CFB8u;
    // 0x11cfb8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cfbc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x11CFBCu;
    {
        const bool branch_taken_0x11cfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFBCu;
        // 0x11cfc0: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfbc) {
            ctx->pc = 0x11D188u;
            return;
        }
    }
    ctx->pc = 0x11CFC4u;
}
