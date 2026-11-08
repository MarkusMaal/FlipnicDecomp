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

// Function: entry_001231f0
// Address: 0x1231f0 - 0x123240
void entry_001231f0_0x1231f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001231f0_0x1231f0");
#endif

    switch (ctx->pc) {
        case 0x123238u: goto label_123238;
        default: break;
    }

    ctx->pc = 0x1231f0u;

    // 0x1231f0: 0x1200005e  beqz        $s0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1231F0u;
    {
        const bool branch_taken_0x1231f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231f0) {
            ctx->pc = 0x12336Cu;
            return;
        }
    }
    ctx->pc = 0x1231F8u;
    // 0x1231f8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1231f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1231fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1231fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123200: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x123200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123204: 0x30c50001  andi        $a1, $a2, 0x1
    ctx->pc = 0x123204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x123208: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x123208u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12320c: 0x14a3000c  bne         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12320Cu;
    {
        const bool branch_taken_0x12320c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x12320c) {
            ctx->pc = 0x123240u;
            return;
        }
    }
    ctx->pc = 0x123214u;
    // 0x123214: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x123214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x123218: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x123218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x12321c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x12321cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x123220: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x123220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x123224: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x123224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x123228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12322c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x12322cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x123230: 0xc048e74  jal         func_1239D0
    ctx->pc = 0x123230u;
    SET_GPR_U32(ctx, 31, 0x123238u);
    ctx->pc = 0x123234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123230u;
    // 0x123234: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1239D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239D0u, 0x123230u, 0x123238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123238u;
label_123238:
    // 0x123238: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x123238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12323c: 0x0  nop
    ctx->pc = 0x12323cu;
    // NOP
    ctx->pc = 0x123240u;
}
