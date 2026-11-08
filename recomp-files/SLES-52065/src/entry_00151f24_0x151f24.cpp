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

// Function: entry_00151f24
// Address: 0x151f24 - 0x151f60
void entry_00151f24_0x151f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151f24_0x151f24");
#endif

    ctx->pc = 0x151f24u;

    // 0x151f24: 0x8f848388  lw          $a0, -0x7C78($gp)
    ctx->pc = 0x151f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x151f28: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x151f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x151f2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x151f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x151f30: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x151f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151f34: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x151f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x151f38: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x151f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x151f3c: 0x8463000a  lh          $v1, 0xA($v1)
    ctx->pc = 0x151f3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x151f40: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x151f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x151f44: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x151f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x151f48: 0x83a021  addu        $s4, $a0, $v1
    ctx->pc = 0x151f48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x151f4c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x151f4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x151f50: 0x1475002c  bne         $v1, $s5, . + 4 + (0x2C << 2)
    ctx->pc = 0x151F50u;
    {
        const bool branch_taken_0x151f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x151F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F50u;
        // 0x151f54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f50) {
            ctx->pc = 0x152004u;
            return;
        }
    }
    ctx->pc = 0x151F58u;
    // 0x151f58: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x151F58u;
    {
        const bool branch_taken_0x151f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f58) {
            ctx->pc = 0x151FECu;
            return;
        }
    }
    ctx->pc = 0x151F60u;
}
