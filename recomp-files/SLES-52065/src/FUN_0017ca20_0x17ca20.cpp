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

// Function: FUN_0017ca20
// Address: 0x17ca20 - 0x17ca90
void FUN_0017ca20_0x17ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017ca20_0x17ca20");
#endif

    switch (ctx->pc) {
        case 0x17ca60u: goto label_17ca60;
        case 0x17ca78u: goto label_17ca78;
        default: break;
    }

    ctx->pc = 0x17ca20u;

    // 0x17ca20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ca24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ca28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ca2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ca30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ca30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca34: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17CA34u;
    {
        const bool branch_taken_0x17ca34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA34u;
        // 0x17ca38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca34) {
            ctx->pc = 0x17CA78u;
            goto label_17ca78;
        }
    }
    ctx->pc = 0x17CA3Cu;
    // 0x17ca3c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17ca40: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x17ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x17ca44: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CA44u;
    {
        const bool branch_taken_0x17ca44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA44u;
        // 0x17ca48: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca44) {
            ctx->pc = 0x17CA60u;
            goto label_17ca60;
        }
    }
    ctx->pc = 0x17CA4Cu;
    // 0x17ca4c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x17ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x17ca50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ca50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca54: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x17ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x17ca58: 0xc0418a0  jal         func_106280
    ctx->pc = 0x17CA58u;
    SET_GPR_U32(ctx, 31, 0x17CA60u);
    ctx->pc = 0x17CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA58u;
    // 0x17ca5c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106280u, 0x17CA58u, 0x17CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA60u;
label_17ca60:
    // 0x17ca60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x17ca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17ca64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17ca64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17ca68: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA68u;
    {
        const bool branch_taken_0x17ca68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA68u;
        // 0x17ca6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca68) {
            ctx->pc = 0x17CA7Cu;
            goto label_17ca7c;
        }
    }
    ctx->pc = 0x17CA70u;
    // 0x17ca70: 0xc0401a4  jal         func_100690
    ctx->pc = 0x17CA70u;
    SET_GPR_U32(ctx, 31, 0x17CA78u);
    ctx->pc = 0x17CA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA70u;
    // 0x17ca74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x17CA70u, 0x17CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA78u;
label_17ca78:
    // 0x17ca78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17ca78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17ca7c:
    // 0x17ca7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17ca7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ca80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ca80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ca84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ca84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ca88: 0x3e00008  jr          $ra
    ctx->pc = 0x17CA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA88u;
        // 0x17ca8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CA90u;
}
