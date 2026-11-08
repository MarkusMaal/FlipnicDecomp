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

// Function: entry_001dc170
// Address: 0x1dc170 - 0x1dc1a0
void entry_001dc170_0x1dc170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc170_0x1dc170");
#endif

    ctx->pc = 0x1dc170u;

    // 0x1dc170: 0x108000d5  beqz        $a0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1DC170u;
    {
        const bool branch_taken_0x1dc170 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC170u;
        // 0x1dc174: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc170) {
            ctx->pc = 0x1DC4C8u;
            return;
        }
    }
    ctx->pc = 0x1DC178u;
    // 0x1dc178: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dc178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dc17c: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1dc17cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc180: 0x18800016  blez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DC180u;
    {
        const bool branch_taken_0x1dc180 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1DC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC180u;
        // 0x1dc184: 0x8c467320  lw          $a2, 0x7320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc180) {
            ctx->pc = 0x1DC1DCu;
            return;
        }
    }
    ctx->pc = 0x1DC188u;
    // 0x1dc188: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dc188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dc18c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dc18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc190: 0x24487338  addiu       $t0, $v0, 0x7338
    ctx->pc = 0x1dc190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 29496));
    // 0x1dc194: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1dc194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc198: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1dc198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dc19c: 0x0  nop
    ctx->pc = 0x1dc19cu;
    // NOP
    ctx->pc = 0x1dc1a0u;
}
