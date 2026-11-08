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

// Function: entry_001e402c
// Address: 0x1e402c - 0x1e4078
void entry_001e402c_0x1e402c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e402c_0x1e402c");
#endif

    switch (ctx->pc) {
        case 0x1e4068u: goto label_1e4068;
        default: break;
    }

    ctx->pc = 0x1e402cu;

label_1e402c:
    // 0x1e402c: 0x92020042  lbu         $v0, 0x42($s0)
    ctx->pc = 0x1e402cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 66)));
label_1e4030:
    // 0x1e4030: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1e4034:
    if (ctx->pc == 0x1E4034u) {
        ctx->pc = 0x1E4038u;
        goto label_1e4038;
    }
    ctx->pc = 0x1E4030u;
    {
        const bool branch_taken_0x1e4030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4030) {
            ctx->pc = 0x1E40A4u;
            return;
        }
    }
    ctx->pc = 0x1E4038u;
label_1e4038:
    // 0x1e4038: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e4038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e403c:
    // 0x1e403c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1e4040:
    if (ctx->pc == 0x1E4040u) {
        ctx->pc = 0x1E4044u;
        goto label_1e4044;
    }
    ctx->pc = 0x1E403Cu;
    {
        const bool branch_taken_0x1e403c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e403c) {
            ctx->pc = 0x1E40A4u;
            return;
        }
    }
    ctx->pc = 0x1E4044u;
label_1e4044:
    // 0x1e4044: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e4044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e4048:
    // 0x1e4048: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e4048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1e404c:
    // 0x1e404c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1e404cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e4050:
    // 0x1e4050: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e4054:
    if (ctx->pc == 0x1E4054u) {
        ctx->pc = 0x1E4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4050u;
        // 0x1e4054: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4058u;
        goto label_1e4058;
    }
    ctx->pc = 0x1E4050u;
    {
        const bool branch_taken_0x1e4050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4050u;
        // 0x1e4054: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4050) {
            ctx->pc = 0x1E4078u;
            return;
        }
    }
    ctx->pc = 0x1E4058u;
label_1e4058:
    // 0x1e4058: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e405c:
    // 0x1e405c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1e405cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1e4060:
    // 0x1e4060: 0x320f809  jalr        $t9
label_1e4064:
    if (ctx->pc == 0x1E4064u) {
        ctx->pc = 0x1E4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4060u;
        // 0x1e4064: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4068u;
        goto label_1e4068;
    }
    ctx->pc = 0x1E4060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4068u);
        ctx->pc = 0x1E4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4060u;
        // 0x1e4064: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4060u, 0x1E4068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4068u;
label_1e4068:
    // 0x1e4068: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e406c:
    // 0x1e406c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1e4070:
    if (ctx->pc == 0x1E4070u) {
        ctx->pc = 0x1E4074u;
        goto label_1e4074;
    }
    ctx->pc = 0x1E406Cu;
    {
        const bool branch_taken_0x1e406c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e406c) {
            ctx->pc = 0x1E4078u;
            return;
        }
    }
    ctx->pc = 0x1E4074u;
label_1e4074:
    // 0x1e4074: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1e4074u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1e4078u;
}
