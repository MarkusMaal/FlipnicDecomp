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

// Function: entry_00174dec
// Address: 0x174dec - 0x174e3c
void entry_00174dec_0x174dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174dec_0x174dec");
#endif

    switch (ctx->pc) {
        case 0x174e14u: goto label_174e14;
        default: break;
    }

    ctx->pc = 0x174decu;

    // 0x174dec: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x174decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x174df0: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x174df0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x174df4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x174df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x174df8: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x174df8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x174dfc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x174dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x174e00: 0x24c67630  addiu       $a2, $a2, 0x7630
    ctx->pc = 0x174e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30256));
    // 0x174e04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x174e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x174e08: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x174e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x174e0c: 0xc05c5cc  jal         func_171730
    ctx->pc = 0x174E0Cu;
    SET_GPR_U32(ctx, 31, 0x174E14u);
    ctx->pc = 0x174E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E0Cu;
    // 0x174e10: 0x24650010  addiu       $a1, $v1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171730u, 0x174E0Cu, 0x174E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E14u;
label_174e14:
    // 0x174e14: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x174e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x174e18: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x174e18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x174e1c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x174e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x174e20: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x174e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x174e24: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x174e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x174e28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x174e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x174e2c: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x174e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x174e30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x174e30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174e34: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x174e34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x174e38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x174e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x174e3cu;
}
