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

// Function: entry_00189dfc
// Address: 0x189dfc - 0x189e40
void entry_00189dfc_0x189dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189dfc_0x189dfc");
#endif

    ctx->pc = 0x189dfcu;

    // 0x189dfc: 0x0  nop
    ctx->pc = 0x189dfcu;
    // NOP
    // 0x189e00: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x189e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x189e04: 0x1440ff2d  bnez        $v0, . + 4 + (-0xD3 << 2)
    ctx->pc = 0x189E04u;
    {
        const bool branch_taken_0x189e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189e04) {
            ctx->pc = 0x189ABCu;
            return;
        }
    }
    ctx->pc = 0x189E0Cu;
    // 0x189e0c: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x189e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x189e10: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x189E10u;
    {
        const bool branch_taken_0x189e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E10u;
        // 0x189e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e10) {
            ctx->pc = 0x189E58u;
            return;
        }
    }
    ctx->pc = 0x189E18u;
    // 0x189e18: 0x3c02424f  lui         $v0, 0x424F
    ctx->pc = 0x189e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16975 << 16));
    // 0x189e1c: 0x3445544f  ori         $a1, $v0, 0x544F
    ctx->pc = 0x189e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21583);
    // 0x189e20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x189e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189e24: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189e28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x189e2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x189E2Cu;
    {
        const bool branch_taken_0x189e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189E2Cu;
        // 0x189e30: 0x8e830058  lw          $v1, 0x58($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189e2c) {
            ctx->pc = 0x189E40u;
            return;
        }
    }
    ctx->pc = 0x189E34u;
    // 0x189e34: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x189e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x189e38: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x189e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x189e3c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x189e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x189e40u;
}
