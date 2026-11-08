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

// Function: entry_001120ac
// Address: 0x1120ac - 0x1120e8
void entry_001120ac_0x1120ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001120ac_0x1120ac");
#endif

    ctx->pc = 0x1120acu;

    // 0x1120ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1120acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1120b0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1120b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1120b4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1120b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1120b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1120b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1120bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1120bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1120c0: 0x8c482cd8  lw          $t0, 0x2CD8($v0)
    ctx->pc = 0x1120c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x1120c4: 0x91020224  lbu         $v0, 0x224($t0)
    ctx->pc = 0x1120c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 548)));
    // 0x1120c8: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x1120c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x1120cc: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x1120ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1120d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1120D0u;
    {
        const bool branch_taken_0x1120d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1120d0) {
            ctx->pc = 0x1120E8u;
            return;
        }
    }
    ctx->pc = 0x1120D8u;
    // 0x1120d8: 0x8d020228  lw          $v0, 0x228($t0)
    ctx->pc = 0x1120d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 552)));
    // 0x1120dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1120DCu;
    {
        const bool branch_taken_0x1120dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1120E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120DCu;
        // 0x1120e0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1120dc) {
            ctx->pc = 0x1120E8u;
            return;
        }
    }
    ctx->pc = 0x1120E4u;
    // 0x1120e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1120e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x1120e8u;
}
