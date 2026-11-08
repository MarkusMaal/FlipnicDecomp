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

// Function: entry_00197ae4
// Address: 0x197ae4 - 0x197b18
void entry_00197ae4_0x197ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197ae4_0x197ae4");
#endif

    switch (ctx->pc) {
        case 0x197b04u: goto label_197b04;
        default: break;
    }

    ctx->pc = 0x197ae4u;

label_197ae4:
    // 0x197ae4: 0x0  nop
    ctx->pc = 0x197ae4u;
    // NOP
label_197ae8:
    // 0x197ae8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x197ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_197aec:
    // 0x197aec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x197aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_197af0:
    // 0x197af0: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x197af0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_197af4:
    // 0x197af4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197af8:
    // 0x197af8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197afc:
    // 0x197afc: 0x320f809  jalr        $t9
label_197b00:
    if (ctx->pc == 0x197B00u) {
        ctx->pc = 0x197B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AFCu;
        // 0x197b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B04u;
        goto label_197b04;
    }
    ctx->pc = 0x197AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197B04u);
        ctx->pc = 0x197B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AFCu;
        // 0x197b00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197AFCu, 0x197B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197B04u;
label_197b04:
    // 0x197b04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x197b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_197b08:
    // 0x197b08: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x197b08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_197b0c:
    // 0x197b0c: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_197b10:
    if (ctx->pc == 0x197B10u) {
        ctx->pc = 0x197B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B0Cu;
        // 0x197b10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B14u;
        goto label_197b14;
    }
    ctx->pc = 0x197B0Cu;
    {
        const bool branch_taken_0x197b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B0Cu;
        // 0x197b10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b0c) {
            ctx->pc = 0x197AB4u;
            return;
        }
    }
    ctx->pc = 0x197B14u;
label_197b14:
    // 0x197b14: 0xaea00324  sw          $zero, 0x324($s5)
    ctx->pc = 0x197b14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
    ctx->pc = 0x197b18u;
}
