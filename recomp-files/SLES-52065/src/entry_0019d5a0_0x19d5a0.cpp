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

// Function: entry_0019d5a0
// Address: 0x19d5a0 - 0x19d5f4
void entry_0019d5a0_0x19d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d5a0_0x19d5a0");
#endif

    switch (ctx->pc) {
        case 0x19d5ecu: goto label_19d5ec;
        default: break;
    }

    ctx->pc = 0x19d5a0u;

    // 0x19d5a0: 0x2a72021  addu        $a0, $s5, $a3
    ctx->pc = 0x19d5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x19d5a4: 0x8c8406b4  lw          $a0, 0x6B4($a0)
    ctx->pc = 0x19d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x19d5a8: 0x14860012  bne         $a0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x19D5A8u;
    {
        const bool branch_taken_0x19d5a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x19d5a8) {
            ctx->pc = 0x19D5F4u;
            return;
        }
    }
    ctx->pc = 0x19D5B0u;
    // 0x19d5b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x19d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19d5b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19d5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19d5b8: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x19d5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d5bc: 0xac8506b4  sw          $a1, 0x6B4($a0)
    ctx->pc = 0x19d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 5));
    // 0x19d5c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d5c4: 0xae300878  sw          $s0, 0x878($s1)
    ctx->pc = 0x19d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2168), GPR_U32(ctx, 16));
    // 0x19d5c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5cc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x19d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x19d5d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x19d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x19d5d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19d5d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x19d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x19d5dc: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x19d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
    // 0x19d5e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x19d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19d5e4: 0xc064c20  jal         func_193080
    ctx->pc = 0x19D5E4u;
    SET_GPR_U32(ctx, 31, 0x19D5ECu);
    ctx->pc = 0x19D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D5E4u;
    // 0x19d5e8: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19D5E4u, 0x19D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D5ECu;
label_19d5ec:
    // 0x19d5ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19D5ECu;
    {
        const bool branch_taken_0x19d5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d5ec) {
            ctx->pc = 0x19D60Cu;
            return;
        }
    }
    ctx->pc = 0x19D5F4u;
}
