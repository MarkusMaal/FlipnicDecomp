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

// Function: entry_00188a3c
// Address: 0x188a3c - 0x188a8c
void entry_00188a3c_0x188a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188a3c_0x188a3c");
#endif

    switch (ctx->pc) {
        case 0x188a54u: goto label_188a54;
        default: break;
    }

    ctx->pc = 0x188a3cu;

    // 0x188a3c: 0x0  nop
    ctx->pc = 0x188a3cu;
    // NOP
    // 0x188a40: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x188a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x188a44: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x188a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x188a48: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x188a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x188a4c: 0xc062214  jal         func_188850
    ctx->pc = 0x188A4Cu;
    SET_GPR_U32(ctx, 31, 0x188A54u);
    ctx->pc = 0x188A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A4Cu;
    // 0x188a50: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188850u, 0x188A4Cu, 0x188A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A54u;
label_188a54:
    // 0x188a54: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x188a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x188a58: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x188a58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a5c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x188a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x188a60: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x188a60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x188a64: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x188A64u;
    {
        const bool branch_taken_0x188a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188a64) {
            ctx->pc = 0x188A8Cu;
            return;
        }
    }
    ctx->pc = 0x188A6Cu;
    // 0x188a6c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x188a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x188a70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188A70u;
    {
        const bool branch_taken_0x188a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188a70) {
            ctx->pc = 0x188A8Cu;
            return;
        }
    }
    ctx->pc = 0x188A78u;
    // 0x188a78: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x188a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x188a7c: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x188a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x188a80: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x188a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x188a84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x188a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x188a88: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x188a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    ctx->pc = 0x188a8cu;
}
