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

// Function: entry_00144dc4
// Address: 0x144dc4 - 0x144e18
void entry_00144dc4_0x144dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144dc4_0x144dc4");
#endif

    ctx->pc = 0x144dc4u;

    // 0x144dc4: 0x0  nop
    ctx->pc = 0x144dc4u;
    // NOP
    // 0x144dc8: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x144dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144dcc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x144dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144dd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x144dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x144dd4: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x144dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x144dd8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x144dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x144ddc: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x144ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x144de0: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x144de0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x144de4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x144de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x144de8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x144de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x144dec: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x144decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x144df0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x144df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x144df4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x144df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x144df8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x144df8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144dfc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x144dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x144e00: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x144E00u;
    {
        const bool branch_taken_0x144e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144e00) {
            ctx->pc = 0x144D98u;
            return;
        }
    }
    ctx->pc = 0x144E08u;
    // 0x144e08: 0x14e00014  bnez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x144E08u;
    {
        const bool branch_taken_0x144e08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x144E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E08u;
        // 0x144e0c: 0x2511fffe  addiu       $s1, $t0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e08) {
            ctx->pc = 0x144E5Cu;
            return;
        }
    }
    ctx->pc = 0x144E10u;
    // 0x144e10: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x144E10u;
    {
        const bool branch_taken_0x144e10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x144e10) {
            ctx->pc = 0x144E4Cu;
            return;
        }
    }
    ctx->pc = 0x144E18u;
}
