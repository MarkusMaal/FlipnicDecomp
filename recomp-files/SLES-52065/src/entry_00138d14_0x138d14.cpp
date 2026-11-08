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

// Function: entry_00138d14
// Address: 0x138d14 - 0x138db0
void entry_00138d14_0x138d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138d14_0x138d14");
#endif

    switch (ctx->pc) {
        case 0x138d44u: goto label_138d44;
        default: break;
    }

    ctx->pc = 0x138d14u;

    // 0x138d14: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x138d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x138d18: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x138d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x138d1c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x138d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138d20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x138d24: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x138d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138d28: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138d2c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x138d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x138d30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x138d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138d34: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x138d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x138d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138d3c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x138D3Cu;
    SET_GPR_U32(ctx, 31, 0x138D44u);
    ctx->pc = 0x138D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D3Cu;
    // 0x138d40: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x138D3Cu, 0x138D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D44u;
label_138d44:
    // 0x138d44: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x138d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x138d48: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x138d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x138d4c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x138d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x138d50: 0x248901b0  addiu       $t1, $a0, 0x1B0
    ctx->pc = 0x138d50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x138d54: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x138d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x138d58: 0x248a01c0  addiu       $t2, $a0, 0x1C0
    ctx->pc = 0x138d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x138d5c: 0x8c680080  lw          $t0, 0x80($v1)
    ctx->pc = 0x138d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x138d60: 0x248b01b8  addiu       $t3, $a0, 0x1B8
    ctx->pc = 0x138d60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 440));
    // 0x138d64: 0x249301c8  addiu       $s3, $a0, 0x1C8
    ctx->pc = 0x138d64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 456));
    // 0x138d68: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x138d68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138d6c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x138d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x138d70: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x138d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138d74: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x138d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x138d78: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x138d78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x138d7c: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x138d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x138d80: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x138d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x138d84: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x138d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x138d88: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x138d88u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x138d8c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x138d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x138d90: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x138d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x138d94: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x138d94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x138d98: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x138d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x138d9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x138d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x138da0: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x138DA0u;
    {
        const bool branch_taken_0x138da0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x138DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DA0u;
        // 0x138da4: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138da0) {
            ctx->pc = 0x138DB0u;
            return;
        }
    }
    ctx->pc = 0x138DA8u;
    // 0x138da8: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x138DA8u;
    {
        const bool branch_taken_0x138da8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x138da8) {
            ctx->pc = 0x138DB8u;
            return;
        }
    }
    ctx->pc = 0x138DB0u;
}
