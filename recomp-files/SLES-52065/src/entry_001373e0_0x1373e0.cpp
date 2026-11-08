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

// Function: entry_001373e0
// Address: 0x1373e0 - 0x137408
void entry_001373e0_0x1373e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001373e0_0x1373e0");
#endif

    ctx->pc = 0x1373e0u;

    // 0x1373e0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1373e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1373e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1373e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1373e8: 0x24636da0  addiu       $v1, $v1, 0x6DA0
    ctx->pc = 0x1373e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28064));
    // 0x1373ec: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1373ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1373f0: 0x2a030022  slti        $v1, $s0, 0x22
    ctx->pc = 0x1373f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1373f4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1373f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1373f8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1373F8u;
    {
        const bool branch_taken_0x1373f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1373FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373F8u;
        // 0x1373fc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373f8) {
            ctx->pc = 0x1373C4u;
            return;
        }
    }
    ctx->pc = 0x137400u;
    // 0x137400: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x137400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x137404: 0xaf8385c4  sw          $v1, -0x7A3C($gp)
    ctx->pc = 0x137404u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936004), GPR_U32(ctx, 3));
    ctx->pc = 0x137408u;
}
