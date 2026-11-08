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

// Function: entry_001dea20
// Address: 0x1dea20 - 0x1dea68
void entry_001dea20_0x1dea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dea20_0x1dea20");
#endif

    ctx->pc = 0x1dea20u;

    // 0x1dea20: 0x11200037  beqz        $t1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1DEA20u;
    {
        const bool branch_taken_0x1dea20 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA20u;
        // 0x1dea24: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea20) {
            ctx->pc = 0x1DEB00u;
            return;
        }
    }
    ctx->pc = 0x1DEA28u;
    // 0x1dea28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dea2c: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DEA2Cu;
    {
        const bool branch_taken_0x1dea2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dea2c) {
            ctx->pc = 0x1DEA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEA2Cu;
            // 0x1dea30: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEA94u;
            return;
        }
    }
    ctx->pc = 0x1DEA34u;
    // 0x1dea34: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1dea34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1dea38: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x1dea38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1dea3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DEA3Cu;
    {
        const bool branch_taken_0x1dea3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA3Cu;
        // 0x1dea40: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea3c) {
            ctx->pc = 0x1DEA68u;
            return;
        }
    }
    ctx->pc = 0x1DEA44u;
    // 0x1dea44: 0x2462ffc0  addiu       $v0, $v1, -0x40
    ctx->pc = 0x1dea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x1dea48: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1dea48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1dea4c: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x1dea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1dea50: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1dea50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1dea54: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1dea54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1dea58: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1dea58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1dea5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DEA5Cu;
    {
        const bool branch_taken_0x1dea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA5Cu;
        // 0x1dea60: 0x1635821  addu        $t3, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea5c) {
            ctx->pc = 0x1DEA88u;
            return;
        }
    }
    ctx->pc = 0x1DEA64u;
    // 0x1dea64: 0x0  nop
    ctx->pc = 0x1dea64u;
    // NOP
    ctx->pc = 0x1dea68u;
}
