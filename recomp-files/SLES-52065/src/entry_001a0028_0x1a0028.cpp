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

// Function: entry_001a0028
// Address: 0x1a0028 - 0x1a0074
void entry_001a0028_0x1a0028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0028_0x1a0028");
#endif

    switch (ctx->pc) {
        case 0x1a0040u: goto label_1a0040;
        case 0x1a0068u: goto label_1a0068;
        default: break;
    }

    ctx->pc = 0x1a0028u;

label_1a0028:
    // 0x1a0028: 0x8d270030  lw          $a3, 0x30($t1)
    ctx->pc = 0x1a0028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_1a002c:
    // 0x1a002c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a002cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0030:
    // 0x1a0030: 0x8d280034  lw          $t0, 0x34($t1)
    ctx->pc = 0x1a0030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_1a0034:
    // 0x1a0034: 0x8d290038  lw          $t1, 0x38($t1)
    ctx->pc = 0x1a0034u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_1a0038:
    // 0x1a0038: 0xc064d84  jal         func_193610
label_1a003c:
    if (ctx->pc == 0x1A003Cu) {
        ctx->pc = 0x1A003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0038u;
        // 0x1a003c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0040u;
        goto label_1a0040;
    }
    ctx->pc = 0x1A0038u;
    SET_GPR_U32(ctx, 31, 0x1A0040u);
    ctx->pc = 0x1A003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0038u;
    // 0x1a003c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193610u, 0x1A0038u, 0x1A0040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0040u;
label_1a0040:
    // 0x1a0040: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a0044:
    // 0x1a0044: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a0044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a0048:
    // 0x1a0048: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x1a0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1a004c:
    // 0x1a004c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1a0050:
    if (ctx->pc == 0x1A0050u) {
        ctx->pc = 0x1A0054u;
        goto label_1a0054;
    }
    ctx->pc = 0x1A004Cu;
    {
        const bool branch_taken_0x1a004c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a004c) {
            ctx->pc = 0x1A0088u;
            return;
        }
    }
    ctx->pc = 0x1A0054u;
label_1a0054:
    // 0x1a0054: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1a0054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0058:
    // 0x1a0058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a005c:
    // 0x1a005c: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x1a005cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_1a0060:
    // 0x1a0060: 0x320f809  jalr        $t9
label_1a0064:
    if (ctx->pc == 0x1A0064u) {
        ctx->pc = 0x1A0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0060u;
        // 0x1a0064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0068u;
        goto label_1a0068;
    }
    ctx->pc = 0x1A0060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0068u);
        ctx->pc = 0x1A0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0060u;
        // 0x1a0064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0060u, 0x1A0068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0068u;
label_1a0068:
    // 0x1a0068: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a006c:
    if (ctx->pc == 0x1A006Cu) {
        ctx->pc = 0x1A0070u;
        goto label_1a0070;
    }
    ctx->pc = 0x1A0068u;
    {
        const bool branch_taken_0x1a0068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0068) {
            ctx->pc = 0x1A0088u;
            return;
        }
    }
    ctx->pc = 0x1A0070u;
label_1a0070:
    // 0x1a0070: 0x8d270030  lw          $a3, 0x30($t1)
    ctx->pc = 0x1a0070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    ctx->pc = 0x1a0074u;
}
